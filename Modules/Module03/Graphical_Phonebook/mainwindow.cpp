#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    updateContactListView();
}

MainWindow::~MainWindow()
{
    delete ui;
}

// viewing the contact list
void MainWindow::updateContactListView() {
    ui->contact_list_view->clear();

    QVector<Contact> contacts = Contact_list.all_contacts();

    int i = 0;
    for (const auto& conts : contacts) {
        //ui->contact_list_view->addItem(conts.access_n() + " " + conts.access_pn() + " " + conts.access_e());
        QString cont_item = QString("Index %1:  %2  %3  %4")
                .arg(i)
                .arg(conts.access_n())
                .arg(conts.access_pn())
                .arg(conts.access_e());
        ui->contact_list_view->addItem(cont_item);
        i++;
    }
}

// press the button to add information that user have entered to the list
void MainWindow::on_add_button_clicked()
{
    QString name = ui->lineEdit_add_name->text();
    QString phone_number = ui->lineEdit_add_phone->text();
    QString email = ui->lineEdit_add_email->text();

    if(name.isEmpty() | phone_number.isEmpty()){
        qDebug() << "Input error";
    } else{
        Contact_list.add(Contact(name, phone_number, email));
        qDebug() << "Successfully add the contact info";
        Contact_list.test_view();
        ui->lineEdit_add_name->clear();
        ui->lineEdit_add_phone->clear();
        ui->lineEdit_add_email->clear();
        updateContactListView();
    }
}

// press the button to remove information that user have entered about 'phone_number'
void MainWindow::on_remove_button_clicked()
{
    QString remove_phone = ui->lineEdit_remove->text();

    if(remove_phone.isEmpty()){
        qDebug() << "Input error";
    } else{
        Contact_list.remove(remove_phone);
        ui->lineEdit_remove->clear();
        updateContactListView();
    }
}

// press the button to search information that user have entered about 'name'
void MainWindow::on_search_button_clicked()
{
    QString search_name = ui->lineEdit_search->text();

    if(search_name.isEmpty()){
        qDebug() << "Input error";
    } else{
        Contact search_contact = Contact_list.search(search_name);

        if(search_contact.access_n().isEmpty() | search_contact.access_pn().isEmpty() | search_contact.access_e().isEmpty()){
            QMessageBox::information(this, "Search Result", "Contact not found");
        } else{
            QString search_info = QString("Name: %1\nPhone Number: %2\nEmail: %3")
                                .arg(search_contact.access_n())
                                .arg(search_contact.access_pn())
                                .arg(search_contact.access_e());
            QMessageBox::information(this, "Search Result", search_info);
        }
    }
    ui->lineEdit_search->clear();
}


void MainWindow::on_save_button_clicked()
{
    Contact_list.saveFile("Contact_Lists.txt");
}


void MainWindow::on_load_button_clicked()
{
    Contact_list.loadFile("Contact_Lists.txt");
    updateContactListView();
    qDebug() << "load file";
}
