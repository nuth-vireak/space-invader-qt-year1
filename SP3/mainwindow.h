#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_startGame_clicked();

    void on_pushButton_option_clicked();

    void on_pushButton_aboutUs_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
