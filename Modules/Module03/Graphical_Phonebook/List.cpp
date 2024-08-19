#include "List.h"

#include <QDebug>
#include <QFile>
#include <QTextStream>

// vectorization all contact
QVector<Contact> List::all_contacts() const{
    return contacts;
}

int List::exist_phone(const QString &phone_n){
    for(int i=0; i<contacts.size(); i++){
        if(contacts[i].access_pn() == phone_n){ // if input phone number already exist
            return i;
        }
    }
    return -1; // can add or remove contact
}

// for exception handling
int List::empty_list(){
    if(contacts.isEmpty()){
        qDebug() << "Contact list is empty";
        return 1;
    } else{
        return 0;
    }
}

void List::test_view(){
    qDebug() << "Present contact list";
    for(const auto& test : contacts){
        qDebug() << "Name : " << test.access_n() << " Phone_number : " << test.access_pn() << " Email : " << test.access_e();
    }
}

void List::add(const Contact &newContact){
    if(exist_phone(newContact.access_pn()) == -1){
        contacts.append(newContact);
    } else{
        qDebug() << "Phone number already exist";
    }
}

void List::remove(const QString &phoneNumber){
    int remove_idx = exist_phone(phoneNumber);

    if(remove_idx != -1){ // remove contact according to the phone_number
        contacts.removeAt(remove_idx);
        qDebug() << "Chosen Phone number removed";
    } else{
       qDebug() << "Can't remove the Contact : Chosen contact doesn't exist";
    }

//    for(int i=0; i<contacts.size(); i++){
//        if(contacts[i].access_pn() == phoneNumber){
//            contacts.removeAt(i);
//            qDebug() << "Chosen Phone number removed";
//        }
//    }
}

void List::saveFile(const QString &filename){
    QFile file(filename);

    if(!file.open(QIODevice::WriteOnly | QIODevice::Text)){
        qDebug() << "Fail to save file";
    }

    QTextStream out(&file);
    for(const auto& contact : contacts){
        //out << "Name : " << contact.access_n() << " Phone_number : " << contact.access_pn() << " Email : " << contact.access_e() << "\n";
        out << contact.access_n() << ", " << contact.access_pn() << ", " << contact.access_e() << "\n";
    }
    qDebug() << "Success to save file";
    file.close();
}

void List::loadFile(const QString &filename) {
    QFile file(filename);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Fail to load file";
    }

    QTextStream in(&file);
    contacts.clear();

    while (!in.atEnd()) {
        QString line = in.readLine();
        //QStringList infos = line.split(" ");
        QStringList infos = line.split(", ");
        if (infos.size() == 3) {
//            QString name = infos[0].remove("Name :");
//            QString phoneNumber = infos[1].remove("Phone_number :");
//            QString email = infos[2].remove("Email :");

            QString name = infos[0];
            QString phoneNumber = infos[1];
            QString email = infos[2];

            Contact contact(name, phoneNumber, email);
            contacts.append(contact);
        } else{
            qDebug() << "read fail";
        }
    }
    qDebug() << "Success to save file";
    file.close();
}

Contact List::search(const QString &name){
    for(const auto &cont : contacts){
        if(cont.access_n() == name){
            return cont;
        }
    }
    qDebug() << "Contact not found";
}
