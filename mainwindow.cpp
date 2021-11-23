#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProcess>
#include <QFile>

int brightness;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->backButton->setVisible(false);
    ui->thirtyAmpButton->setChecked(true);
    ui->errorText->setVisible(false);
    ui->stackedWidget->setCurrentIndex(0);
    ui->settingsButton->setIconSize(QSize(80, 80));
    ui->backButton->setIconSize(QSize(80, 80));
    ui->nextButton->setIconSize(QSize(80, 80));
    ui->homeButton->setIconSize(QSize(80, 80));
    QString s = "echo 255 > /sys/class/backlight/rpi_backlight/brightness";
    QProcess process;
    process.start("/bin/sh", QStringList()<< "-c" << s);
    process.waitForFinished();
    ui->brightnessButton->setText("BRIGHTNESS\n100%");
    brightness = 255;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_nextButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(qMin(3,ui->stackedWidget->currentIndex()+1));
    if(ui->stackedWidget->currentIndex()==3){
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
    ui->stackedWidget->setCurrentIndex(4);
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
        ui->stackedWidget->setCurrentIndex(6);
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

void MainWindow::on_fifteenAmpButton_clicked()
{
    ui->inputButton->setText("15A Input");
    ui->fifteenAmpButton->setChecked(true);
    ui->twentyfourAmpButton->setChecked(false);
    ui->thirtyAmpButton->setChecked(false);
    ui->homeButton->click();
}

void MainWindow::on_twentyfourAmpButton_clicked()
{
    ui->inputButton->setText("24A Input");
    ui->fifteenAmpButton->setChecked(false);
    ui->twentyfourAmpButton->setChecked(true);
    ui->thirtyAmpButton->setChecked(false);
    ui->homeButton->click();
}

void MainWindow::on_thirtyAmpButton_clicked()
{
    ui->inputButton->setText("30A Input");
    ui->fifteenAmpButton->setChecked(false);
    ui->twentyfourAmpButton->setChecked(false);
    ui->thirtyAmpButton->setChecked(true);
    ui->homeButton->click();
}

void MainWindow::on_autoGenButton_clicked()
{
    if(ui->autoGenButton->text()=="Auto Gen-Start\nDISABLED"){
        ui->autoGenButton->setText("Auto Gen-Start\nENABLED");
    }
    else if(ui->autoGenButton->text()=="Auto Gen-Start\nENABLED"){
        ui->autoGenButton->setText("Auto Gen-Start\nDISABLED");
    }
}

void MainWindow::on_brightnessButton_clicked()
{
    QString s;
    QProcess process;
    switch(brightness){

    case 255:
        s = "echo 25 > /sys/class/backlight/rpi_backlight/brightness";
        process.start("/bin/sh", QStringList()<< "-c" << s);
        process.waitForFinished();
        ui->brightnessButton->setText("BRIGHTNESS\n10%");
        brightness = 25;
        break;
    case 25:
        s = "echo 51 > /sys/class/backlight/rpi_backlight/brightness";
        process.start("/bin/sh", QStringList()<< "-c" << s);
        process.waitForFinished();
        ui->brightnessButton->setText("BRIGHTNESS\n20%");
        brightness = 51;
        break;
    case 51:
        s = "echo 76 > /sys/class/backlight/rpi_backlight/brightness";
        process.start("/bin/sh", QStringList()<< "-c" << s);
        process.waitForFinished();
        ui->brightnessButton->setText("BRIGHTNESS\n30%");
        brightness = 76;
        break;
    case 76:
        s = "echo 102 > /sys/class/backlight/rpi_backlight/brightness";
        process.start("/bin/sh", QStringList()<< "-c" << s);
        process.waitForFinished();
        ui->brightnessButton->setText("BRIGHTNESS\n40%");
        brightness = 102;
        break;
    case 102:
        s = "echo 127 > /sys/class/backlight/rpi_backlight/brightness";
        process.start("/bin/sh", QStringList()<< "-c" << s);
        process.waitForFinished();
        ui->brightnessButton->setText("BRIGHTNESS\n50%");
        brightness = 127;
        break;
    case 127:
        s = "echo 153 > /sys/class/backlight/rpi_backlight/brightness";
        process.start("/bin/sh", QStringList()<< "-c" << s);
        process.waitForFinished();
        ui->brightnessButton->setText("BRIGHTNESS\n60%");
        brightness = 153;
        break;
    case 153:
        s = "echo 178 > /sys/class/backlight/rpi_backlight/brightness";
        process.start("/bin/sh", QStringList()<< "-c" << s);
        process.waitForFinished();
        ui->brightnessButton->setText("BRIGHTNESS\n70%");
        brightness = 178;
        break;
    case 178:
        s = "echo 204 > /sys/class/backlight/rpi_backlight/brightness";
        process.start("/bin/sh", QStringList()<< "-c" << s);
        process.waitForFinished();
        ui->brightnessButton->setText("BRIGHTNESS\n80%");
        brightness = 204;
        break;
    case 204:
        s = "echo 229 > /sys/class/backlight/rpi_backlight/brightness";
        process.start("/bin/sh", QStringList()<< "-c" << s);
        process.waitForFinished();
        ui->brightnessButton->setText("BRIGHTNESS\n90%");
        brightness = 229;
        break;
    default:
        s = "echo 255 > /sys/class/backlight/rpi_backlight/brightness";
        process.start("/bin/sh", QStringList()<< "-c" << s);
        process.waitForFinished();
        ui->brightnessButton->setText("BRIGHTNESS\n100%");
        brightness = 255;
        break;
    }
}

void MainWindow::on_temperatureUnitsButton_clicked()
{
    if(ui->temperatureUnitsButton->text()=="TEMPERATURE UNITS\nCELCIUS"){
        ui->temperatureUnitsButton->setText("TEMPERATURE UNITS\nFARENHEIT");
    }
    else if(ui->temperatureUnitsButton->text()=="TEMPERATURE UNITS\nFARENHEIT"){
        ui->temperatureUnitsButton->setText("TEMPERATURE UNITS\nCELCIUS");
    }
}

void MainWindow::on_shutdownButton_clicked()
{
    QApplication::quit();
}

