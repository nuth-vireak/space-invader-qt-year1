/********************************************************************************
** Form generated from reading UI file 'beforegameplay.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BEFOREGAMEPLAY_H
#define UI_BEFOREGAMEPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BeforeGameplay
{
public:
    QFrame *frame_background;
    QLabel *label_highestScore;
    QLabel *label_highScoreNum;
    QLabel *label_highestScore_2;
    QWidget *widget_health1;
    QWidget *widget_health2;
    QWidget *widget_health3;
    QWidget *widget_pause;
    QWidget *widget_image;
    QLabel *label_text1;
    QLabel *label_text3;
    QLabel *label_text2;
    QPushButton *pushButton_continue;

    void setupUi(QWidget *BeforeGameplay)
    {
        if (BeforeGameplay->objectName().isEmpty())
            BeforeGameplay->setObjectName(QString::fromUtf8("BeforeGameplay"));
        BeforeGameplay->resize(1132, 622);
        frame_background = new QFrame(BeforeGameplay);
        frame_background->setObjectName(QString::fromUtf8("frame_background"));
        frame_background->setGeometry(QRect(0, 0, 1131, 621));
        frame_background->setStyleSheet(QString::fromUtf8("#frame_background\n"
"{\n"
"	background-color: rgb(0, 0, 0);\n"
"	border: none;\n"
"}"));
        frame_background->setFrameShape(QFrame::StyledPanel);
        frame_background->setFrameShadow(QFrame::Raised);
        label_highestScore = new QLabel(frame_background);
        label_highestScore->setObjectName(QString::fromUtf8("label_highestScore"));
        label_highestScore->setGeometry(QRect(30, 10, 81, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("000webfont"));
        font.setPointSize(22);
        label_highestScore->setFont(font);
        label_highestScore->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_highScoreNum = new QLabel(frame_background);
        label_highScoreNum->setObjectName(QString::fromUtf8("label_highScoreNum"));
        label_highScoreNum->setGeometry(QRect(110, 10, 91, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("000webfont"));
        font1.setPointSize(23);
        label_highScoreNum->setFont(font1);
        label_highScoreNum->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_highestScore_2 = new QLabel(frame_background);
        label_highestScore_2->setObjectName(QString::fromUtf8("label_highestScore_2"));
        label_highestScore_2->setGeometry(QRect(30, 40, 151, 31));
        label_highestScore_2->setFont(font);
        label_highestScore_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        widget_health1 = new QWidget(frame_background);
        widget_health1->setObjectName(QString::fromUtf8("widget_health1"));
        widget_health1->setGeometry(QRect(30, 80, 16, 16));
        widget_health1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        widget_health2 = new QWidget(frame_background);
        widget_health2->setObjectName(QString::fromUtf8("widget_health2"));
        widget_health2->setGeometry(QRect(50, 80, 16, 16));
        widget_health2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        widget_health3 = new QWidget(frame_background);
        widget_health3->setObjectName(QString::fromUtf8("widget_health3"));
        widget_health3->setGeometry(QRect(70, 80, 16, 16));
        widget_health3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        widget_pause = new QWidget(frame_background);
        widget_pause->setObjectName(QString::fromUtf8("widget_pause"));
        widget_pause->setGeometry(QRect(1090, 10, 31, 31));
        widget_pause->setStyleSheet(QString::fromUtf8("image: url(:/images/image/pointButton.png);"));
        widget_image = new QWidget(frame_background);
        widget_image->setObjectName(QString::fromUtf8("widget_image"));
        widget_image->setGeometry(QRect(390, 290, 351, 91));
        widget_image->setStyleSheet(QString::fromUtf8("image: url(:/images/image/instruction.png);"));
        label_text1 = new QLabel(frame_background);
        label_text1->setObjectName(QString::fromUtf8("label_text1"));
        label_text1->setGeometry(QRect(450, 240, 61, 31));
        label_text1->setFont(font);
        label_text1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_text3 = new QLabel(frame_background);
        label_text3->setObjectName(QString::fromUtf8("label_text3"));
        label_text3->setGeometry(QRect(630, 240, 61, 31));
        label_text3->setFont(font);
        label_text3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_text2 = new QLabel(frame_background);
        label_text2->setObjectName(QString::fromUtf8("label_text2"));
        label_text2->setGeometry(QRect(520, 130, 91, 31));
        label_text2->setFont(font);
        label_text2->setStyleSheet(QString::fromUtf8("color: rgb(122, 122, 122);"));
        pushButton_continue = new QPushButton(frame_background);
        pushButton_continue->setObjectName(QString::fromUtf8("pushButton_continue"));
        pushButton_continue->setGeometry(QRect(430, 550, 271, 31));
        pushButton_continue->setFont(font);
        pushButton_continue->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_continue->setLayoutDirection(Qt::LeftToRight);
        pushButton_continue->setStyleSheet(QString::fromUtf8("border: none;\n"
"Text-align:center;\n"
"color: rgb(122, 122, 122);"));
        pushButton_continue->setCheckable(false);

        retranslateUi(BeforeGameplay);
        QObject::connect(pushButton_continue, &QPushButton::clicked, BeforeGameplay, qOverload<>(&QWidget::hide));

        QMetaObject::connectSlotsByName(BeforeGameplay);
    } // setupUi

    void retranslateUi(QWidget *BeforeGameplay)
    {
        BeforeGameplay->setWindowTitle(QCoreApplication::translate("BeforeGameplay", "Space Invader", nullptr));
        label_highestScore->setText(QCoreApplication::translate("BeforeGameplay", "SCORE:", nullptr));
        label_highScoreNum->setText(QCoreApplication::translate("BeforeGameplay", "0", nullptr));
        label_highestScore_2->setText(QCoreApplication::translate("BeforeGameplay", "LEVEL: NOOB", nullptr));
        label_text1->setText(QCoreApplication::translate("BeforeGameplay", "MOVE", nullptr));
        label_text3->setText(QCoreApplication::translate("BeforeGameplay", "SHOOT", nullptr));
        label_text2->setText(QCoreApplication::translate("BeforeGameplay", "CONTROL", nullptr));
        pushButton_continue->setText(QCoreApplication::translate("BeforeGameplay", "PRESS ANY KEY TO START", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BeforeGameplay: public Ui_BeforeGameplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BEFOREGAMEPLAY_H
