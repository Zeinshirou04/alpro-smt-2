#include "header.h"

int main() {
    MHS data[4];

    // Static Input
    // data[0].ID = 1;
    // data[0].name = "Alex";
    // data[0].age = 19;
    // data[0].IPK = 2.90;
    // cout << data[0].ID << endl;
    // cout << data[0].name << endl;
    // cout << data[0].age << endl;
    // cout << data[0].IPK << endl;

    // Dynamic Input
    int length, optionNum = 1, id, optionDec, index;

    cout << "Input num of data = ";
    cin >> length;

    data[length];

    for(int i = 0; i < length; i++) {
        data[i].ID = i + 1;
        cout << "Input your name = ";
        getline(cin >> ws, data[i].name);
        cout << "Input your age = ";
        cin >> data[i].age;
        cout << "Input your IPK = ";
        cin >> data[i].IPK;
        cout << "***" << endl;

        // Clear Screen
        // #include <stdlib.h> needed
        system("CLS");
    }

    cout << "ID\t" << "Name\t\t\t" << "Age\t" << "IPK\t" << endl;
    for(int i = 0; i < length; i++) {
        cout << data[i].ID << "\t" << data[i].name << "\t\t" << data[i].age << "\t" << data[i].IPK << "\t" << endl;
    }

    while(optionNum == 1) {
        cout << "Would you update your data (1 = Yes, 0 = No)? ";
        cin >> optionNum;
        if(optionNum == 1) {
            cout << "Input ID = ";
            cin >> id;
            cout << "What would you change (1 = Name, 2 = Age, 3 = IPK)? ";
            cin >> optionDec;
            switch (optionDec) {
                case 1:
                    index = 0;
                    while(data[index].ID == id - 1) {
                        cout << "Input new Name = ";
                        getline(cin >> ws, data[index].name);
                        break;
                    }
                    index++;
                case 2:
                    index = 0;
                    while(data[index].ID == id - 1) {
                        cout << "Input new Age = ";
                        cin >> data[index].age;
                        break;
                    }
                    index++;
                case 3:
                    index = 0;
                    while(data[index].ID == id - 1) {
                        cout << "Input new IPK = ";
                        cin >> data[index].IPK;
                        break;
                    }
                    index++;
                default:
                    cout << "Your option value is not matched with value = " << optionDec << endl;
            }
        }
    }

    cout << "ID\t" << "Name\t\t\t" << "Age\t" << "IPK\t" << endl;
    for(int i = 0; i < length; i++) {
        cout << data[i].ID << "\t" << data[i].name << "\t\t" << data[i].age << "\t" << data[i].IPK << "\t" << endl;
    }

    return 0;
}