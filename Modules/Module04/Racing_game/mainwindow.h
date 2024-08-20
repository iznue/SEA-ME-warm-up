#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "Car.h"
#include "RaceTrack.h"
#include "CarThread.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void updateCarPosi(int newPosition);

    void on_pushButton_start_clicked();

    void on_pushButton_pause_clicked();

    void on_pushButton_exit_clicked();

private:
    Ui::MainWindow *ui;

    QList<Car*> carList; // save cars
    RaceTrack *raceTrack;
    QList<QThread*> threadList; // save threads
};
#endif // MAINWINDOW_H
