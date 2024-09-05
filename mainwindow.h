#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QIcon>
#include <QTabBar>
#include <QMessageBox>
#include <QRandomGenerator>

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

private slots:
    void on_aboutGameButton_clicked();
    void on_startPlayingButton_clicked();

    void on_crossButton_clicked();
    void on_zeroButton_clicked();

    void on_pushButton_1_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();

private:
    Ui::MainWindow *ui;
    bool isX;
    QVector<std::shared_ptr<QPushButton>> buttons;
    QVector<int> table;
    void checkWin();
    void resetGame();
    void computer_hod();
    void player_hod(int);
    int hod = 0;

    QIcon crossIcon;
    QIcon zeroIcon;

    const int winPatterns[8][3] = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8}, // горизонтальные
        {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, // вертикальные
        {0, 4, 8}, {2, 4, 6}             // диагональные
    };

    // Проверка, есть ли выигрышный ход для данного игрока (computerMark или playerMark)
    int findBestMove(int mark);
};

#endif // MAINWINDOW_H
