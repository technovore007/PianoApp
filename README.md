---

# 🎹 PianoApp

A simple **virtual piano application** built with **Qt 6 (C++/Widgets)**.
Play musical notes using buttons, control power, and adjust volume — all in a lightweight desktop app.

---

## ✨ Features

* 🎵 Play piano notes (C4–C5, sharps & flats included).
* 🔊 Volume control (slider).
* ⏻ Power ON/OFF button (green = ON, red = OFF).
* 🎨 Custom styled UI with Qt Stylesheets.
* ⚡ Instant sound playback using **QSoundEffect**.

---

## 🚀 Getting Started

### Prerequisites

* Qt 6.9+ with Qt Creator.
* CMake (if building manually).
* A C++17 compiler (e.g., MinGW, MSVC, GCC).

### Clone the Repository

```bash
git clone https://github.com/your-username/PianoApp.git
cd PianoApp
```

### Open in Qt Creator

1. Open `CMakeLists.txt` in **Qt Creator**.
2. Configure the project for your kit (e.g., `Desktop Qt 6.9.1 MinGW 64-bit`).
3. Build & Run.

---

## 🎛 Controls

* **Piano Keys** → Play notes (C4, D4, E4 … C5).
* **ON/OFF Button** → Toggles power (green ON, red OFF).
* **Volume Slider** → Adjust playback volume.

---

## 🛠 Project Structure

```
PianoApp/
│── sounds/              # WAV sound files (C4.wav, A4.wav, etc.)
│── resources.qrc        # Qt Resource file for sounds
│── mainwindow.ui        # UI layout (Qt Designer)
│── mainwindow.cpp       # UI logic & button handling
│── main.cpp             # Entry point
│── CMakeLists.txt       # Build configuration
└── README.md            # Project documentation
```

---

## 📦 Resources

* Qt Documentation: [QSoundEffect](https://doc.qt.io/qt-6/qsoundeffect.html)
* Qt Resource System: [Using Resources](https://doc.qt.io/qt-6/resources.html)

---

## 🤝 Contributing

Pull requests are welcome! Please open an issue to discuss before making major changes.

---

## 📜 License

This project is licensed under the **MIT License** – free to use, modify, and share.

---
