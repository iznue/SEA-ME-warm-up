#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char **argv){
    // Exception if the number of arguments doesn't match what user entered
    if (argc != 3){
        cout << "Invalid number of arguments" << endl;
        return 1;
    }

    string command = argv[1];
    string strings = argv[2];

    // using transform function to switch characters 
    if (command == "up")
        transform(strings.begin(), strings.end(), strings.begin(), ::toupper);
    else if (command == "down")
        transform(strings.begin(), strings.end(), strings.begin(), ::tolower);
    else
        cout << "Invalid command argument, Use 'up' or 'down'" << endl;

    cout << strings << endl;
    
    return 0;
}

/*

| Requirements
- Use simple string class
    To convert UPPER CASE
    To convert LOWER CASE
- Use string class’s functions 

| Arguments
- ./convert {command} {string}
    ex) ./convert up I’m the one!
        output: I’M THE ONE!
    ex) ./convert down I’m A SMall man
        output: i’m a small man

| Execution
- g++ -o convert Exercise_02.cpp
- ./convert {command} {string}

*/