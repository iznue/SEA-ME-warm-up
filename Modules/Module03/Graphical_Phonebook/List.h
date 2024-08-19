#ifndef LIST_H
#define LIST_H

#include "Contact.h"

#include <QVector>

class List {
    QVector<Contact> contacts;

public:
    QVector<Contact> all_contacts() const;

    // check that the corresponding phone number exists
    int exist_phone(const QString &phone_n);
    // verify the phone book is not empty (for exception handling)
    int empty_list();

    // just print present contact list
    void test_view();

    void add(const Contact &newContact);
    void remove(const QString &phoneNumber);
    void saveFile(const QString &filename);
    void loadFile(const QString &filename);

    Contact search(const QString &name);
};

#endif // LIST_H
