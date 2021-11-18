/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *settingsButton;
    QPushButton *inputButton;
    QPushButton *backButton;
    QPushButton *nextButton;
    QPushButton *homeButton;
    QStackedWidget *stackedWidget;
    QWidget *page_1;
    QTextEdit *timeValue;
    QTextEdit *socValue;
    QTextEdit *socText;
    QTextEdit *timeText;
    QWidget *page_2;
    QFrame *line;
    QTextEdit *pageLabels_2;
    QTextEdit *pageValues_2;
    QWidget *page_3;
    QTextEdit *pageValues_3;
    QTextEdit *pageLabels_3;
    QFrame *line_2;
    QWidget *page_4;
    QPushButton *zeroButton;
    QPushButton *oneButton;
    QPushButton *twoButton;
    QPushButton *threeButton;
    QPushButton *fourButton;
    QPushButton *nineButton;
    QPushButton *eightButton;
    QPushButton *sevenButton;
    QPushButton *fiveButton;
    QPushButton *sixButton;
    QWidget *page;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 514);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        settingsButton = new QPushButton(centralwidget);
        settingsButton->setObjectName(QString::fromUtf8("settingsButton"));
        settingsButton->setGeometry(QRect(20, 350, 91, 101));
        inputButton = new QPushButton(centralwidget);
        inputButton->setObjectName(QString::fromUtf8("inputButton"));
        inputButton->setGeometry(QRect(130, 350, 91, 101));
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(240, 350, 91, 101));
        nextButton = new QPushButton(centralwidget);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        nextButton->setGeometry(QRect(350, 350, 91, 101));
        homeButton = new QPushButton(centralwidget);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(690, 350, 91, 101));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, -10, 801, 341));
        page_1 = new QWidget();
        page_1->setObjectName(QString::fromUtf8("page_1"));
        timeValue = new QTextEdit(page_1);
        timeValue->setObjectName(QString::fromUtf8("timeValue"));
        timeValue->setEnabled(false);
        timeValue->setGeometry(QRect(310, 20, 481, 141));
        timeValue->setFrameShape(QFrame::NoFrame);
        socValue = new QTextEdit(page_1);
        socValue->setObjectName(QString::fromUtf8("socValue"));
        socValue->setEnabled(false);
        socValue->setGeometry(QRect(20, 20, 281, 141));
        socValue->setFrameShape(QFrame::NoFrame);
        socText = new QTextEdit(page_1);
        socText->setObjectName(QString::fromUtf8("socText"));
        socText->setEnabled(false);
        socText->setGeometry(QRect(10, 230, 281, 91));
        socText->setFrameShape(QFrame::NoFrame);
        timeText = new QTextEdit(page_1);
        timeText->setObjectName(QString::fromUtf8("timeText"));
        timeText->setEnabled(false);
        timeText->setGeometry(QRect(310, 230, 441, 91));
        timeText->setFrameShape(QFrame::NoFrame);
        stackedWidget->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        line = new QFrame(page_2);
        line->setObjectName(QString::fromUtf8("line"));
        line->setEnabled(true);
        line->setGeometry(QRect(460, 10, 20, 261));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        pageLabels_2 = new QTextEdit(page_2);
        pageLabels_2->setObjectName(QString::fromUtf8("pageLabels_2"));
        pageLabels_2->setEnabled(false);
        pageLabels_2->setGeometry(QRect(10, 10, 441, 261));
        pageLabels_2->setFrameShape(QFrame::NoFrame);
        pageValues_2 = new QTextEdit(page_2);
        pageValues_2->setObjectName(QString::fromUtf8("pageValues_2"));
        pageValues_2->setEnabled(false);
        pageValues_2->setGeometry(QRect(490, 10, 291, 261));
        pageValues_2->setFrameShape(QFrame::NoFrame);
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        pageValues_3 = new QTextEdit(page_3);
        pageValues_3->setObjectName(QString::fromUtf8("pageValues_3"));
        pageValues_3->setEnabled(false);
        pageValues_3->setGeometry(QRect(390, 10, 391, 311));
        pageValues_3->setFrameShape(QFrame::NoFrame);
        pageLabels_3 = new QTextEdit(page_3);
        pageLabels_3->setObjectName(QString::fromUtf8("pageLabels_3"));
        pageLabels_3->setEnabled(false);
        pageLabels_3->setGeometry(QRect(10, 10, 341, 311));
        pageLabels_3->setFrameShape(QFrame::NoFrame);
        line_2 = new QFrame(page_3);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setEnabled(true);
        line_2->setGeometry(QRect(360, 10, 20, 311));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        zeroButton = new QPushButton(page_4);
        zeroButton->setObjectName(QString::fromUtf8("zeroButton"));
        zeroButton->setGeometry(QRect(30, 100, 75, 71));
        oneButton = new QPushButton(page_4);
        oneButton->setObjectName(QString::fromUtf8("oneButton"));
        oneButton->setGeometry(QRect(100, 100, 75, 71));
        twoButton = new QPushButton(page_4);
        twoButton->setObjectName(QString::fromUtf8("twoButton"));
        twoButton->setGeometry(QRect(170, 100, 75, 71));
        threeButton = new QPushButton(page_4);
        threeButton->setObjectName(QString::fromUtf8("threeButton"));
        threeButton->setGeometry(QRect(240, 100, 75, 71));
        fourButton = new QPushButton(page_4);
        fourButton->setObjectName(QString::fromUtf8("fourButton"));
        fourButton->setGeometry(QRect(310, 100, 75, 71));
        nineButton = new QPushButton(page_4);
        nineButton->setObjectName(QString::fromUtf8("nineButton"));
        nineButton->setGeometry(QRect(310, 170, 75, 71));
        eightButton = new QPushButton(page_4);
        eightButton->setObjectName(QString::fromUtf8("eightButton"));
        eightButton->setGeometry(QRect(240, 170, 75, 71));
        sevenButton = new QPushButton(page_4);
        sevenButton->setObjectName(QString::fromUtf8("sevenButton"));
        sevenButton->setGeometry(QRect(170, 170, 75, 71));
        fiveButton = new QPushButton(page_4);
        fiveButton->setObjectName(QString::fromUtf8("fiveButton"));
        fiveButton->setGeometry(QRect(30, 170, 75, 71));
        sixButton = new QPushButton(page_4);
        sixButton->setObjectName(QString::fromUtf8("sixButton"));
        sixButton->setGeometry(QRect(100, 170, 75, 71));
        stackedWidget->addWidget(page_4);
        zeroButton->raise();
        oneButton->raise();
        twoButton->raise();
        threeButton->raise();
        fourButton->raise();
        fiveButton->raise();
        sixButton->raise();
        sevenButton->raise();
        eightButton->raise();
        nineButton->raise();
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidget->addWidget(page);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        settingsButton->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        inputButton->setText(QCoreApplication::translate("MainWindow", "30A Input", nullptr));
        backButton->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        nextButton->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        homeButton->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        timeValue->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:72pt; font-weight:600; color:#000000;\">00:00 </span><span style=\" font-family:'PibotoLt'; font-size:36pt; font-weight:600; color:#000000;\">HRS</span></p></body></html>", nullptr));
        socValue->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:72pt; font-weight:600; color:#000000;\">00%</span></p></body></html>", nullptr));
        socText->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:12pt; font-weight:600; color:#b6b83b;\">State of Charge</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:12pt; font-weight:600; color:#b6b83b;\">SOC</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; "
                        "font-size:12pt; font-weight:600; color:#b6b83b;\">AC Output: -</span></p></body></html>", nullptr));
        timeText->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:12pt; font-weight:600; color:#b6b83b;\">Estimated</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:12pt; font-weight:600; color:#b6b83b;\">Remaining Time</span></p></body></html>", nullptr));
        pageLabels_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:26pt; font-weight:600; color:#b6b83b;\">Battery Voltage</span></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:26pt; font-weight:600; color:#b6b83b;\">Depth of Discharge</span></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:"
                        "'PibotoLt'; font-size:26pt; font-weight:600; color:#b6b83b;\">DC Current</span></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:26pt; font-weight:600; color:#b6b83b;\">Battery Temperature</span></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:26pt; font-weight:600; color:#b6b83b;\">Status</span></p></body></html>", nullptr));
        pageValues_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:26pt; font-weight:600; color:#000000;\">0.0 VDC</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:26pt; font-weight:600; color:#000000;\">0 Ahr</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:26pt; font-weight:600; color:#000000;\">0.0 ADC"
                        "</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:26pt; font-weight:600; color:#000000;\">0 \302\260C</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:26pt; font-weight:600; color:#000000;\">Nothing</span></p></body></html>", nullptr));
        pageValues_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:26pt; font-weight:600; color:#000000;\">000-000-00</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:26pt; font-weight:600; color:#000000;\">000000</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:26pt; font-weight:600; color:#000000;\">(25"
                        "0) 804-1247</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:26pt; font-weight:600; color:#000000;\">0000000</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:26pt; font-weight:600; color:#000000;\">v0.00/000/</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:26pt; font-weight:600; color:#000000;\">0 Ah</span></p></body></html>", nullptr));
        pageLabels_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:26pt; font-weight:600; color:#b6b83b;\">Part #</span></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:26pt; font-weight:600; color:#b6b83b;\">Serial #</span></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-si"
                        "ze:26pt; font-weight:600; color:#b6b83b;\">Tech Support</span></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:26pt; font-weight:600; color:#b6b83b;\">Wifi ID</span></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:26pt; font-weight:600; color:#b6b83b;\">Version</span></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:26pt; font-weight:600; color:#b6b83b;\">Battery</span></p></body></html>", nullptr));
        zeroButton->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        oneButton->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        twoButton->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        threeButton->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        fourButton->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        nineButton->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        eightButton->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        sevenButton->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        fiveButton->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        sixButton->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
