#include <iostream>
#include <string>
using namespace std;

int main() {

    string name, country, gender, voterID;
    int age, choice;

    cout << "======================================" << endl;
    cout << "     SMART VOTER ELIGIBILITY SYSTEM" << endl;
    cout << "======================================" << endl;

    do {

        cout << "\nEnter Name: ";
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();

        cout << "Enter Gender: ";
        getline(cin, gender);

        cout << "Enter Country: ";
        getline(cin, country);

        cout << "Enter Voter ID: ";
        getline(cin, voterID);

        cout << "\n========== VOTER DETAILS ==========" << endl;
        cout << "Name      : " << name << endl;
        cout << "Age       : " << age << endl;
        cout << "Gender    : " << gender << endl;
        cout << "Country   : " << country << endl;
        cout << "Voter ID  : " << voterID << endl;

        cout << "\n========== RESULT ==========" << endl;

        if(age >= 18) {
            cout << "Status : ELIGIBLE TO VOTE" << endl;
        }
        else {
            cout << "Status : NOT ELIGIBLE TO VOTE" << endl;
            cout << "You can vote after "
                 << 18 - age << " year(s)." << endl;
        }

        cout << "\nDo you want to continue?" << endl;
        cout << "1. Yes" << endl;
        cout << "2. No" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

    } while(choice == 1);

    cout << "\nThank You!" << endl;

    return 0;
}