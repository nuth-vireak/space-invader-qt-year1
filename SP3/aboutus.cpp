#include "aboutus.h"
#include "ui_aboutus.h"
#include "mainwindow.h"

AboutUs::AboutUs(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AboutUs)
{
    ui->setupUi(this);
}

AboutUs::~AboutUs()
{
    delete ui;
}

void AboutUs::on_pushButton_back_clicked()
{
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

