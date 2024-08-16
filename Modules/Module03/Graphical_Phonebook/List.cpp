#include "List.h"
#include <QDebug>

int List::exist_phone(const QString &phone_n){
    for(int i=0; i<contacts.size(); i++){
        if(contacts[i].access_pn() == phone_n){
            return i;
        }
    }
    return -1;
}

int List::empty_list(){
    if(contacts.isEmpty()){
        qDebug() << "Contact list is empty";
        return 1;
    } else{
        return 0;
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

    if(remove_idx != -1){
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

Contact List::search(const QString &name){
    for(const auto &cont : contacts){
        if(cont.access_n() == name){
            return cont;
        }
    }
}
