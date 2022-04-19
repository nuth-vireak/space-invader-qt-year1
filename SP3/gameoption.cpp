#include "gameoption.h"
#include "ui_gameoption.h"
#include "mainwindow.h"

GameOption::GameOption(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GameOption)
{
    ui->setupUi(this);
}

GameOption::~GameOption()
{
    delete ui;
}

void GameOption::on_pushButton_back_clicked()
{
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

