import numpy as np
import sounddevice as sd
import wave
import struct
import os

# Folder to save sounds
OUTPUT_DIR = "piano_notes"
os.makedirs(OUTPUT_DIR, exist_ok=True)

# Frequencies for notes
NOTES = [
    ("C4", 261.63),
    ("C#4", 277.18),
    ("D4", 293.66),
    ("D#4", 311.13),
    ("E4", 329.63),
    ("F4", 349.23),
    ("F#4", 369.99),
    ("G4", 392.00),
    ("G#4", 415.30),
    ("A4", 440.00),
    ("Bb4", 466.16),
    ("B4", 493.88),
    ("C5", 523.25),
    ("C#5", 554.37),
    ("D5", 587.33),
    ("D#5", 622.25),
    ("E5", 659.26),
]

# Audio parameters
SAMPLE_RATE = 44100  # 44.1kHz for Qt compatibility
DURATION = 3  # seconds
AMPLITUDE = 32767  # 16-bit max

def generate_piano_wave(freq, duration, sample_rate):
    """Generate a sine wave with gentle overtones for piano-like sound."""
    t = np.linspace(0, duration, int(sample_rate * duration), False)
    # Base sine wave + harmonics
    wave_data = (
        np.sin(2 * np.pi * freq * t) * 0.6 +
        np.sin(2 * np.pi * freq * 2 * t) * 0.3 +
        np.sin(2 * np.pi * freq * 3 * t) * 0.1
    )
    # Apply exponential decay (piano fade-out)
    envelope = np.exp(-3 * t)
    wave_data *= envelope
    return wave_data

def save_wav(filename, data, sample_rate):
    """Save audio as 16-bit PCM WAV."""
    with wave.open(filename, 'w') as wf:
        wf.setnchannels(1)  # mono
        wf.setsampwidth(2)  # 16-bit
        wf.setframerate(sample_rate)
        wf.writeframes(b''.join(struct.pack('<h', int(x * AMPLITUDE)) for x in data))

def verify_wav(filename):
    """Check if WAV is PCM 16-bit mono."""
    with wave.open(filename, 'rb') as wf:
        return (
            wf.getnchannels() == 1 and
            wf.getsampwidth() == 2 and
            wf.getframerate() == SAMPLE_RATE
        )

print("Generating piano note WAV files...")

for note, freq in NOTES:
    wav_path = os.path.join(OUTPUT_DIR, f"{note}.wav")
    audio_data = generate_piano_wave(freq, DURATION, SAMPLE_RATE)
    save_wav(wav_path, audio_data, SAMPLE_RATE)

    # Verify format
    if verify_wav(wav_path):
        print(f"[OK] {note}.wav saved and verified.")
    else:
        print(f"[ERROR] {note}.wav format issue.")

    # Test play
    print(f"Playing {note}...")
    sd.play(audio_data, SAMPLE_RATE)
    sd.wait()

print("\nAll files generated in:", OUTPUT_DIR)
