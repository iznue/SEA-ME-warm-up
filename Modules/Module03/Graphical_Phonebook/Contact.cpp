#include "Contact.h"

Contact::Contact() : name("default"), phone_n("default"), email("default"){}
Contact::Contact(const QString &name, const QString &phone_n, const QString &email) : name(name), phone_n(phone_n), email(email) {}

QString Contact::access_n() const{
    return name;
}

QString Contact::access_pn() const{
    return phone_n;
}

QString Contact::access_e() const{
    return email;
}

void Contact::modify_n(const QString &n){
    this->name = n;
}

void Contact::modify_pn(const QString &pn){
    this->phone_n = pn;
}

void Contact::modify_e(const QString &e){
    this->email = e;
}
