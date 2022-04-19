/********************************************************************************
** Form generated from reading UI file 'selectaircraft.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTAIRCRAFT_H
#define UI_SELECTAIRCRAFT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectAircraft
{
public:
    QFrame *frame_background;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_title;
    QWidget *widget_title;
    QWidget *widget_aircraftPicture;
    QWidget *widget_right;
    QWidget *widget_left;
    QPushButton *pushButton_select;

    void setupUi(QWidget *SelectAircraft)
    {
        if (SelectAircraft->objectName().isEmpty())
            SelectAircraft->setObjectName(QString::fromUtf8("SelectAircraft"));
        SelectAircraft->resize(1132, 622);
        frame_background = new QFrame(SelectAircraft);
        frame_background->setObjectName(QString::fromUtf8("frame_background"));
        frame_background->setGeometry(QRect(0, 0, 1132, 622));
        frame_background->setStyleSheet(QString::fromUtf8("#frame_background\n"
"{\n"
"	background-image: url(:/images/image/background.png);\n"
"	border: none;\n"
"}"));
        frame_background->setFrameShape(QFrame::StyledPanel);
        frame_background->setFrameShadow(QFrame::Raised);
        gridLayoutWidget = new QWidget(frame_background);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 90, 1131, 131));
        gridLayout_title = new QGridLayout(gridLayoutWidget);
        gridLayout_title->setObjectName(QString::fromUtf8("gridLayout_title"));
        gridLayout_title->setContentsMargins(0, 0, 0, 0);
        widget_title = new QWidget(gridLayoutWidget);
        widget_title->setObjectName(QString::fromUtf8("widget_title"));
        widget_title->setStyleSheet(QString::fromUtf8("image: url(:/images/image/title.png);"));

        gridLayout_title->addWidget(widget_title, 0, 0, 1, 1);

        widget_aircraftPicture = new QWidget(frame_background);
        widget_aircraftPicture->setObjectName(QString::fromUtf8("widget_aircraftPicture"));
        widget_aircraftPicture->setGeometry(QRect(500, 280, 121, 121));
        widget_aircraftPicture->setStyleSheet(QString::fromUtf8("image: url(:/images/image/plane1.png);"));
        widget_right = new QWidget(frame_background);
        widget_right->setObjectName(QString::fromUtf8("widget_right"));
        widget_right->setGeometry(QRect(640, 320, 41, 41));
        widget_right->setStyleSheet(QString::fromUtf8("image: url(:/images/image/pointButton.png);"));
        widget_left = new QWidget(frame_background);
        widget_left->setObjectName(QString::fromUtf8("widget_left"));
        widget_left->setGeometry(QRect(440, 320, 41, 41));
        widget_left->setStyleSheet(QString::fromUtf8("image: url(:/images/image/left.png);"));
        pushButton_select = new QPushButton(frame_background);
        pushButton_select->setObjectName(QString::fromUtf8("pushButton_select"));
        pushButton_select->setGeometry(QRect(480, 410, 181, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("000webfont"));
        font.setPointSize(22);
        pushButton_select->setFont(font);
        pushButton_select->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_select->setLayoutDirection(Qt::LeftToRight);
        pushButton_select->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: white;\n"
"Text-align:left"));
        pushButton_select->setCheckable(false);

        retranslateUi(SelectAircraft);
        QObject::connect(pushButton_select, &QPushButton::clicked, SelectAircraft, qOverload<>(&QWidget::hide));

        QMetaObject::connectSlotsByName(SelectAircraft);
    } // setupUi

    void retranslateUi(QWidget *SelectAircraft)
    {
        SelectAircraft->setWindowTitle(QCoreApplication::translate("SelectAircraft", "Space Invader", nullptr));
        pushButton_select->setText(QCoreApplication::translate("SelectAircraft", "SELECT AIRCRAFT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectAircraft: public Ui_SelectAircraft {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTAIRCRAFT_H
