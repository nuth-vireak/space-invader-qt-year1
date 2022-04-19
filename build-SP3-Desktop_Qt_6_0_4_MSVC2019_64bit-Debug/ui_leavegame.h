/********************************************************************************
** Form generated from reading UI file 'leavegame.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEAVEGAME_H
#define UI_LEAVEGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LeaveGame
{
public:
    QFrame *frame_background;
    QWidget *widget_2;
    QWidget *widget_3;
    QWidget *widget_4;
    QLabel *label_highScoreNum;
    QLabel *label_highestScore_2;
    QWidget *widget;
    QLabel *label_highestScore;
    QWidget *widget_5;
    QWidget *widget_6;
    QWidget *widget_blur;
    QPushButton *pushButton_select;
    QPushButton *pushButton_text2;
    QPushButton *pushButton_text3;
    QPushButton *pushButton_text1;
    QPushButton *pushButton_yes;
    QPushButton *pushButton_no;

    void setupUi(QWidget *LeaveGame)
    {
        if (LeaveGame->objectName().isEmpty())
            LeaveGame->setObjectName(QString::fromUtf8("LeaveGame"));
        LeaveGame->resize(1132, 622);
        frame_background = new QFrame(LeaveGame);
        frame_background->setObjectName(QString::fromUtf8("frame_background"));
        frame_background->setGeometry(QRect(0, 0, 1131, 621));
        frame_background->setStyleSheet(QString::fromUtf8("#frame_background\n"
"{\n"
"	\n"
"	background-image: url(:/image/wave4.png);\n"
"	border: none;\n"
"}"));
        frame_background->setFrameShape(QFrame::StyledPanel);
        frame_background->setFrameShadow(QFrame::Raised);
        widget_2 = new QWidget(frame_background);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(50, 90, 16, 16));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        widget_3 = new QWidget(frame_background);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(70, 90, 16, 16));
        widget_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        widget_4 = new QWidget(frame_background);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(1090, 20, 31, 31));
        widget_4->setStyleSheet(QString::fromUtf8("image: url(:/image/resume.png);"));
        label_highScoreNum = new QLabel(frame_background);
        label_highScoreNum->setObjectName(QString::fromUtf8("label_highScoreNum"));
        label_highScoreNum->setGeometry(QRect(110, 20, 91, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("000webfont"));
        font.setPointSize(23);
        label_highScoreNum->setFont(font);
        label_highScoreNum->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_highestScore_2 = new QLabel(frame_background);
        label_highestScore_2->setObjectName(QString::fromUtf8("label_highestScore_2"));
        label_highestScore_2->setGeometry(QRect(30, 50, 151, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("000webfont"));
        font1.setPointSize(22);
        label_highestScore_2->setFont(font1);
        label_highestScore_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        widget = new QWidget(frame_background);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 90, 16, 16));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_highestScore = new QLabel(frame_background);
        label_highestScore->setObjectName(QString::fromUtf8("label_highestScore"));
        label_highestScore->setGeometry(QRect(30, 20, 81, 31));
        label_highestScore->setFont(font1);
        label_highestScore->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        widget_5 = new QWidget(frame_background);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setGeometry(QRect(540, 550, 81, 51));
        widget_5->setStyleSheet(QString::fromUtf8("image: url(:/image/plane1.png);"));
        widget_6 = new QWidget(frame_background);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setGeometry(QRect(0, -70, 1121, 601));
        widget_6->setStyleSheet(QString::fromUtf8("image: url(:/image/enemy4.png);\n"
"border: none;"));
        widget_blur = new QWidget(frame_background);
        widget_blur->setObjectName(QString::fromUtf8("widget_blur"));
        widget_blur->setGeometry(QRect(0, 0, 1132, 622));
        widget_blur->setStyleSheet(QString::fromUtf8("#widget_7\n"
"{\n"
"background-image: url(:/image/blur.png);\n"
"}"));
        pushButton_select = new QPushButton(widget_blur);
        pushButton_select->setObjectName(QString::fromUtf8("pushButton_select"));
        pushButton_select->setGeometry(QRect(360, 220, 411, 31));
        pushButton_select->setFont(font1);
        pushButton_select->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_select->setLayoutDirection(Qt::LeftToRight);
        pushButton_select->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: white;\n"
"Text-align:center;"));
        pushButton_select->setCheckable(false);
        pushButton_text2 = new QPushButton(widget_blur);
        pushButton_text2->setObjectName(QString::fromUtf8("pushButton_text2"));
        pushButton_text2->setGeometry(QRect(440, 530, 261, 31));
        pushButton_text2->setFont(font1);
        pushButton_text2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_text2->setLayoutDirection(Qt::LeftToRight);
        pushButton_text2->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: rgb(125, 125, 125);\n"
"Text-align:left;\n"
""));
        pushButton_text2->setCheckable(false);
        pushButton_text3 = new QPushButton(widget_blur);
        pushButton_text3->setObjectName(QString::fromUtf8("pushButton_text3"));
        pushButton_text3->setGeometry(QRect(350, 560, 261, 31));
        pushButton_text3->setFont(font1);
        pushButton_text3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_text3->setLayoutDirection(Qt::LeftToRight);
        pushButton_text3->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: rgb(125, 125, 125);\n"
"Text-align:right;\n"
""));
        pushButton_text3->setCheckable(false);
        pushButton_text1 = new QPushButton(widget_blur);
        pushButton_text1->setObjectName(QString::fromUtf8("pushButton_text1"));
        pushButton_text1->setGeometry(QRect(360, 250, 411, 31));
        pushButton_text1->setFont(font1);
        pushButton_text1->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_text1->setLayoutDirection(Qt::LeftToRight);
        pushButton_text1->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: white;\n"
"Text-align:center;"));
        pushButton_text1->setCheckable(false);
        pushButton_yes = new QPushButton(widget_blur);
        pushButton_yes->setObjectName(QString::fromUtf8("pushButton_yes"));
        pushButton_yes->setGeometry(QRect(470, 320, 71, 31));
        pushButton_yes->setFont(font1);
        pushButton_yes->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_yes->setLayoutDirection(Qt::LeftToRight);
        pushButton_yes->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: white;\n"
"Text-align:center;"));
        pushButton_yes->setCheckable(false);
        pushButton_no = new QPushButton(widget_blur);
        pushButton_no->setObjectName(QString::fromUtf8("pushButton_no"));
        pushButton_no->setGeometry(QRect(570, 320, 71, 31));
        pushButton_no->setFont(font1);
        pushButton_no->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_no->setLayoutDirection(Qt::LeftToRight);
        pushButton_no->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: white;\n"
"Text-align:center;"));
        pushButton_no->setCheckable(false);

        retranslateUi(LeaveGame);

        QMetaObject::connectSlotsByName(LeaveGame);
    } // setupUi

    void retranslateUi(QWidget *LeaveGame)
    {
        LeaveGame->setWindowTitle(QCoreApplication::translate("LeaveGame", "Form", nullptr));
        label_highScoreNum->setText(QCoreApplication::translate("LeaveGame", "700", nullptr));
        label_highestScore_2->setText(QCoreApplication::translate("LeaveGame", "LEVEL: GOD", nullptr));
        label_highestScore->setText(QCoreApplication::translate("LeaveGame", "SCORE:", nullptr));
        pushButton_select->setText(QCoreApplication::translate("LeaveGame", "Are you sure you want to quit the", nullptr));
        pushButton_text2->setText(QCoreApplication::translate("LeaveGame", "PRESS Y FOR YES", nullptr));
        pushButton_text3->setText(QCoreApplication::translate("LeaveGame", "N FOR NO", nullptr));
        pushButton_text1->setText(QCoreApplication::translate("LeaveGame", "gameplay? (scored is saved)", nullptr));
        pushButton_yes->setText(QCoreApplication::translate("LeaveGame", "YES", nullptr));
        pushButton_no->setText(QCoreApplication::translate("LeaveGame", "NO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LeaveGame: public Ui_LeaveGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEAVEGAME_H
