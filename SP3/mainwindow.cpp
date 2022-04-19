#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "selectaircraft.h"
#include "gameoption.h"
#include "aboutus.h"

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_startGame_clicked()
{
    SelectAircraft *selectAircraft = new SelectAircraft();
    selectAircraft->show();
}


void MainWindow::on_pushButton_option_clicked()
{
    GameOption* gameOption = new GameOption();
    gameOption->show();
}


void MainWindow::on_pushButton_aboutUs_clicked()
{
    AboutUs *aboutUs = new AboutUs();
    aboutUs->show();
}

