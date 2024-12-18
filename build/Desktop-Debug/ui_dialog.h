/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLineEdit *Player1;
    QLineEdit *Player2;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *slika;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pozadina.png"), QSize(), QIcon::Normal, QIcon::Off);
        Dialog->setWindowIcon(icon);
        Dialog->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        Player1 = new QLineEdit(Dialog);
        Player1->setObjectName(QString::fromUtf8("Player1"));
        Player1->setGeometry(QRect(300, 280, 200, 50));
        Player1->setStyleSheet(QString::fromUtf8("background-color: pink;\n"
"color: black;\n"
"font: 18px;\n"
"border-radius: 20px;\n"
" qproperty-alignment: AlignCenter;"));
        Player2 = new QLineEdit(Dialog);
        Player2->setObjectName(QString::fromUtf8("Player2"));
        Player2->setGeometry(QRect(300, 340, 200, 50));
        Player2->setStyleSheet(QString::fromUtf8("background-color: #c0cbff;\n"
"color: black;\n"
"font: 18px;\n"
"border-radius: 20px;\n"
" qproperty-alignment: AlignCenter;"));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(350, 405, 100, 40));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(53, 53, 53);\n"
"color: white;\n"
"font: 18px;\n"
"border-radius: 20px;"));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 80, 300, 70));
        label->setStyleSheet(QString::fromUtf8("qproperty-alignment: AlignCenter;\n"
"font: 30px;\n"
"color:white;"));
        slika = new QLabel(Dialog);
        slika->setObjectName(QString::fromUtf8("slika"));
        slika->setGeometry(QRect(0, 0, 791, 551));
        slika->setPixmap(QPixmap(QString::fromUtf8(":/pozadina.png")));
        slika->raise();
        Player1->raise();
        Player2->raise();
        pushButton->raise();
        label->raise();

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "OK", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Enter Players Names", nullptr));
        slika->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
