#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QSoundEffect>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Create sound objects for each button
    QSoundEffect *soundA4       = new QSoundEffect(this);
    QSoundEffect *soundB4       = new QSoundEffect(this);
    QSoundEffect *soundBb4      = new QSoundEffect(this);
    QSoundEffect *soundC4       = new QSoundEffect(this);
    QSoundEffect *soundC5       = new QSoundEffect(this);
    QSoundEffect *soundCsharp4  = new QSoundEffect(this);
    QSoundEffect *soundCsharp5  = new QSoundEffect(this);
    QSoundEffect *soundD4       = new QSoundEffect(this);
    QSoundEffect *soundD5       = new QSoundEffect(this);
    QSoundEffect *soundDsharp4  = new QSoundEffect(this);
    QSoundEffect *soundDsharp5  = new QSoundEffect(this);
    QSoundEffect *soundE4       = new QSoundEffect(this);
    QSoundEffect *soundE5       = new QSoundEffect(this);
    QSoundEffect *soundF4       = new QSoundEffect(this);
    QSoundEffect *soundFsharp4  = new QSoundEffect(this);
    QSoundEffect *soundG4       = new QSoundEffect(this);
    QSoundEffect *soundGsharp4  = new QSoundEffect(this);

    // Set sources from resource file
    soundA4->setSource(QUrl("qrc:/sounds/sounds/A4.wav"));
    soundB4->setSource(QUrl("qrc:/sounds/sounds/B4.wav"));
    soundBb4->setSource(QUrl("qrc:/sounds/sounds/Bb4.wav"));
    soundC4->setSource(QUrl("qrc:/sounds/sounds/C4.wav"));
    soundC5->setSource(QUrl("qrc:/sounds/sounds/C5.wav"));
    soundCsharp4->setSource(QUrl("qrc:/sounds/sounds/C_Sharp_4.wav"));
    soundCsharp5->setSource(QUrl("qrc:/sounds/sounds/C_Sharp_5.wav"));
    soundD4->setSource(QUrl("qrc:/sounds/sounds/D4.wav"));
    soundD5->setSource(QUrl("qrc:/sounds/sounds/D5.wav"));
    soundDsharp4->setSource(QUrl("qrc:/sounds/sounds/D_Sharp_4.wav"));
    soundDsharp5->setSource(QUrl("qrc:/sounds/sounds/D_Sharp_5.wav"));
    soundE4->setSource(QUrl("qrc:/sounds/sounds/E4.wav"));
    soundE5->setSource(QUrl("qrc:/sounds/sounds/E5.wav"));
    soundF4->setSource(QUrl("qrc:/sounds/sounds/F4.wav"));
    soundFsharp4->setSource(QUrl("qrc:/sounds/sounds/F_Sharp_4.wav"));
    soundG4->setSource(QUrl("qrc:/sounds/sounds/G4.wav"));
    soundGsharp4->setSource(QUrl("qrc:/sounds/sounds/G_Sharp_4.wav"));



    // Connect white keys
    connect(ui->btn_C,  &QPushButton::clicked, soundC4, &QSoundEffect::play);
    connect(ui->btn_D,  &QPushButton::clicked, soundD4, &QSoundEffect::play);
    connect(ui->btn_E,  &QPushButton::clicked, soundE4, &QSoundEffect::play);
    connect(ui->btn_F,  &QPushButton::clicked, soundF4, &QSoundEffect::play);
    connect(ui->btn_G,  &QPushButton::clicked, soundG4, &QSoundEffect::play);
    connect(ui->btn_A,  &QPushButton::clicked, soundA4, &QSoundEffect::play);
    connect(ui->btn_B,  &QPushButton::clicked, soundB4, &QSoundEffect::play);

    connect(ui->btn_C1, &QPushButton::clicked, soundC5, &QSoundEffect::play);
    connect(ui->btn_D1, &QPushButton::clicked, soundD5, &QSoundEffect::play);
    connect(ui->btn_E1, &QPushButton::clicked, soundE5, &QSoundEffect::play);

    // Connect black keys
    connect(ui->btn_C_sharp,  &QPushButton::clicked, soundCsharp4, &QSoundEffect::play);
    connect(ui->btn_D_sharp,  &QPushButton::clicked, soundDsharp4, &QSoundEffect::play);
    connect(ui->btn_F_sharp,  &QPushButton::clicked, soundFsharp4, &QSoundEffect::play);
    connect(ui->btn_G_sharp,  &QPushButton::clicked, soundGsharp4, &QSoundEffect::play);
    connect(ui->btn_B_flat,   &QPushButton::clicked, soundBb4, &QSoundEffect::play);

    connect(ui->btn_C_sharp1, &QPushButton::clicked, soundCsharp5, &QSoundEffect::play);
    connect(ui->btn_D_sharp1, &QPushButton::clicked, soundDsharp5, &QSoundEffect::play);

    // Connects the vertical volume slider to the QSoundEffect objects
    auto setVolume = [=](int value) {
        qreal vol = value / 100.0; // QSlider: 0..100 to QSoundEffect: 0..1
        soundA4->setVolume(vol);
        soundB4->setVolume(vol);
        soundBb4->setVolume(vol);
        soundC4->setVolume(vol);
        soundC5->setVolume(vol);
        soundCsharp4->setVolume(vol);
        soundCsharp5->setVolume(vol);
        soundD4->setVolume(vol);
        soundD5->setVolume(vol);
        soundDsharp4->setVolume(vol);
        soundDsharp5->setVolume(vol);
        soundE4->setVolume(vol);
        soundE5->setVolume(vol);
        soundF4->setVolume(vol);
        soundFsharp4->setVolume(vol);
        soundG4->setVolume(vol);
        soundGsharp4->setVolume(vol);
    };
    connect(ui->VolumeSlider, &QSlider::valueChanged, setVolume);
    setVolume(ui->VolumeSlider->value());


}

MainWindow::~MainWindow()
{
    delete ui;
}
