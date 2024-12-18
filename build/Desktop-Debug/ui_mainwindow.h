/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_31;
    QPushButton *pushButton_32;
    QPushButton *pushButton_33;
    QPushButton *pushButton_21;
    QPushButton *pushButton_22;
    QPushButton *pushButton_23;
    QPushButton *pushButton_13;
    QPushButton *pushButton_12;
    QPushButton *pushButton_11;
    QLabel *label;
    QLabel *Player1Wins;
    QLabel *Player2Wins;
    QLabel *DrawGames;
    QPushButton *Restart;
    QLabel *ind2;
    QLabel *ind1;
    QLabel *label_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pozadina.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"background-color: black;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_31 = new QPushButton(centralwidget);
        pushButton_31->setObjectName(QString::fromUtf8("pushButton_31"));
        pushButton_31->setGeometry(QRect(10, 340, 150, 150));
        pushButton_31->setStyleSheet(QString::fromUtf8("background-color: rgb(53, 53, 53);"));
        pushButton_32 = new QPushButton(centralwidget);
        pushButton_32->setObjectName(QString::fromUtf8("pushButton_32"));
        pushButton_32->setGeometry(QRect(165, 340, 150, 150));
        pushButton_32->setStyleSheet(QString::fromUtf8("background-color: rgb(53, 53, 53);"));
        pushButton_33 = new QPushButton(centralwidget);
        pushButton_33->setObjectName(QString::fromUtf8("pushButton_33"));
        pushButton_33->setGeometry(QRect(320, 340, 150, 150));
        pushButton_33->setStyleSheet(QString::fromUtf8("background-color: rgb(53, 53, 53);"));
        pushButton_21 = new QPushButton(centralwidget);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));
        pushButton_21->setGeometry(QRect(10, 185, 150, 150));
        pushButton_21->setStyleSheet(QString::fromUtf8("background-color: rgb(53, 53, 53);"));
        pushButton_22 = new QPushButton(centralwidget);
        pushButton_22->setObjectName(QString::fromUtf8("pushButton_22"));
        pushButton_22->setGeometry(QRect(165, 185, 150, 150));
        pushButton_22->setStyleSheet(QString::fromUtf8("background-color: rgb(53, 53, 53);"));
        pushButton_23 = new QPushButton(centralwidget);
        pushButton_23->setObjectName(QString::fromUtf8("pushButton_23"));
        pushButton_23->setGeometry(QRect(320, 185, 150, 150));
        pushButton_23->setStyleSheet(QString::fromUtf8("background-color: rgb(53, 53, 53);"));
        pushButton_13 = new QPushButton(centralwidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(320, 30, 150, 150));
        pushButton_13->setStyleSheet(QString::fromUtf8("background-color: rgb(53, 53, 53);"));
        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(165, 30, 150, 150));
        pushButton_12->setStyleSheet(QString::fromUtf8("background-color: rgb(53, 53, 53);"));
        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(10, 30, 150, 150));
        pushButton_11->setStyleSheet(QString::fromUtf8("background-color: rgb(53, 53, 53);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 510, 531, 51));
        label->setStyleSheet(QString::fromUtf8("color : pink;\n"
"background-color: rgb(0, 0, 0) 0.5;\n"
"font: 40px;"));
        Player1Wins = new QLabel(centralwidget);
        Player1Wins->setObjectName(QString::fromUtf8("Player1Wins"));
        Player1Wins->setGeometry(QRect(570, 120, 210, 90));
        Player1Wins->setStyleSheet(QString::fromUtf8("background-color: rgb(53, 53, 53);\n"
"color: white;\n"
"border-radius: 20px;\n"
"border-color: red;\n"
"font: 18px;\n"
""));
        Player2Wins = new QLabel(centralwidget);
        Player2Wins->setObjectName(QString::fromUtf8("Player2Wins"));
        Player2Wins->setGeometry(QRect(570, 220, 210, 90));
        Player2Wins->setStyleSheet(QString::fromUtf8("background-color: rgb(53, 53, 53);\n"
"color: white;\n"
"font: 18px;\n"
"border-radius: 20px;"));
        DrawGames = new QLabel(centralwidget);
        DrawGames->setObjectName(QString::fromUtf8("DrawGames"));
        DrawGames->setGeometry(QRect(570, 320, 210, 90));
        DrawGames->setStyleSheet(QString::fromUtf8("background-color: rgb(53, 53, 53);\n"
"color: white;\n"
"font: 18px;\n"
"border-radius: 20px;"));
        Restart = new QPushButton(centralwidget);
        Restart->setObjectName(QString::fromUtf8("Restart"));
        Restart->setGeometry(QRect(590, 540, 151, 31));
        Restart->setStyleSheet(QString::fromUtf8("background-color: red;\n"
"color: black;"));
        ind2 = new QLabel(centralwidget);
        ind2->setObjectName(QString::fromUtf8("ind2"));
        ind2->setGeometry(QRect(520, 245, 40, 40));
        ind2->setStyleSheet(QString::fromUtf8("background-color: #c0cbff;\n"
"color: white;\n"
"border-radius: 20px;\n"
"font: 18px;\n"
""));
        ind1 = new QLabel(centralwidget);
        ind1->setObjectName(QString::fromUtf8("ind1"));
        ind1->setGeometry(QRect(520, 145, 40, 40));
        ind1->setStyleSheet(QString::fromUtf8("background-color: pink;\n"
"color: white;\n"
"border-radius: 20px;\n"
"font: 18px;\n"
""));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, -10, 800, 581));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/pozadina.png")));
        MainWindow->setCentralWidget(centralwidget);
        label_2->raise();
        pushButton_31->raise();
        pushButton_32->raise();
        pushButton_33->raise();
        pushButton_21->raise();
        pushButton_22->raise();
        pushButton_23->raise();
        pushButton_13->raise();
        pushButton_12->raise();
        pushButton_11->raise();
        label->raise();
        Player1Wins->raise();
        Player2Wins->raise();
        DrawGames->raise();
        Restart->raise();
        ind2->raise();
        ind1->raise();
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_31->setText(QString());
        pushButton_32->setText(QString());
        pushButton_33->setText(QString());
        pushButton_21->setText(QString());
        pushButton_22->setText(QString());
        pushButton_23->setText(QString());
        pushButton_13->setText(QString());
        pushButton_12->setText(QString());
        pushButton_11->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "X je na potezu", nullptr));
        Player1Wins->setText(QCoreApplication::translate("MainWindow", "  Igra\304\2151 pobeda: 0", nullptr));
        Player2Wins->setText(QCoreApplication::translate("MainWindow", "  Igra\304\2152 pobeda: 0", nullptr));
        DrawGames->setText(QCoreApplication::translate("MainWindow", "  Draws: 0", nullptr));
        Restart->setText(QCoreApplication::translate("MainWindow", "Restart", nullptr));
        ind2->setText(QString());
        ind1->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
