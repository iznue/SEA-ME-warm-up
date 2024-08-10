#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int myVal = 100;
    qDebug() << "hello";
    qDebug("qt first project %d", myVal);

    return a.exec();
}
