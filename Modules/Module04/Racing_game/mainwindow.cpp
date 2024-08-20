#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QPixmap>
#include <QDir>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // create Car objects
    Car *yellowCar = new Car(0,2,1); // initial setting : position, speed, direction
    Car *whiteCar = new Car(0,3,1);
    carList.append(yellowCar);
    carList.append(whiteCar);

    // create RaceTrack object
    raceTrack = new RaceTrack(1000,700); // initial setting : size, finishline


    // display race track background & yellow car & white car
    QString dir = QDir::currentPath();
    dir.chop(31);
    //qDebug() << dir;

    QString rtb = dir + "Racing_game/images/race_track.jpg";
    QPixmap pix(rtb);
    ui->race_track_img->setPixmap(pix);

    QString yc = dir + "Racing_game/images/yellow_car.png";
    QPixmap yCarpix(yc);
    ui->yellow_car_image->setPixmap(yCarpix.scaled(100,100, Qt::KeepAspectRatio));

    QString wc = dir + "Racing_game/images/white_car.png";
    QPixmap wCarpix(wc);
    ui->white_car_image->setPixmap(wCarpix.scaled(100,100, Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete raceTrack;
}

/*************************************************************************************/
// if press the 'start' button : set car list - generate thread - set finishline
// while playing game :  update car positions - emit signal [position = finishline] - quit thread

// button click = 'Signal' | when occur signal, function call = 'Slot' | function that connect signal and slot = 'connect()'
// connect(1,2,3,4) - 1: object [event occured] / 2: object signal(event)
//                    3: object name(contain the signal &slot func to be called) / 4: slot func(called when signal occurs)

void MainWindow::updateCarPosi(int newPosition){
    // update car position through thew new positions
    qDebug() << "newPosition : " << newPosition;

    if (newPosition == carList[0]->accessPosition()){
        ui->yellow_car_image->move(newPosition, ui->yellow_car_image->y());
    }
    if (newPosition == carList[1]->accessPosition()){
        ui->white_car_image->move(newPosition, ui->white_car_image->y());
    }
}

void MainWindow::on_pushButton_start_clicked()
{
    qDebug() << "Race start";

    foreach (Car *car, carList) {
        QThread *thread = new QThread();
        CarThread *carThread = new CarThread(car, raceTrack);
        carThread->moveToThread(thread);

        // when car position changed, connect with updateCarPosition slot
        connect(car, &Car::positionChanged, this, &MainWindow::updateCarPosi);

        // when thread starts, call run() in CarThread
        connect(thread, &QThread::started, carThread, &CarThread::run);

        //        bool positionConnected = connect(car, &Car::positionChanged, this, &MainWindow::updateCarPosi);
        //        qDebug() << "Position changed connected: " << positionConnected;

        //        bool startedConnected = connect(thread, &QThread::started, carThread, &CarThread::run);
        //        qDebug() << "Thread started connected: " << startedConnected;

        // when carThread exits, quit thread & release resource
        connect(carThread, &CarThread::finished, thread, &QThread::quit);
        connect(carThread, &CarThread::finished, carThread, &CarThread::deleteLater);
        connect(thread, &QThread::finished, thread, &QThread::deleteLater);

        threadList.append(thread);
        thread->start();
        qDebug() << "Thread started: " << thread->isRunning();
//        carThread->start();
    }
}

void MainWindow::on_pushButton_pause_clicked()
{
    qDebug() << "Pause race";
}

void MainWindow::on_pushButton_exit_clicked()
{
    qDebug() << "Exit game";
    this->close();
}
