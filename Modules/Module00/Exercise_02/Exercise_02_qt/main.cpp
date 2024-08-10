#include <QCoreApplication>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    // Exception if the number of arguments doesn't match what user entered
    if (argc != 3) {
        cout << "Invalid number of arguments" << endl;
        return 1;
    }

    string command = argv[1];
    string strings = argv[2];

    // Using transform function to switch characters
    if (command == "up") {
        transform(strings.begin(), strings.end(), strings.begin(), ::toupper);
    } else if (command == "down") {
        transform(strings.begin(), strings.end(), strings.begin(), ::tolower);
    } else {
        cout << "Invalid command argument, Use 'up' or 'down'" << endl;
        return 1;
    }

    cout << strings << endl;

    return 0;
}
