#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSoundEffect>  // For sound effects

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    // Sound effects for each key
    QSoundEffect soundC;
    QSoundEffect soundD;
    QSoundEffect soundE;
    QSoundEffect soundF;
    QSoundEffect soundG;
    QSoundEffect soundA;
    QSoundEffect soundB;
    QSoundEffect soundC1;
    QSoundEffect soundD1;
    QSoundEffect soundE1;

    // Black keys
    QSoundEffect soundCSharp;
    QSoundEffect soundDSharp;
    QSoundEffect soundFSharp;
    QSoundEffect soundGSharp;
    QSoundEffect soundBFlat;
    QSoundEffect soundCSharp1;
    QSoundEffect soundDSharp1;
};

#endif // MAINWINDOW_H
