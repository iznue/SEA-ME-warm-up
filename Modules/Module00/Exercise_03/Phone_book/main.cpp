#include <QCoreApplication>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

class Contents {
public:
    string name;
    string phone_n;
    string nick_n;
    bool bookmarked;

    Contents() : name{'N'}, phone_n{'N'}, nick_n{'N'} {}
    Contents(string n, string pn, string nn) : name(n), phone_n(pn), nick_n(nn), bookmarked(false){}
};

class Phonebook{
    vector<Contents> p_content;
public:
    int exist_phone_num(const string &phone_n){
        for (const auto& exist : p_content){
            if (exist.phone_n == phone_n){
                cout << "Already exist phone number. Please add other contact" << endl;
                return -1;
            }
        }
    }

    int empty_phonebook(){
        if (p_content.empty()){
            cout << "Empty Phone list. Please add contact" << endl;
            return -1;
        }
    }

    void add_phone(const string &name, const string &phone_n, const string &nick_n){
        if (exist_phone_num(phone_n) == -1) return;
        Contents content{name, phone_n, nick_n};
        p_content.push_back(content);
//        cout << p_content[0].name << endl;
    }

    void test_print() const{
        for (const auto& test : p_content){
            cout << test.name << " " << test.phone_n << " " << test.nick_n << endl;
        }
    }

    void search_phone(){
        if (empty_phonebook() == -1) return;
        for (size_t i=0; i<p_content.size(); i++){
            cout << "(" << i << ") " << p_content[i].name << " " << p_content[i].nick_n << endl;
        }
        int c_idx;
        string b_answer;

        cout << "Choose index number to view details of the contact" << endl;
        cin >> c_idx;

        if (c_idx >= 0 && p_content.size() > c_idx){
            cout << "Phone number : " << p_content[c_idx].phone_n << endl;

            cout << "Do you want to bookmark this phone number? (y / n) : " << endl;
            cin >> b_answer;
            if (b_answer == "y" || b_answer == "Y"){
                p_content[c_idx].bookmarked = true;
                cout << "Success to add this phone number in the bookmark list" << endl;
            }
            else if (b_answer == "n" || b_answer == "N") return;
            else cout << "Invalid command. Please choose (y / n)" << endl;
        }
        else cout << "Invalid number. Please choose correct index" << endl;
    }

    void remove_phone(){
        if (empty_phonebook() == -1) return;
        for (size_t i=0; i<p_content.size(); i++){
            cout << "(" << i << ") " << p_content[i].name << " " << p_content[i].nick_n << endl;
        }
        int r_idx;

        cout << "Choose index number to remove contact" << endl;
        cin >> r_idx;

        if (r_idx >= 0 && p_content.size() > r_idx){
            p_content.erase(p_content.begin() + r_idx);
            cout << "Success to remove chosen contact" << endl;
        } else cout << "Invalid number. Please choose correct index" << endl;
    }

    void bookmark_phone(){
        if (empty_phonebook() == -1) return;
        bool marked = false;
        cout << "Bookmarked list" << endl;
        for (const auto& b_list : p_content){
            if (b_list.bookmarked){
                cout << b_list.name << " " << b_list.phone_n << " " << b_list.nick_n << endl;
                marked = true;
            }
        }
        if (marked != true) cout << "No contact has been bookmarked" << endl;
    }
};

//***************************************************************************************************************************
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//    vector<Contents> p_content;
//    Contents cont{name, phone_n, nick_n};
//    p_content.push_back(cont);

    Phonebook phonebook;
    while(true){
        string command;
        cout << "Use Commands : ADD, SEARCH, REMOVE, BOOKMARK, EXIT" << endl;
        cin >> command;
        if (command == "ADD"){
            string name, phone_n, nick_n;
            cout << "Name : ";
            cin >> name;
            cout << "Phone number : ";
            cin >> phone_n;
            cout << "Nickname : ";
            cin >> nick_n;
            phonebook.add_phone(name, phone_n, nick_n);
        }
        else if (command == "SEARCH") phonebook.search_phone();
        else if (command == "REMOVE") phonebook.remove_phone();
        else if (command == "BOOKMARK") phonebook.bookmark_phone();
        else if (command == "EXIT") break;
        else {
            cout << "Unknown command. You can use commands like [ADD, SEARCH, REMOVE, BOOKMARK, EXIT]" << endl;
        }

//        phonebook.test_print();
    }
//    return a.exec();
    return 0;
}
