#ifndef LIST_H
#define LIST_H

#include "Contact.h"

#include <QVector>

class List {
    QVector<Contact> contacts;

public:
    int exist_phone(const QString &phone_n);
    int empty_list();

    void add(const Contact &newContact);
    void remove(const QString &phoneNumber);

    Contact search(const QString &name);
};

#endif // LIST_H
