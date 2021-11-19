#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->backButton->setVisible(false);
    ui->errorText->setVisible(false);
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
    ui->errorText->setVisible(false);
    ui->pinText->clear();
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
    ui->stackedWidget->setCurrentIndex(5);
    ui->backButton->setVisible(false);
    ui->nextButton->setVisible(false);
    ui->settingsButton->setVisible(false);
    ui->inputButton->setVisible(false);
}

void MainWindow::on_deleteButton_clicked()
{
    QString text = ui->pinText->toPlainText();
    text.chop(1);
    ui->pinText->setText(text);
}

void MainWindow::on_enterButton_clicked()
{
    QString password = "0000000000";
    if(ui->pinText->toPlainText() != password){
        ui->errorText->setVisible(true);
        ui->pinText->clear();
    }
    else{
        ui->stackedWidget->setCurrentIndex(4);
    }
}

void MainWindow::on_zeroButton_clicked()
{
    ui->errorText->setVisible(false);
    if(ui->pinText->toPlainText().length()<10)
        ui->pinText->setText(ui->pinText->toPlainText() + "0");
}

void MainWindow::on_oneButton_clicked()
{
    ui->errorText->setVisible(false);
    if(ui->pinText->toPlainText().length()<10)
        ui->pinText->setText(ui->pinText->toPlainText() + "1");
}

void MainWindow::on_twoButton_clicked()
{
    ui->errorText->setVisible(false);
    if(ui->pinText->toPlainText().length()<10)
        ui->pinText->setText(ui->pinText->toPlainText() + "2");
}

void MainWindow::on_threeButton_clicked()
{
    ui->errorText->setVisible(false);
    if(ui->pinText->toPlainText().length()<10)
        ui->pinText->setText(ui->pinText->toPlainText() + "3");
}

void MainWindow::on_fourButton_clicked()
{
    ui->errorText->setVisible(false);
    if(ui->pinText->toPlainText().length()<10)
        ui->pinText->setText(ui->pinText->toPlainText() + "4");
}

void MainWindow::on_fiveButton_clicked()
{
    ui->errorText->setVisible(false);
    if(ui->pinText->toPlainText().length()<10)
        ui->pinText->setText(ui->pinText->toPlainText() + "5");
}

void MainWindow::on_sixButton_clicked()
{
    ui->errorText->setVisible(false);
    if(ui->pinText->toPlainText().length()<10)
        ui->pinText->setText(ui->pinText->toPlainText() + "6");
}

void MainWindow::on_sevenButton_clicked()
{
    ui->errorText->setVisible(false);
    if(ui->pinText->toPlainText().length()<10)
        ui->pinText->setText(ui->pinText->toPlainText() + "7");
}

void MainWindow::on_eightButton_clicked()
{
    ui->errorText->setVisible(false);
    if(ui->pinText->toPlainText().length()<10)
        ui->pinText->setText(ui->pinText->toPlainText() + "8");
}

void MainWindow::on_nineButton_clicked()
{
    ui->errorText->setVisible(false);
    if(ui->pinText->toPlainText().length()<10)
        ui->pinText->setText(ui->pinText->toPlainText() + "9");
}


void MainWindow::on_errorText_textChanged()
{

}

