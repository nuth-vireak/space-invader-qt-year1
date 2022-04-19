/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *widget_rectangle;
    QLabel *label_highestScore;
    QPushButton *pushButton_exit;
    QPushButton *pushButton_aboutUs;
    QWidget *widget_arrow;
    QPushButton *pushButton_startGame;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_title;
    QWidget *widget_title;
    QLabel *label_highScoreNum;
    QPushButton *pushButton_option;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1132, 622);
        MainWindow->setStyleSheet(QString::fromUtf8("MainWindow{\n"
"background-color: rgb(0, 0, 0);\n"
"}"));
        widget_rectangle = new QWidget(MainWindow);
        widget_rectangle->setObjectName(QString::fromUtf8("widget_rectangle"));
        widget_rectangle->setGeometry(QRect(440, 297, 251, 171));
        widget_rectangle->setStyleSheet(QString::fromUtf8("border: 2px solid white;"));
        label_highestScore = new QLabel(MainWindow);
        label_highestScore->setObjectName(QString::fromUtf8("label_highestScore"));
        label_highestScore->setGeometry(QRect(20, 17, 191, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("000webfont"));
        font.setPointSize(23);
        label_highestScore->setFont(font);
        label_highestScore->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButton_exit = new QPushButton(MainWindow);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(480, 421, 61, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("000webfont"));
        font1.setPointSize(27);
        pushButton_exit->setFont(font1);
        pushButton_exit->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_exit->setLayoutDirection(Qt::LeftToRight);
        pushButton_exit->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: white;\n"
"Text-align:left"));
        pushButton_exit->setCheckable(false);
        pushButton_aboutUs = new QPushButton(MainWindow);
        pushButton_aboutUs->setObjectName(QString::fromUtf8("pushButton_aboutUs"));
        pushButton_aboutUs->setGeometry(QRect(480, 384, 131, 31));
        pushButton_aboutUs->setFont(font1);
        pushButton_aboutUs->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_aboutUs->setLayoutDirection(Qt::LeftToRight);
        pushButton_aboutUs->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: white;\n"
"Text-align:left"));
        pushButton_aboutUs->setCheckable(false);
        widget_arrow = new QWidget(MainWindow);
        widget_arrow->setObjectName(QString::fromUtf8("widget_arrow"));
        widget_arrow->setGeometry(QRect(450, 317, 21, 21));
        widget_arrow->setStyleSheet(QString::fromUtf8("image: url(:/images/image/pointButton.png);"));
        pushButton_startGame = new QPushButton(MainWindow);
        pushButton_startGame->setObjectName(QString::fromUtf8("pushButton_startGame"));
        pushButton_startGame->setGeometry(QRect(480, 310, 171, 31));
        pushButton_startGame->setFont(font1);
        pushButton_startGame->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_startGame->setLayoutDirection(Qt::LeftToRight);
        pushButton_startGame->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: white;\n"
"Text-align:left"));
        pushButton_startGame->setCheckable(false);
        gridLayoutWidget = new QWidget(MainWindow);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(-1, 77, 1131, 131));
        gridLayout_title = new QGridLayout(gridLayoutWidget);
        gridLayout_title->setObjectName(QString::fromUtf8("gridLayout_title"));
        gridLayout_title->setContentsMargins(0, 0, 0, 0);
        widget_title = new QWidget(gridLayoutWidget);
        widget_title->setObjectName(QString::fromUtf8("widget_title"));
        widget_title->setStyleSheet(QString::fromUtf8("image: url(:/images/image/title.png);"));

        gridLayout_title->addWidget(widget_title, 0, 0, 1, 1);

        label_highScoreNum = new QLabel(MainWindow);
        label_highScoreNum->setObjectName(QString::fromUtf8("label_highScoreNum"));
        label_highScoreNum->setGeometry(QRect(210, 17, 91, 31));
        label_highScoreNum->setFont(font);
        label_highScoreNum->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButton_option = new QPushButton(MainWindow);
        pushButton_option->setObjectName(QString::fromUtf8("pushButton_option"));
        pushButton_option->setGeometry(QRect(480, 347, 101, 31));
        pushButton_option->setFont(font1);
        pushButton_option->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_option->setLayoutDirection(Qt::LeftToRight);
        pushButton_option->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: white;\n"
"Text-align:left"));
        pushButton_option->setCheckable(false);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_startGame, &QPushButton::clicked, MainWindow, qOverload<>(&QWidget::hide));
        QObject::connect(pushButton_option, &QPushButton::clicked, MainWindow, qOverload<>(&QWidget::hide));
        QObject::connect(pushButton_aboutUs, &QPushButton::clicked, MainWindow, qOverload<>(&QWidget::hide));
        QObject::connect(pushButton_exit, &QPushButton::clicked, MainWindow, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Space Invader", nullptr));
        label_highestScore->setText(QCoreApplication::translate("MainWindow", "HIGHEST SCORE:", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("MainWindow", "EXIT", nullptr));
        pushButton_aboutUs->setText(QCoreApplication::translate("MainWindow", "ABOUT US", nullptr));
        pushButton_startGame->setText(QCoreApplication::translate("MainWindow", "START GAME", nullptr));
        label_highScoreNum->setText(QCoreApplication::translate("MainWindow", "1234", nullptr));
        pushButton_option->setText(QCoreApplication::translate("MainWindow", "OPTION", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
