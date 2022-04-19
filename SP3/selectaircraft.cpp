#include "selectaircraft.h"
#include "ui_selectaircraft.h"
#include "beforegameplay.h"

SelectAircraft::SelectAircraft(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SelectAircraft)
{
    ui->setupUi(this);
}

SelectAircraft::~SelectAircraft()
{
    delete ui;
}

void SelectAircraft::on_pushButton_select_clicked()
{
    BeforeGameplay* beforeGameplay = new BeforeGameplay();
    beforeGameplay->show();
}

