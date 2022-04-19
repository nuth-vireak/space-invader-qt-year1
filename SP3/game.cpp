#include "game.h"

Game::Game(QWidget * parent) {

    // Create Scene
    scene = new QGraphicsScene();
    scene->QGraphicsScene::setSceneRect(0, 0, 1132, 622);
    QGraphicsView::setBackgroundBrush(QBrush(QImage(":/images/image/background.png")));

    QWidget::setFixedSize(1132, 622);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    QGraphicsView::setScene(scene);

    // Create Player
    player = new Player();
    player->QGraphicsItem::setPos(500,500);
    player->QGraphicsItem::setScale(0.5);
    player->QGraphicsItem::setFlag(QGraphicsItem::ItemIsFocusable);
    player->QGraphicsItem::setFocus();
    scene->QGraphicsScene::addItem(player);

    // Spawn enemy
    QTimer *timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),player,SLOT(spawn()));
    timer->QTimer::start(500);

    // Create Score
    score = new Score();
    scene->QGraphicsScene::addItem(score);

    // Create Health
    health = new Health();
    scene->addItem(health);

    // Create Level
    level = new Level();
    scene->addItem(level);
}
