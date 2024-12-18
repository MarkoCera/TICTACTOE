 #include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QInputDialog>

bool evenNum( int n )
{
    return ( n >> 1 << 1 == n );
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(800, 600);
    setWindowTitle("XO");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::takeInput(const QString& input1, const QString& input2)
{
    Player1 = input1;
    Player2 = input2;
    ui->Player1Wins->setText("  " + Player1 + " wins: " + QString::number( Player1Wins ));
    ui->Player2Wins->setText("  " + Player2 + " wins: " + QString::number( Player2Wins ));

    ui->label->setText(Player1 + " 's turn.");
    ui->label->setStyleSheet("color: pink;font: 40px;");
}

void MainWindow::changePlayers()
{
    if( evenNum( gamesPlayed ) && evenNum( turnNum )  )
    {
        currentPlayer = "O";
        ui->label->setText(Player1 + " 's turn.");
        ui->label->setStyleSheet("color: #c0cbff;font: 40px;");
    }
    if( !evenNum( gamesPlayed ) && !evenNum( turnNum )  )
    {
        currentPlayer = "X";
        ui->label->setText(Player1 + " 's turn.");
        ui->label->setStyleSheet("color: pink;font: 40px;");
    }
    if( !evenNum( gamesPlayed ) && evenNum( turnNum )  )
    {
        currentPlayer = "O";
        ui->label->setText(Player2 + " 's turn.");
        ui->label->setStyleSheet("color: #c0cbff;font: 40px;");
    }
    if( evenNum( gamesPlayed ) && !evenNum( turnNum )  )
    {
        currentPlayer = "X";
        ui->label->setText(Player2 + " 's turn.");
        ui->label->setStyleSheet("color: pink;font: 40px;");

    }
}

bool MainWindow::isEmptyCell(int x , int y) {

    if(board[x][y] == "") {
        return true;
    }else {
        return false;
    }

}

bool MainWindow::isDraw() {

    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            if (board[x][y] == "") {
                return false;
            }
        }
    }

    return true;
}

bool MainWindow::isWin()
{
    if(board[0][0] == currentPlayer && board[0][1] == currentPlayer && board[0][2] == currentPlayer)
    {
        return true;
    }
    if(board[1][0] == currentPlayer && board[1][1] == currentPlayer && board[1][2] == currentPlayer)
    {
        return true;
    }
    if(board[2][0] == currentPlayer && board[2][1] == currentPlayer && board[2][2] == currentPlayer)
    {
        return true;
    }
    if(board[0][0] == currentPlayer && board[1][0] == currentPlayer && board[2][0] == currentPlayer)
    {
        return true;
    }
    if(board[0][1] == currentPlayer && board[1][1] == currentPlayer && board[2][1] == currentPlayer)
    {
        return true;
    }
    if(board[0][2] == currentPlayer && board[1][2] == currentPlayer && board[2][2] == currentPlayer)
    {
        return true;
    }
    if(board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer)
    {
        return true;
    }
    if(board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer)
    {
        return true;
    }

    return false;
}

void MainWindow::clearBoard( bool ind )
{
    ui->pushButton_11->setText("");
    ui->pushButton_12->setText("");
    ui->pushButton_13->setText("");
    ui->pushButton_21->setText("");
    ui->pushButton_22->setText("");
    ui->pushButton_23->setText("");
    ui->pushButton_31->setText("");
    ui->pushButton_32->setText("");
    ui->pushButton_33->setText("");

    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            board[x][y] = "";
        }
    }

    if( ind )
    {
        gamesPlayed = 1;;
        turnNum = 1;
    }
    else
    {
        gamesPlayed++;
        turnNum = 1;
    }
}

void MainWindow::changeCell(int x, int y)
{
    QString blue = "background-color: #c0cbff; border-radius: 20px;";
    QString pink = "background-color: pink; border-radius: 20px;";
    QString buttonPink = "color: pink;background-color: rgb(53, 53, 53);font: 80px;";
    QString buttonBlue = "color : #c0cbff;background-color: rgb(53, 53, 53);font: 80px;";
    QString shape = "background-color: rgb(53, 53, 53); color: white;font: 18px;border-radius: 20px;";

    if(isEmptyCell(x, y))
    {
        changePlayers();
        turnNum++;


        std::string button = std::to_string(x) + std::to_string(y);

        if(button == "00") {
            ui->pushButton_11->setText(currentPlayer);
            if( currentPlayer == "X" )
            {
                ui->pushButton_11->setStyleSheet(buttonPink);
            }
            else
            {
                ui->pushButton_11->setStyleSheet(buttonBlue);
            }
        }
        if(button == "01") {
            ui->pushButton_12->setText(currentPlayer);
            if( currentPlayer == "X" )
            {
                ui->pushButton_12->setStyleSheet(buttonPink);
            }
            else
            {
                ui->pushButton_12->setStyleSheet(buttonBlue);
            }
        }
        if(button == "02") {
            ui->pushButton_13->setText(currentPlayer);
            if( currentPlayer == "X" )
            {
                ui->pushButton_13->setStyleSheet(buttonPink);
            }
            else
            {
                ui->pushButton_13->setStyleSheet(buttonBlue);
            }
        }
        if(button == "10") {
            ui->pushButton_21->setText(currentPlayer);
            if( currentPlayer == "X" )
            {
                ui->pushButton_21->setStyleSheet(buttonPink);
            }
            else
            {
                ui->pushButton_21->setStyleSheet(buttonBlue);
            }
        }
        if(button == "11") {
            ui->pushButton_22->setText(currentPlayer);
            if( currentPlayer == "X" )
            {
                ui->pushButton_22->setStyleSheet(buttonPink);
            }
            else
            {
                ui->pushButton_22->setStyleSheet(buttonBlue);
            }
        }
        if(button == "12") {
            ui->pushButton_23->setText(currentPlayer);
            if( currentPlayer == "X" )
            {
                ui->pushButton_23->setStyleSheet(buttonPink);
            }
            else
            {
                ui->pushButton_23->setStyleSheet(buttonBlue);
            }
        }
        if(button == "20") {
            ui->pushButton_31->setText(currentPlayer);
            if( currentPlayer == "X" )
            {
                ui->pushButton_31->setStyleSheet(buttonPink);
            }
            else
            {
                ui->pushButton_31->setStyleSheet(buttonBlue);
            }
        }
        if(button == "21") {
            ui->pushButton_32->setText(currentPlayer);
            if( currentPlayer == "X" )
            {
                ui->pushButton_32->setStyleSheet(buttonPink);
            }
            else
            {
                ui->pushButton_32->setStyleSheet(buttonBlue);
            }
        }
        if(button == "22") {
            ui->pushButton_33->setText(currentPlayer);
            if( currentPlayer == "X" )
            {
                ui->pushButton_33->setStyleSheet(buttonPink);
            }
            else
            {
                ui->pushButton_33->setStyleSheet(buttonBlue);
            }
        }

        board[x][y] = currentPlayer;

        if (isWin()) {
            QMessageBox mbox;

            if( currentPlayer == "X" )
            {
                mbox.setStyleSheet("color : black;background-color: pink;");
                if( evenNum( gamesPlayed ) )
                {
                    mbox.setText( Player2 + " won!");
                    Player2Wins++;
                    ui->Player2Wins->setText("  " + Player2 + " wins: " + QString::number( Player2Wins ));
                    ui->Player2Wins->setStyleSheet(shape);
                    ui->ind1->setStyleSheet(pink);
                    ui->ind2->setStyleSheet(blue);
                    changePlayers();

                }
                else
                {
                    mbox.setText( Player1 + " won!");
                    Player1Wins++;
                    ui->Player1Wins->setText("  " + Player1 + " wins: " + QString::number( Player1Wins ));
                    ui->Player1Wins->setStyleSheet(shape);
                    ui->ind1->setStyleSheet(blue);
                    ui->ind2->setStyleSheet(pink);
                    changePlayers();
                }
            }
            else
            {
                mbox.setStyleSheet("color : black;background-color: #c0cbff;");
                if( evenNum( gamesPlayed ) )
                {
                    mbox.setText( Player1 + " won!");
                    Player1Wins++;
                    ui->Player1Wins->setText("  " + Player1 + " wins: " + QString::number( Player1Wins ));
                    ui->Player1Wins->setStyleSheet(shape);
                    ui->ind1->setStyleSheet(pink);
                    ui->ind2->setStyleSheet(blue);
                    changePlayers();
                }
                else
                {
                    mbox.setText( Player2 + " won!");
                    Player2Wins++;
                    ui->Player2Wins->setText("  " + Player2 + " wins: " + QString::number( Player2Wins ));
                    ui->Player2Wins->setStyleSheet(shape);
                    ui->ind1->setStyleSheet(blue);
                    ui->ind2->setStyleSheet(pink);
                    changePlayers();
                }

            }

            mbox.exec();

            clearBoard( 0 );
        }

        if (isDraw()) {
            QMessageBox mbox;
            mbox.setText("Draw!");
            mbox.exec();
            draws++;

            ui->DrawGames->setText("  Draws: " + QString::number( draws ));
            ui->DrawGames->setStyleSheet(shape);

            if( evenNum( gamesPlayed ) )
            {
                ui->ind1->setStyleSheet(pink);
                ui->ind2->setStyleSheet(blue);
            }
            else
            {
                ui->ind1->setStyleSheet(blue);
                ui->ind2->setStyleSheet(pink);
            }
            changePlayers();

            clearBoard( 0 );
        }

    }
    changePlayers();
}

void MainWindow::on_pushButton_11_clicked()
{
    changeCell( 0 , 0 );
}


void MainWindow::on_pushButton_12_clicked()
{
    changeCell( 0 , 1 );
}


void MainWindow::on_pushButton_13_clicked()
{
    changeCell( 0 , 2 );
}


void MainWindow::on_pushButton_21_clicked()
{
    changeCell( 1 , 0 );
}


void MainWindow::on_pushButton_22_clicked()
{
    changeCell( 1 , 1 );
}


void MainWindow::on_pushButton_23_clicked()
{
    changeCell( 1 , 2 );
}


void MainWindow::on_pushButton_31_clicked()
{
    changeCell( 2 , 0 );
}


void MainWindow::on_pushButton_32_clicked()
{
    changeCell( 2 , 1 );
}


void MainWindow::on_pushButton_33_clicked()
{
    changeCell( 2 , 2 );
}


void MainWindow::on_Restart_clicked()
{
    QString shape = "background-color: rgb(53, 53, 53); color: white;font: 18px;border-radius: 20px;";
    Player1Wins = 0;
    Player2Wins = 0;
    draws = 0;

    ui->DrawGames->setText("  Draws: " + QString::number( draws ));
    ui->DrawGames->setStyleSheet(shape);
    ui->Player2Wins->setText("  " + Player2 + " wins: 0");
    ui->Player2Wins->setStyleSheet(shape);
    ui->Player1Wins->setText("  " + Player1 + " wins: 0");
    ui->Player1Wins->setStyleSheet(shape);

    clearBoard( 1 );
    changePlayers();

}

