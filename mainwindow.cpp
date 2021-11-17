#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_nextButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(qMin(2,ui->stackedWidget->currentIndex()+1));
}

void MainWindow::on_backButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(qMax(0,ui->stackedWidget->currentIndex()-1));
}

void MainWindow::on_homeButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
