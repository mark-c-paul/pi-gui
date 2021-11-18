#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->backButton->setVisible(false);
    ui->stackedWidget->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_nextButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(qMin(2,ui->stackedWidget->currentIndex()+1));
    if(ui->stackedWidget->currentIndex()==2){
        ui->nextButton->setVisible(false);
    }
    ui->backButton->setVisible(true);
}

void MainWindow::on_backButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(qMax(0,ui->stackedWidget->currentIndex()-1));
    if(ui->stackedWidget->currentIndex()==0){
        ui->backButton->setVisible(false);
    }
    ui->nextButton->setVisible(true);
}

void MainWindow::on_homeButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->backButton->setVisible(false);
    ui->nextButton->setVisible(true);
    ui->settingsButton->setVisible(true);
    ui->inputButton->setVisible(true);
}

void MainWindow::on_settingsButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    ui->backButton->setVisible(false);
    ui->nextButton->setVisible(false);
    ui->settingsButton->setVisible(false);
    ui->inputButton->setVisible(false);
}

void MainWindow::on_inputButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    ui->backButton->setVisible(false);
    ui->nextButton->setVisible(false);
    ui->settingsButton->setVisible(false);
    ui->inputButton->setVisible(false);
}
