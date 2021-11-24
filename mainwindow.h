#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

extern int brightness;
extern bool warningDetected;
extern bool alertDetected;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_nextButton_clicked();

    void on_backButton_clicked();

    void on_homeButton_clicked();

    void on_settingsButton_clicked();

    void on_inputButton_clicked();

    void on_deleteButton_clicked();

    void on_zeroButton_clicked();

    void on_oneButton_clicked();

    void on_twoButton_clicked();

    void on_fourButton_clicked();

    void on_threeButton_clicked();

    void on_fiveButton_clicked();

    void on_sixButton_clicked();

    void on_sevenButton_clicked();

    void on_eightButton_clicked();

    void on_nineButton_clicked();

    void on_enterButton_clicked();

    void on_fifteenAmpButton_clicked();

    void on_twentyfourAmpButton_clicked();

    void on_thirtyAmpButton_clicked();

    void on_autoGenButton_clicked();

    void on_brightnessButton_clicked();

    void on_temperatureUnitsButton_clicked();

    void on_shutdownButton_clicked();

    void on_warningButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
