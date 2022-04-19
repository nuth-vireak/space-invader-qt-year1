/********************************************************************************
** Form generated from reading UI file 'aboutus.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTUS_H
#define UI_ABOUTUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutUs
{
public:
    QFrame *frame_background;
    QWidget *widget_rupp;
    QWidget *widget_fee;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_title;
    QWidget *widget_title;
    QPushButton *pushButton_text1;
    QPushButton *pushButton_text2;
    QPushButton *pushButton_text3;
    QPushButton *pushButton_text5;
    QPushButton *pushButton_text4;
    QPushButton *pushButton_text8;
    QPushButton *pushButton_text7;
    QPushButton *pushButton_text6;
    QPushButton *pushButton_text10;
    QPushButton *pushButton_text9;
    QPushButton *pushButton_text11;
    QPushButton *pushButton_back;

    void setupUi(QWidget *AboutUs)
    {
        if (AboutUs->objectName().isEmpty())
            AboutUs->setObjectName(QString::fromUtf8("AboutUs"));
        AboutUs->resize(1132, 622);
        frame_background = new QFrame(AboutUs);
        frame_background->setObjectName(QString::fromUtf8("frame_background"));
        frame_background->setGeometry(QRect(0, 0, 1132, 622));
        frame_background->setStyleSheet(QString::fromUtf8("#frame_background\n"
"{\n"
"	background-image: url(:/images/image/background.png);\n"
"	border: none;\n"
"}"));
        frame_background->setFrameShape(QFrame::StyledPanel);
        frame_background->setFrameShadow(QFrame::Raised);
        widget_rupp = new QWidget(frame_background);
        widget_rupp->setObjectName(QString::fromUtf8("widget_rupp"));
        widget_rupp->setGeometry(QRect(50, 60, 81, 81));
        widget_rupp->setStyleSheet(QString::fromUtf8("image: url(:/images/image/RUPP_logo 1.png);"));
        widget_fee = new QWidget(frame_background);
        widget_fee->setObjectName(QString::fromUtf8("widget_fee"));
        widget_fee->setGeometry(QRect(160, 60, 81, 80));
        widget_fee->setStyleSheet(QString::fromUtf8("image: url(:/images/image/fee logo.png);"));
        gridLayoutWidget = new QWidget(frame_background);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 60, 1131, 131));
        gridLayout_title = new QGridLayout(gridLayoutWidget);
        gridLayout_title->setObjectName(QString::fromUtf8("gridLayout_title"));
        gridLayout_title->setContentsMargins(0, 0, 0, 0);
        widget_title = new QWidget(gridLayoutWidget);
        widget_title->setObjectName(QString::fromUtf8("widget_title"));
        widget_title->setStyleSheet(QString::fromUtf8("image: url(:/images/image/title.png);"));

        gridLayout_title->addWidget(widget_title, 0, 0, 1, 1);

        pushButton_text1 = new QPushButton(frame_background);
        pushButton_text1->setObjectName(QString::fromUtf8("pushButton_text1"));
        pushButton_text1->setGeometry(QRect(120, 240, 231, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("000webfont"));
        font.setPointSize(29);
        font.setUnderline(true);
        pushButton_text1->setFont(font);
        pushButton_text1->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_text1->setLayoutDirection(Qt::LeftToRight);
        pushButton_text1->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: rgb(255, 101, 25);\n"
"Text-align:center;"));
        pushButton_text1->setCheckable(false);
        pushButton_text2 = new QPushButton(frame_background);
        pushButton_text2->setObjectName(QString::fromUtf8("pushButton_text2"));
        pushButton_text2->setGeometry(QRect(120, 280, 231, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("000webfont"));
        font1.setPointSize(27);
        pushButton_text2->setFont(font1);
        pushButton_text2->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_text2->setLayoutDirection(Qt::LeftToRight);
        pushButton_text2->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: white;\n"
"Text-align:center;"));
        pushButton_text2->setCheckable(false);
        pushButton_text3 = new QPushButton(frame_background);
        pushButton_text3->setObjectName(QString::fromUtf8("pushButton_text3"));
        pushButton_text3->setGeometry(QRect(120, 310, 231, 31));
        pushButton_text3->setFont(font1);
        pushButton_text3->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_text3->setLayoutDirection(Qt::LeftToRight);
        pushButton_text3->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: white;\n"
"Text-align:center;"));
        pushButton_text3->setCheckable(false);
        pushButton_text5 = new QPushButton(frame_background);
        pushButton_text5->setObjectName(QString::fromUtf8("pushButton_text5"));
        pushButton_text5->setGeometry(QRect(420, 280, 261, 31));
        pushButton_text5->setFont(font1);
        pushButton_text5->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_text5->setLayoutDirection(Qt::LeftToRight);
        pushButton_text5->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: white;\n"
"Text-align:center;"));
        pushButton_text5->setCheckable(false);
        pushButton_text4 = new QPushButton(frame_background);
        pushButton_text4->setObjectName(QString::fromUtf8("pushButton_text4"));
        pushButton_text4->setGeometry(QRect(420, 240, 270, 31));
        pushButton_text4->setFont(font);
        pushButton_text4->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_text4->setLayoutDirection(Qt::LeftToRight);
        pushButton_text4->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: rgb(255, 101, 25);\n"
"Text-align:center;"));
        pushButton_text4->setCheckable(false);
        pushButton_text8 = new QPushButton(frame_background);
        pushButton_text8->setObjectName(QString::fromUtf8("pushButton_text8"));
        pushButton_text8->setGeometry(QRect(750, 310, 271, 31));
        pushButton_text8->setFont(font1);
        pushButton_text8->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_text8->setLayoutDirection(Qt::LeftToRight);
        pushButton_text8->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: white;\n"
"Text-align:center;"));
        pushButton_text8->setCheckable(false);
        pushButton_text7 = new QPushButton(frame_background);
        pushButton_text7->setObjectName(QString::fromUtf8("pushButton_text7"));
        pushButton_text7->setGeometry(QRect(750, 280, 271, 31));
        pushButton_text7->setFont(font1);
        pushButton_text7->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_text7->setLayoutDirection(Qt::LeftToRight);
        pushButton_text7->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: white;\n"
"Text-align:center;"));
        pushButton_text7->setCheckable(false);
        pushButton_text6 = new QPushButton(frame_background);
        pushButton_text6->setObjectName(QString::fromUtf8("pushButton_text6"));
        pushButton_text6->setGeometry(QRect(750, 240, 271, 31));
        pushButton_text6->setFont(font);
        pushButton_text6->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_text6->setLayoutDirection(Qt::LeftToRight);
        pushButton_text6->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: rgb(255, 101, 25);\n"
"Text-align:center;"));
        pushButton_text6->setCheckable(false);
        pushButton_text10 = new QPushButton(frame_background);
        pushButton_text10->setObjectName(QString::fromUtf8("pushButton_text10"));
        pushButton_text10->setGeometry(QRect(750, 370, 271, 31));
        pushButton_text10->setFont(font1);
        pushButton_text10->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_text10->setLayoutDirection(Qt::LeftToRight);
        pushButton_text10->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: white;\n"
"Text-align:center;"));
        pushButton_text10->setCheckable(false);
        pushButton_text9 = new QPushButton(frame_background);
        pushButton_text9->setObjectName(QString::fromUtf8("pushButton_text9"));
        pushButton_text9->setGeometry(QRect(750, 340, 271, 31));
        pushButton_text9->setFont(font1);
        pushButton_text9->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_text9->setLayoutDirection(Qt::LeftToRight);
        pushButton_text9->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: white;\n"
"Text-align:center;"));
        pushButton_text9->setCheckable(false);
        pushButton_text11 = new QPushButton(frame_background);
        pushButton_text11->setObjectName(QString::fromUtf8("pushButton_text11"));
        pushButton_text11->setGeometry(QRect(750, 400, 271, 31));
        pushButton_text11->setFont(font1);
        pushButton_text11->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_text11->setLayoutDirection(Qt::LeftToRight);
        pushButton_text11->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: white;\n"
"Text-align:center;"));
        pushButton_text11->setCheckable(false);
        pushButton_back = new QPushButton(frame_background);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(20, 10, 161, 31));
        pushButton_back->setFont(font1);
        pushButton_back->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_back->setLayoutDirection(Qt::LeftToRight);
        pushButton_back->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: white;\n"
"Text-align:left"));
        pushButton_back->setCheckable(false);

        retranslateUi(AboutUs);
        QObject::connect(pushButton_back, &QPushButton::clicked, AboutUs, qOverload<>(&QWidget::hide));

        QMetaObject::connectSlotsByName(AboutUs);
    } // setupUi

    void retranslateUi(QWidget *AboutUs)
    {
        AboutUs->setWindowTitle(QCoreApplication::translate("AboutUs", "Form", nullptr));
        pushButton_text1->setText(QCoreApplication::translate("AboutUs", "DEPARTMENT", nullptr));
        pushButton_text2->setText(QCoreApplication::translate("AboutUs", "IT-ENGINEERING", nullptr));
        pushButton_text3->setText(QCoreApplication::translate("AboutUs", "YEAR 1", nullptr));
        pushButton_text5->setText(QCoreApplication::translate("AboutUs", "KOR SOKCHEA", nullptr));
        pushButton_text4->setText(QCoreApplication::translate("AboutUs", "OUR PROFESSOR", nullptr));
        pushButton_text8->setText(QCoreApplication::translate("AboutUs", "DUM SILEANG", nullptr));
        pushButton_text7->setText(QCoreApplication::translate("AboutUs", "NEAM SOVANAK", nullptr));
        pushButton_text6->setText(QCoreApplication::translate("AboutUs", "OUR TEAM", nullptr));
        pushButton_text10->setText(QCoreApplication::translate("AboutUs", "THAN LIMPHENGEANG", nullptr));
        pushButton_text9->setText(QCoreApplication::translate("AboutUs", "NUTH VIREAK", nullptr));
        pushButton_text11->setText(QCoreApplication::translate("AboutUs", "BUTH CHANTHA", nullptr));
        pushButton_back->setText(QCoreApplication::translate("AboutUs", "BACK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutUs: public Ui_AboutUs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTUS_H
