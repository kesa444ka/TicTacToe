#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , isX(true)
    , crossIcon("cross_large.png")
    , zeroIcon("zero_large.png")
{
    ui->setupUi(this);
    ui->tabWidget->tabBar()->hide();
    ui->tabWidget->setCurrentIndex(0);
    ui->aboutGameLabel->setText("Игроки по очереди ставят на свободные клетки поля "
                                    " 3×3 знак (один всегда крестики, другой всегда нолики). "
                                    "Первый, выстроивший в ряд 3 своих фигуры по вертикали, "
                                    " горизонтали или большой диагонали, выигрывает. "
                                    "Если игроки заполнили все 9 ячеек и оказалось, что "
                                    "ни в одной вертикали, горизонтали или большой "
                                    "диагонали нет трёх одинаковых знаков, партия считается "
                                    "закончившейся в ничью. Первый ход делает игрок, "
                                    "ставящий крестики. Обычно по завершении партии "
                                    "выигравшая сторона зачёркивает чертой "
                                    "свои три знака (нолика или крестика), составляющих сплошной ряд.");

    buttons = {
        {std::shared_ptr<QPushButton>(ui->pushButton_1),
         std::shared_ptr<QPushButton>(ui->pushButton_2),
         std::shared_ptr<QPushButton>(ui->pushButton_3),
         std::shared_ptr<QPushButton>(ui->pushButton_4),
         std::shared_ptr<QPushButton>(ui->pushButton_5),
         std::shared_ptr<QPushButton>(ui->pushButton_6),
         std::shared_ptr<QPushButton>(ui->pushButton_7),
         std::shared_ptr<QPushButton>(ui->pushButton_8),
         std::shared_ptr<QPushButton>(ui->pushButton_9)}
    };

    table.resize(9, 0);
    //resetGame();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_aboutGameButton_clicked()
{
    ui->tabWidget->setCurrentIndex(1);
}

void MainWindow::on_startPlayingButton_clicked()
{
  ui->tabWidget->setCurrentIndex(0);
}

void MainWindow::on_crossButton_clicked()
{
    isX = true;
    ui->crossButton->setStyleSheet("background-color:#590085");
    ui->zeroButton->setStyleSheet("background-color: rgb(170, 0, 255)");
    resetGame();
}

void MainWindow::on_zeroButton_clicked()
{
    isX = false;
    ui->zeroButton->setStyleSheet("background-color:#590085");
    ui->crossButton->setStyleSheet("background-color: rgb(170, 0, 255)");
    resetGame();
    computer_hod();
}

void MainWindow::on_pushButton_1_clicked()
{
    player_hod(0);
}

void MainWindow::on_pushButton_2_clicked()
{
    player_hod(1);
}

void MainWindow::on_pushButton_3_clicked()
{
    player_hod(2);
}

void MainWindow::on_pushButton_4_clicked()
{
    player_hod(3);
}

void MainWindow::on_pushButton_5_clicked()
{
    player_hod(4);
}

void MainWindow::on_pushButton_6_clicked()
{
    player_hod(5);
}

void MainWindow::on_pushButton_7_clicked()
{
    player_hod(6);
}

void MainWindow::on_pushButton_8_clicked()
{
    player_hod(7);
}

void MainWindow::on_pushButton_9_clicked()
{
    player_hod(8);
}

void MainWindow::resetGame()
{
    table = {0,0,0,0,0,0,0,0,0};
    for (auto& button : buttons) {
        button->setIcon(QIcon());
        button->setEnabled(true);
    }
    hod = 0;
}

void MainWindow::checkWin()
{
    for (const auto& pattern : winPatterns) {
        if (table[pattern[0]] != 0 &&
            table[pattern[0]] == table[pattern[1]] &&
            table[pattern[0]] == table[pattern[2]]) {
            QString winner = table[pattern[0]] == 1 ? "Крестики" : "Нолики";
            if (winner == "Крестики" && isX) {
                QMessageBox::information(this, "Победа!", winner + " выиграли!");
            } else if (winner == "Крестики" && !isX){
                QMessageBox::information(this, "Поражение :(", winner + " выиграли :(");
            } else if (winner == "Нолики" && isX) {
                QMessageBox::information(this, "Поражение :(", winner + " выиграли :(");
            } else {
                QMessageBox::information(this, "Победа!", winner + " выиграли!");
            }
            resetGame();
            return;
        }
    }

    if (hod == 9) {
        QMessageBox::information(this, "Ничья", "Игра закончилась вничью!");
        resetGame();
    }
}

int MainWindow::findBestMove(int mark){
    for (const auto& pattern : winPatterns) {
        if (table[pattern[0]] == mark && table[pattern[1]] == mark && table[pattern[2]] == 0)
            return pattern[2];
        if (table[pattern[0]] == mark && table[pattern[1]] == 0 && table[pattern[2]] == mark)
            return pattern[1];
        if (table[pattern[0]] == 0 && table[pattern[1]] == mark && table[pattern[2]] == mark)
            return pattern[0];
    }
    return -1;
}

void MainWindow::computer_hod()
{
    if (hod == 0){
        int randomIndex = QRandomGenerator::global()->bounded(9);
        buttons[randomIndex]->setIcon(crossIcon);
        buttons[randomIndex]->setIconSize(buttons[randomIndex]->size()-QSize(10, 10));
        hod++;
        return;
    }

    int computerMark = isX ? 2 : 1;
    int playerMark = isX ? 1 : 2;

    // Проверка выигрыша компьютера
    int bestMove = findBestMove(computerMark);
    if (bestMove != -1) {
        table[bestMove] = computerMark;
        buttons[bestMove]->setIcon(isX ? zeroIcon : crossIcon);
        buttons[bestMove]->setIconSize(buttons[bestMove]->size()-QSize(10, 10));
        buttons[bestMove]->setEnabled(false);
        hod++;
        checkWin();
        return;
    }

    // Блокировка выигрыша игрока
    bestMove = findBestMove(playerMark);
    if (bestMove != -1) {
        table[bestMove] = computerMark;
        buttons[bestMove]->setIcon(isX ? zeroIcon : crossIcon);
        buttons[bestMove]->setIconSize(buttons[bestMove]->size()-QSize(10, 10));
        buttons[bestMove]->setEnabled(false);
        hod++;
        checkWin();
        return;
    }

    // Ставка на центр, если он свободен
    if (table[4] == 0) {
        bestMove = 4;
        table[bestMove] = computerMark;
        buttons[bestMove]->setIcon(isX ? zeroIcon : crossIcon);
        buttons[bestMove]->setIconSize(buttons[bestMove]->size()-QSize(10, 10));
        buttons[bestMove]->setEnabled(false);
        hod++;
        checkWin();
        return;
    }

    // Ставка на случайный свободный угол
    QVector<int> corners = {0, 2, 6, 8};
    QVector<int> freeCorners;
    for (int corner : corners) {
        if (table[corner] == 0) {
            freeCorners.push_back(corner);
        }
    }
    if (!freeCorners.isEmpty()) {
        int randomIndex = QRandomGenerator::global()->bounded(freeCorners.size());
        bestMove = freeCorners[randomIndex];
    } else {
        // Если все углы заняты, ищем любую свободную клетку
        bestMove = -1;
        for (int i = 0; i < 9; ++i) {
            if (table[i] == 0) {
                bestMove = i;
                break;
            }
        }
    }

    table[bestMove] = computerMark;
    buttons[bestMove]->setIcon(isX ? zeroIcon : crossIcon);
    buttons[bestMove]->setIconSize(buttons[bestMove]->size()-QSize(10, 10));
    buttons[bestMove]->setEnabled(false);
    hod++;
    checkWin();
}

void MainWindow::player_hod(int number)
{
    if (table[number] == 0) {
        table[number] = isX ? 1 : 2;
        buttons[number]->setIcon(isX ? crossIcon : zeroIcon);
        buttons[number]->setIconSize(buttons[number]->size()-QSize(10, 10));
        buttons[number]->setEnabled(false);
        hod++;
        checkWin();
        if (hod < 9) {
            computer_hod();
        }
    }
}
