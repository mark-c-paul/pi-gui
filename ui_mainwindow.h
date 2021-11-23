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
#include <QtGui/QIcon>
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
    QTextEdit *outputText;
    QWidget *page_2;
    QFrame *line;
    QTextEdit *pageLabels_2;
    QTextEdit *pageValues_2;
    QWidget *page_3;
    QTextEdit *pageValues_3;
    QTextEdit *pageLabels_3;
    QFrame *line_2;
    QWidget *page;
    QPushButton *autoGenButton;
    QPushButton *temperatureUnitsButton;
    QPushButton *brightnessButton;
    QPushButton *shutdownButton;
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
    QTextEdit *pinText;
    QPushButton *deleteButton;
    QPushButton *enterButton;
    QTextEdit *textEdit;
    QTextEdit *errorText;
    QWidget *page_5;
    QTextEdit *textEdit_2;
    QFrame *line_3;
    QPushButton *fifteenAmpButton;
    QPushButton *twentyfourAmpButton;
    QPushButton *thirtyAmpButton;
    QWidget *page_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 514);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush2(QColor(42, 42, 42, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush3(QColor(255, 255, 255, 128));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        QBrush brush4(QColor(120, 120, 120, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush5(QColor(0, 0, 0, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        MainWindow->setPalette(palette);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        settingsButton = new QPushButton(centralwidget);
        settingsButton->setObjectName(QString::fromUtf8("settingsButton"));
        settingsButton->setGeometry(QRect(20, 350, 87, 101));
        settingsButton->setAutoFillBackground(false);
        settingsButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../icons/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        settingsButton->setIcon(icon);
        inputButton = new QPushButton(centralwidget);
        inputButton->setObjectName(QString::fromUtf8("inputButton"));
        inputButton->setGeometry(QRect(130, 350, 91, 101));
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(240, 350, 91, 101));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../icons/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        backButton->setIcon(icon1);
        nextButton = new QPushButton(centralwidget);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        nextButton->setGeometry(QRect(350, 350, 91, 101));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../icons/next.png"), QSize(), QIcon::Normal, QIcon::Off);
        nextButton->setIcon(icon2);
        homeButton = new QPushButton(centralwidget);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(690, 350, 91, 101));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../icons/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        homeButton->setIcon(icon3);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 801, 341));
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
        socText->setGeometry(QRect(20, 160, 281, 91));
        socText->setFrameShape(QFrame::NoFrame);
        timeText = new QTextEdit(page_1);
        timeText->setObjectName(QString::fromUtf8("timeText"));
        timeText->setEnabled(false);
        timeText->setGeometry(QRect(310, 160, 481, 91));
        timeText->setFrameShape(QFrame::NoFrame);
        outputText = new QTextEdit(page_1);
        outputText->setObjectName(QString::fromUtf8("outputText"));
        outputText->setEnabled(false);
        outputText->setGeometry(QRect(20, 300, 281, 31));
        outputText->setFrameShape(QFrame::NoFrame);
        stackedWidget->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        line = new QFrame(page_2);
        line->setObjectName(QString::fromUtf8("line"));
        line->setEnabled(true);
        line->setGeometry(QRect(460, 10, 20, 311));
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
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        autoGenButton = new QPushButton(page);
        autoGenButton->setObjectName(QString::fromUtf8("autoGenButton"));
        autoGenButton->setGeometry(QRect(60, 50, 311, 101));
        temperatureUnitsButton = new QPushButton(page);
        temperatureUnitsButton->setObjectName(QString::fromUtf8("temperatureUnitsButton"));
        temperatureUnitsButton->setGeometry(QRect(60, 180, 311, 101));
        brightnessButton = new QPushButton(page);
        brightnessButton->setObjectName(QString::fromUtf8("brightnessButton"));
        brightnessButton->setGeometry(QRect(430, 50, 311, 101));
        shutdownButton = new QPushButton(page);
        shutdownButton->setObjectName(QString::fromUtf8("shutdownButton"));
        shutdownButton->setGeometry(QRect(430, 180, 311, 101));
        stackedWidget->addWidget(page);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        zeroButton = new QPushButton(page_4);
        zeroButton->setObjectName(QString::fromUtf8("zeroButton"));
        zeroButton->setGeometry(QRect(20, 90, 91, 91));
        zeroButton->setStyleSheet(QString::fromUtf8("font:36px;"));
        oneButton = new QPushButton(page_4);
        oneButton->setObjectName(QString::fromUtf8("oneButton"));
        oneButton->setGeometry(QRect(110, 90, 91, 91));
        oneButton->setStyleSheet(QString::fromUtf8("font:36px;"));
        twoButton = new QPushButton(page_4);
        twoButton->setObjectName(QString::fromUtf8("twoButton"));
        twoButton->setGeometry(QRect(200, 90, 91, 91));
        twoButton->setStyleSheet(QString::fromUtf8("font:36px;"));
        threeButton = new QPushButton(page_4);
        threeButton->setObjectName(QString::fromUtf8("threeButton"));
        threeButton->setGeometry(QRect(290, 90, 91, 91));
        threeButton->setStyleSheet(QString::fromUtf8("font:36px;"));
        fourButton = new QPushButton(page_4);
        fourButton->setObjectName(QString::fromUtf8("fourButton"));
        fourButton->setGeometry(QRect(380, 90, 91, 91));
        fourButton->setStyleSheet(QString::fromUtf8("font:36px;"));
        nineButton = new QPushButton(page_4);
        nineButton->setObjectName(QString::fromUtf8("nineButton"));
        nineButton->setGeometry(QRect(380, 180, 91, 91));
        nineButton->setStyleSheet(QString::fromUtf8("font:36px;"));
        eightButton = new QPushButton(page_4);
        eightButton->setObjectName(QString::fromUtf8("eightButton"));
        eightButton->setGeometry(QRect(290, 180, 91, 91));
        eightButton->setStyleSheet(QString::fromUtf8("font:36px;"));
        sevenButton = new QPushButton(page_4);
        sevenButton->setObjectName(QString::fromUtf8("sevenButton"));
        sevenButton->setGeometry(QRect(200, 180, 91, 91));
        sevenButton->setStyleSheet(QString::fromUtf8("font:36px;"));
        fiveButton = new QPushButton(page_4);
        fiveButton->setObjectName(QString::fromUtf8("fiveButton"));
        fiveButton->setGeometry(QRect(20, 180, 91, 91));
        fiveButton->setStyleSheet(QString::fromUtf8("font:36px;"));
        sixButton = new QPushButton(page_4);
        sixButton->setObjectName(QString::fromUtf8("sixButton"));
        sixButton->setGeometry(QRect(110, 180, 91, 91));
        sixButton->setStyleSheet(QString::fromUtf8("font:36px;"));
        pinText = new QTextEdit(page_4);
        pinText->setObjectName(QString::fromUtf8("pinText"));
        pinText->setEnabled(true);
        pinText->setGeometry(QRect(470, 90, 311, 91));
        pinText->setStyleSheet(QString::fromUtf8("font: 42px;\n"
"text-align: center;"));
        pinText->setFrameShape(QFrame::HLine);
        deleteButton = new QPushButton(page_4);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setGeometry(QRect(470, 180, 91, 91));
        deleteButton->setStyleSheet(QString::fromUtf8("#deleteButton {\n"
"border: 2px solid black;\n"
"background-color: red;\n"
"font: 36px;\n"
"}"));
        enterButton = new QPushButton(page_4);
        enterButton->setObjectName(QString::fromUtf8("enterButton"));
        enterButton->setGeometry(QRect(560, 180, 221, 91));
        enterButton->setStyleSheet(QString::fromUtf8("#enterButton{\n"
"border: 2px solid black;\n"
"background-color: green;\n"
"font: 36px;\n"
"}"));
        textEdit = new QTextEdit(page_4);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setEnabled(false);
        textEdit->setGeometry(QRect(30, 10, 741, 71));
        textEdit->setFrameShape(QFrame::NoFrame);
        textEdit->setFrameShadow(QFrame::Sunken);
        errorText = new QTextEdit(page_4);
        errorText->setObjectName(QString::fromUtf8("errorText"));
        errorText->setEnabled(false);
        errorText->setGeometry(QRect(20, 270, 761, 71));
        errorText->setFrameShape(QFrame::NoFrame);
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
        textEdit->raise();
        pinText->raise();
        deleteButton->raise();
        enterButton->raise();
        errorText->raise();
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        textEdit_2 = new QTextEdit(page_5);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setEnabled(false);
        textEdit_2->setGeometry(QRect(10, 10, 781, 61));
        textEdit_2->setFrameShape(QFrame::NoFrame);
        line_3 = new QFrame(page_5);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(-83, 70, 971, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        fifteenAmpButton = new QPushButton(page_5);
        fifteenAmpButton->setObjectName(QString::fromUtf8("fifteenAmpButton"));
        fifteenAmpButton->setGeometry(QRect(100, 140, 151, 101));
        fifteenAmpButton->setCheckable(true);
        twentyfourAmpButton = new QPushButton(page_5);
        twentyfourAmpButton->setObjectName(QString::fromUtf8("twentyfourAmpButton"));
        twentyfourAmpButton->setGeometry(QRect(320, 140, 151, 101));
        twentyfourAmpButton->setCheckable(true);
        thirtyAmpButton = new QPushButton(page_5);
        thirtyAmpButton->setObjectName(QString::fromUtf8("thirtyAmpButton"));
        thirtyAmpButton->setGeometry(QRect(540, 140, 151, 101));
        thirtyAmpButton->setCheckable(true);
        thirtyAmpButton->setChecked(false);
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        stackedWidget->addWidget(page_6);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        settingsButton->setText(QString());
        inputButton->setText(QCoreApplication::translate("MainWindow", "30A\n"
" Input", nullptr));
        backButton->setText(QString());
        nextButton->setText(QString());
        homeButton->setText(QString());
        timeValue->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:72pt; font-weight:600; color:#ffffff;\">00:00 </span><span style=\" font-family:'PibotoLt'; font-size:36pt; font-weight:600; color:#ffffff;\">HRS</span></p></body></html>", nullptr));
        socValue->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:72pt; font-weight:600; color:#ffffff;\">00%</span></p></body></html>", nullptr));
        socText->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:12pt; font-weight:600; color:#b6b83b;\">State of Charge</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:12pt; font-weight:600; color:#b6b83b;\">SOC</span></p></body></html>", nullptr));
        timeText->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:12pt; font-weight:600; color:#b6b83b;\">Estimated</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:12pt; font-weight:600; color:#b6b83b;\">Remaining Time</span></p></body></html>", nullptr));
        outputText->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:12pt; font-weight:600; color:#b6b83b;\">AC Output: -</span></p></body></html>", nullptr));
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
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:26pt; font-weight:600; color:#ffffff;\">0.0 VDC</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:26pt; font-weight:600; color:#ffffff;\">0 Ahr</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:26pt; font-weight:600; color:#ffffff;\">0.0 ADC"
                        "</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:26pt; font-weight:600; color:#ffffff;\">0 \302\260C</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:26pt; font-weight:600; color:#ffffff;\">Nothing</span></p></body></html>", nullptr));
        pageValues_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:26pt; font-weight:600; color:#ffffff;\">000-000-00</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:26pt; font-weight:600; color:#ffffff;\">000000</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:26pt; font-weight:600; color:#ffffff;\">(25"
                        "0) 804-1247</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:26pt; font-weight:600; color:#ffffff;\">0000000</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:26pt; font-weight:600; color:#ffffff;\">v0.00/000/</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'PibotoLt'; font-size:26pt; font-weight:600; color:#ffffff;\">0 Ah</span></p></body></html>", nullptr));
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
        autoGenButton->setText(QCoreApplication::translate("MainWindow", "Auto Gen-Start\n"
"DISABLED", nullptr));
        temperatureUnitsButton->setText(QCoreApplication::translate("MainWindow", "TEMPERATURE UNITS\n"
"CELCIUS", nullptr));
        brightnessButton->setText(QCoreApplication::translate("MainWindow", "BRIGHTNESS\n"
"100%", nullptr));
        shutdownButton->setText(QCoreApplication::translate("MainWindow", "SHUTDOWN", nullptr));
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
        pinText->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:42px; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Segoe UI';\"><br /></p></body></html>", nullptr));
        deleteButton->setText(QCoreApplication::translate("MainWindow", "<[X]", nullptr));
        enterButton->setText(QCoreApplication::translate("MainWindow", "Enter", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt; color:#ffffff;\">Enter Password</span></p></body></html>", nullptr));
        errorText->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt; color:#ff0000;\">Incorrect</span></p></body></html>", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:28pt; font-weight:600; color:#c6c600;\">CHARGE AC INPUT CURRENT</span></p></body></html>", nullptr));
        fifteenAmpButton->setText(QCoreApplication::translate("MainWindow", "15 A", nullptr));
        twentyfourAmpButton->setText(QCoreApplication::translate("MainWindow", "24 A", nullptr));
        thirtyAmpButton->setText(QCoreApplication::translate("MainWindow", "30 A", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
