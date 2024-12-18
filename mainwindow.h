#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QString currentPlayer = "O";
    QString board[3][3];
    int Player1Wins = 0;
    int Player2Wins = 0;
    int draws = 0;
    int gamesPlayed = 1;
    int turnNum = 1;
    QString Player1;
    QString Player2;

public slots:
    void changeCell( int , int );
    void clearBoard( bool );
    void changePlayers();
    void takeInput(const QString& input1, const QString& input2);
    bool isEmptyCell(int , int );
    bool isDraw();
    bool isWin();

    friend bool evenNum( int );

private slots:
    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_22_clicked();

    void on_pushButton_23_clicked();

    void on_pushButton_31_clicked();

    void on_pushButton_32_clicked();

    void on_pushButton_33_clicked();

    void on_Restart_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
