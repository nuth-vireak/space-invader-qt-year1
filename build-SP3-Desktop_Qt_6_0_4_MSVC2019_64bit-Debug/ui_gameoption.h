/********************************************************************************
** Form generated from reading UI file 'gameoption.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEOPTION_H
#define UI_GAMEOPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameOption
{
public:
    QFrame *frame_background;
    QWidget *widget_rectangle;
    QWidget *widget_arrow;
    QPushButton *pushButton_sound;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_title;
    QWidget *widget_title;
    QPushButton *pushButton_back;

    void setupUi(QWidget *GameOption)
    {
        if (GameOption->objectName().isEmpty())
            GameOption->setObjectName(QString::fromUtf8("GameOption"));
        GameOption->resize(1132, 622);
        frame_background = new QFrame(GameOption);
        frame_background->setObjectName(QString::fromUtf8("frame_background"));
        frame_background->setGeometry(QRect(0, 0, 1132, 622));
        frame_background->setStyleSheet(QString::fromUtf8("#frame_background\n"
"{\n"
"	background-image: url(:/images/image/background.png);\n"
"	border: none;\n"
"}"));
        frame_background->setFrameShape(QFrame::StyledPanel);
        frame_background->setFrameShadow(QFrame::Raised);
        widget_rectangle = new QWidget(frame_background);
        widget_rectangle->setObjectName(QString::fromUtf8("widget_rectangle"));
        widget_rectangle->setGeometry(QRect(440, 300, 251, 101));
        widget_rectangle->setStyleSheet(QString::fromUtf8("border: 2px solid white;"));
        widget_arrow = new QWidget(frame_background);
        widget_arrow->setObjectName(QString::fromUtf8("widget_arrow"));
        widget_arrow->setGeometry(QRect(450, 320, 21, 21));
        widget_arrow->setStyleSheet(QString::fromUtf8("image: url(:/images/image/pointButton.png);"));
        pushButton_sound = new QPushButton(frame_background);
        pushButton_sound->setObjectName(QString::fromUtf8("pushButton_sound"));
        pushButton_sound->setGeometry(QRect(480, 313, 619, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("000webfont"));
        font.setPointSize(27);
        pushButton_sound->setFont(font);
        pushButton_sound->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_sound->setLayoutDirection(Qt::LeftToRight);
        pushButton_sound->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: white;\n"
"Text-align:left"));
        pushButton_sound->setCheckable(false);
        gridLayoutWidget = new QWidget(frame_background);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(-1, 80, 1131, 131));
        gridLayout_title = new QGridLayout(gridLayoutWidget);
        gridLayout_title->setObjectName(QString::fromUtf8("gridLayout_title"));
        gridLayout_title->setContentsMargins(0, 0, 0, 0);
        widget_title = new QWidget(gridLayoutWidget);
        widget_title->setObjectName(QString::fromUtf8("widget_title"));
        widget_title->setStyleSheet(QString::fromUtf8("image: url(:/images/image/title.png);"));

        gridLayout_title->addWidget(widget_title, 0, 0, 1, 1);

        pushButton_back = new QPushButton(frame_background);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(480, 350, 619, 31));
        pushButton_back->setFont(font);
        pushButton_back->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_back->setLayoutDirection(Qt::LeftToRight);
        pushButton_back->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: white;\n"
"Text-align:left"));
        pushButton_back->setCheckable(false);

        retranslateUi(GameOption);
        QObject::connect(pushButton_back, &QPushButton::clicked, GameOption, qOverload<>(&QWidget::hide));

        QMetaObject::connectSlotsByName(GameOption);
    } // setupUi

    void retranslateUi(QWidget *GameOption)
    {
        GameOption->setWindowTitle(QCoreApplication::translate("GameOption", "Space Invader", nullptr));
        pushButton_sound->setText(QCoreApplication::translate("GameOption", "SOUND ON", nullptr));
        pushButton_back->setText(QCoreApplication::translate("GameOption", "BACK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameOption: public Ui_GameOption {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEOPTION_H
