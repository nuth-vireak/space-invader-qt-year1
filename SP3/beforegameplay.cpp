#include "beforegameplay.h"
#include "ui_beforegameplay.h"
#include "game.h"

extern Game* game;

BeforeGameplay::BeforeGameplay(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BeforeGameplay)
{
    ui->setupUi(this);
}

BeforeGameplay::~BeforeGameplay()
{
    delete ui;
}

void BeforeGameplay::on_pushButton_continue_clicked()
{
    game = new Game();
    game->show();
}

