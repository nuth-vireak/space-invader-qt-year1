#ifndef SCORE_H
#define SCORE_H

#include <QGraphicsTextItem>
#include <QFont>

class Score: public QGraphicsTextItem {
public:
    // Constructor
    Score(QGraphicsItem * parent=0);

    // Public function
    void increase();

private:
    // private variable
    int score;
};

#endif // SCORE_H
