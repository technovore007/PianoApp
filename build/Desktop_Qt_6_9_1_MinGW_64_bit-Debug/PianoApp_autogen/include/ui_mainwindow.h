/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btn_C;
    QPushButton *btn_D;
    QPushButton *btn_E;
    QPushButton *btn_G;
    QPushButton *btn_F;
    QPushButton *btn_B;
    QPushButton *btn_A;
    QPushButton *btn_C1;
    QPushButton *btn_D1;
    QPushButton *btn_E1;
    QPushButton *btn_C_sharp;
    QPushButton *btn_D_sharp;
    QPushButton *btn_F_sharp;
    QPushButton *btn_G_sharp;
    QPushButton *btn_B_flat;
    QPushButton *btn_C_sharp1;
    QPushButton *btn_D_sharp1;
    QWidget *PianoBody;
    QFrame *frame;
    QSlider *VolumeSlider;
    QPushButton *PowerButton;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuPianoWindow;
    QStatusBar *statusbar;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1276, 725);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        btn_C = new QPushButton(centralwidget);
        buttonGroup = new QButtonGroup(MainWindow);
        buttonGroup->setObjectName("buttonGroup");
        buttonGroup->addButton(btn_C);
        btn_C->setObjectName("btn_C");
        btn_C->setGeometry(QRect(110, 90, 72, 290));
        btn_C->setMinimumSize(QSize(72, 290));
        btn_C->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: white;\n"
"    border: 1px solid black;\n"
"    border-radius: 0px; /* no rounded corners */\n"
"    min-width: 70px;\n"
"    min-height: 288px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #ddd; /* slightly darker when pressed */\n"
"}\n"
""));
        btn_D = new QPushButton(centralwidget);
        buttonGroup->addButton(btn_D);
        btn_D->setObjectName("btn_D");
        btn_D->setGeometry(QRect(190, 90, 72, 290));
        btn_D->setMinimumSize(QSize(72, 290));
        btn_D->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: white;\n"
"    border: 1px solid black;\n"
"    border-radius: 0px; /* no rounded corners */\n"
"    min-width: 70px;\n"
"    min-height: 288px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #ddd; /* slightly darker when pressed */\n"
"}\n"
""));
        btn_E = new QPushButton(centralwidget);
        buttonGroup->addButton(btn_E);
        btn_E->setObjectName("btn_E");
        btn_E->setGeometry(QRect(270, 90, 72, 290));
        btn_E->setMinimumSize(QSize(72, 290));
        btn_E->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: white;\n"
"    border: 1px solid black;\n"
"    border-radius: 0px; /* no rounded corners */\n"
"    min-width: 70px;\n"
"    min-height: 288px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #ddd; /* slightly darker when pressed */\n"
"}\n"
""));
        btn_G = new QPushButton(centralwidget);
        buttonGroup->addButton(btn_G);
        btn_G->setObjectName("btn_G");
        btn_G->setGeometry(QRect(430, 90, 72, 290));
        btn_G->setMinimumSize(QSize(72, 290));
        btn_G->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: white;\n"
"    border: 1px solid black;\n"
"    border-radius: 0px; /* no rounded corners */\n"
"    min-width: 70px;\n"
"    min-height: 288px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #ddd; /* slightly darker when pressed */\n"
"}\n"
""));
        btn_F = new QPushButton(centralwidget);
        buttonGroup->addButton(btn_F);
        btn_F->setObjectName("btn_F");
        btn_F->setGeometry(QRect(350, 90, 72, 290));
        btn_F->setMinimumSize(QSize(72, 290));
        btn_F->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: white;\n"
"    border: 1px solid black;\n"
"    border-radius: 0px; /* no rounded corners */\n"
"    min-width: 70px;\n"
"    min-height: 288px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #ddd; /* slightly darker when pressed */\n"
"}\n"
""));
        btn_B = new QPushButton(centralwidget);
        buttonGroup->addButton(btn_B);
        btn_B->setObjectName("btn_B");
        btn_B->setGeometry(QRect(590, 90, 72, 290));
        btn_B->setMinimumSize(QSize(72, 290));
        btn_B->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: white;\n"
"    border: 1px solid black;\n"
"    border-radius: 0px; /* no rounded corners */\n"
"    min-width: 70px;\n"
"    min-height: 288px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #ddd; /* slightly darker when pressed */\n"
"}\n"
""));
        btn_A = new QPushButton(centralwidget);
        buttonGroup->addButton(btn_A);
        btn_A->setObjectName("btn_A");
        btn_A->setGeometry(QRect(510, 90, 72, 290));
        btn_A->setMinimumSize(QSize(72, 290));
        btn_A->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: white;\n"
"    border: 1px solid black;\n"
"    border-radius: 0px; /* no rounded corners */\n"
"    min-width: 70px;\n"
"    min-height: 288px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #ddd; /* slightly darker when pressed */\n"
"}\n"
""));
        btn_C1 = new QPushButton(centralwidget);
        buttonGroup->addButton(btn_C1);
        btn_C1->setObjectName("btn_C1");
        btn_C1->setGeometry(QRect(670, 90, 72, 290));
        btn_C1->setMinimumSize(QSize(72, 290));
        btn_C1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: white;\n"
"    border: 1px solid black;\n"
"    border-radius: 0px; /* no rounded corners */\n"
"    min-width: 70px;\n"
"    min-height: 288px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #ddd; /* slightly darker when pressed */\n"
"}\n"
""));
        btn_D1 = new QPushButton(centralwidget);
        buttonGroup->addButton(btn_D1);
        btn_D1->setObjectName("btn_D1");
        btn_D1->setGeometry(QRect(750, 90, 72, 290));
        btn_D1->setMinimumSize(QSize(72, 290));
        btn_D1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: white;\n"
"    border: 1px solid black;\n"
"    border-radius: 0px; /* no rounded corners */\n"
"    min-width: 70px;\n"
"    min-height: 288px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #ddd; /* slightly darker when pressed */\n"
"}\n"
""));
        btn_E1 = new QPushButton(centralwidget);
        buttonGroup->addButton(btn_E1);
        btn_E1->setObjectName("btn_E1");
        btn_E1->setGeometry(QRect(830, 90, 72, 290));
        btn_E1->setMinimumSize(QSize(72, 290));
        btn_E1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: white;\n"
"    border: 1px solid black;\n"
"    border-radius: 0px; /* no rounded corners */\n"
"    min-width: 70px;\n"
"    min-height: 288px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #ddd; /* slightly darker when pressed */\n"
"}\n"
""));
        btn_C_sharp = new QPushButton(centralwidget);
        buttonGroup->addButton(btn_C_sharp);
        btn_C_sharp->setObjectName("btn_C_sharp");
        btn_C_sharp->setGeometry(QRect(150, 90, 63, 186));
        btn_C_sharp->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: black;\n"
"    border: 1px solid black;\n"
"    border-radius: 0px;\n"
"    min-width: 61px;\n"
"    min-height: 184px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #333;\n"
"}\n"
""));
        btn_D_sharp = new QPushButton(centralwidget);
        buttonGroup->addButton(btn_D_sharp);
        btn_D_sharp->setObjectName("btn_D_sharp");
        btn_D_sharp->setGeometry(QRect(230, 90, 63, 186));
        btn_D_sharp->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: black;\n"
"    border: 1px solid black;\n"
"    border-radius: 0px;\n"
"    min-width: 61px;\n"
"    min-height: 184px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #333;\n"
"}\n"
""));
        btn_F_sharp = new QPushButton(centralwidget);
        buttonGroup->addButton(btn_F_sharp);
        btn_F_sharp->setObjectName("btn_F_sharp");
        btn_F_sharp->setGeometry(QRect(390, 90, 63, 186));
        btn_F_sharp->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: black;\n"
"    border: 1px solid black;\n"
"    border-radius: 0px;\n"
"    min-width: 61px;\n"
"    min-height: 184px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #333;\n"
"}\n"
""));
        btn_G_sharp = new QPushButton(centralwidget);
        buttonGroup->addButton(btn_G_sharp);
        btn_G_sharp->setObjectName("btn_G_sharp");
        btn_G_sharp->setGeometry(QRect(470, 90, 63, 186));
        btn_G_sharp->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: black;\n"
"    border: 1px solid black;\n"
"    border-radius: 0px;\n"
"    min-width: 61px;\n"
"    min-height: 184px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #333;\n"
"}\n"
""));
        btn_B_flat = new QPushButton(centralwidget);
        buttonGroup->addButton(btn_B_flat);
        btn_B_flat->setObjectName("btn_B_flat");
        btn_B_flat->setGeometry(QRect(550, 90, 63, 186));
        btn_B_flat->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: black;\n"
"    border: 1px solid black;\n"
"    border-radius: 0px;\n"
"    min-width: 61px;\n"
"    min-height: 184px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #333;\n"
"}\n"
""));
        btn_C_sharp1 = new QPushButton(centralwidget);
        buttonGroup->addButton(btn_C_sharp1);
        btn_C_sharp1->setObjectName("btn_C_sharp1");
        btn_C_sharp1->setGeometry(QRect(720, 90, 63, 186));
        btn_C_sharp1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: black;\n"
"    border: 1px solid black;\n"
"    border-radius: 0px;\n"
"    min-width: 61px;\n"
"    min-height: 184px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #333;\n"
"}\n"
""));
        btn_D_sharp1 = new QPushButton(centralwidget);
        buttonGroup->addButton(btn_D_sharp1);
        btn_D_sharp1->setObjectName("btn_D_sharp1");
        btn_D_sharp1->setGeometry(QRect(800, 90, 63, 186));
        btn_D_sharp1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: black;\n"
"    border: 1px solid black;\n"
"    border-radius: 0px;\n"
"    min-width: 61px;\n"
"    min-height: 184px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #333;\n"
"}\n"
""));
        PianoBody = new QWidget(centralwidget);
        PianoBody->setObjectName("PianoBody");
        PianoBody->setGeometry(QRect(50, 0, 1041, 431));
        QFont font;
        font.setFamilies({QString::fromUtf8("ROG Fonts STRIX SCAR")});
        font.setWeight(QFont::ExtraBold);
        font.setItalic(false);
        PianoBody->setFont(font);
        PianoBody->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 190, 190);\n"
"border-radius: 55px;\n"
"border-color: rgb(0, 0, 0);"));
        frame = new QFrame(PianoBody);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(870, 100, 120, 261));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(130, 130, 130);\n"
""));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        VolumeSlider = new QSlider(frame);
        VolumeSlider->setObjectName("VolumeSlider");
        VolumeSlider->setGeometry(QRect(50, 30, 22, 201));
        VolumeSlider->setSliderPosition(50);
        VolumeSlider->setOrientation(Qt::Orientation::Vertical);
        PowerButton = new QPushButton(PianoBody);
        PowerButton->setObjectName("PowerButton");
        PowerButton->setGeometry(QRect(60, 30, 40, 40));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PowerButton->sizePolicy().hasHeightForWidth());
        PowerButton->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("ROG Fonts STRIX SCAR")});
        font1.setBold(true);
        font1.setStyleStrategy(QFont::PreferAntialias);
        PowerButton->setFont(font1);
        PowerButton->setStyleSheet(QString::fromUtf8("QPushButton#PowerButton {\n"
"    background-color: red;                  /* OFF */\n"
"    border-radius: 20px;\n"
"    border: 2px solid darkred;\n"
"    color: white;\n"
"    font-size: 24px;\n"
"}\n"
"\n"
"QPushButton#PowerButton:checked {\n"
"    background-color: green;                /* ON */\n"
"    border: 2px solid darkgreen;\n"
"	border-radius: 20px;\n"
"}\n"
""));
        PowerButton->setIconSize(QSize(25, 25));
        PowerButton->setCheckable(true);
        label = new QLabel(PianoBody);
        label->setObjectName("label");
        label->setGeometry(QRect(450, 20, 111, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("ROG Fonts STRIX SCAR")});
        font2.setPointSize(14);
        font2.setBold(true);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("background-color:rgb(140, 140, 140);\n"
"border-radius: 20px;"));
        label->setTextFormat(Qt::TextFormat::PlainText);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        PianoBody->raise();
        btn_C->raise();
        btn_D->raise();
        btn_E->raise();
        btn_G->raise();
        btn_F->raise();
        btn_B->raise();
        btn_A->raise();
        btn_C1->raise();
        btn_D1->raise();
        btn_E1->raise();
        btn_C_sharp->raise();
        btn_D_sharp->raise();
        btn_F_sharp->raise();
        btn_G_sharp->raise();
        btn_B_flat->raise();
        btn_C_sharp1->raise();
        btn_D_sharp1->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1276, 26));
        menuPianoWindow = new QMenu(menubar);
        menuPianoWindow->setObjectName("menuPianoWindow");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuPianoWindow->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btn_C->setText(QString());
        btn_D->setText(QString());
        btn_E->setText(QString());
        btn_G->setText(QString());
        btn_F->setText(QString());
        btn_B->setText(QString());
        btn_A->setText(QString());
        btn_C1->setText(QString());
        btn_D1->setText(QString());
        btn_E1->setText(QString());
        btn_C_sharp->setText(QString());
        btn_D_sharp->setText(QString());
        btn_F_sharp->setText(QString());
        btn_G_sharp->setText(QString());
        btn_B_flat->setText(QString());
        btn_C_sharp1->setText(QString());
        btn_D_sharp1->setText(QString());
        PowerButton->setText(QCoreApplication::translate("MainWindow", "\342\217\273", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Casio", nullptr));
        menuPianoWindow->setTitle(QCoreApplication::translate("MainWindow", "PianoWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
