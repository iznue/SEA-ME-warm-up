#ifndef CONTACT_H
#define CONTACT_H

#include <QString>

class Contact {
    // set member variables
    QString name;
    QString phone_n;
    QString email;

public:
    Contact();
    Contact(const QString &name, const QString &phone_n, const QString &email);

    // member functions to access variables
    QString access_n() const;
    QString access_pn() const;
    QString access_e() const;

    // member functions to modify variables
    void modify_n(const QString &n);
    void modify_pn(const QString &pn);
    void modify_e(const QString &e);
};

#endif // CONTACT_H
