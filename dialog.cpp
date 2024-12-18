#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    setFixedSize(800,600);
    setWindowTitle("XO");
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{

    QString name1 = ui->Player1->text();
    QString name2 = ui->Player2->text();

    if (name1.isEmpty() || name2.isEmpty())
    {
        QMessageBox::warning(this, "Input Error", "Please enter names for both players.");
        return;
    }

    emit InputPlayerNames(name1, name2);

    this->close();
}

