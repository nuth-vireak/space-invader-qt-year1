#ifndef BEFOREGAMEPLAY_H
#define BEFOREGAMEPLAY_H

#include <QWidget>

namespace Ui {
class BeforeGameplay;
}

class BeforeGameplay : public QWidget
{
    Q_OBJECT

public:
    explicit BeforeGameplay(QWidget *parent = nullptr);
    ~BeforeGameplay();

private slots:
    void on_pushButton_continue_clicked();

private:
    Ui::BeforeGameplay *ui;
};

#endif // BEFOREGAMEPLAY_H
