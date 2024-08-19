#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "List.h"

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
    void updateContactListView();

    void on_add_button_clicked();

    void on_remove_button_clicked();

    void on_search_button_clicked();

    void on_save_button_clicked();

    void on_load_button_clicked();

private:
    Ui::MainWindow *ui;
    List Contact_list;
};
#endif // MAINWINDOW_H
