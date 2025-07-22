// determine if someone can legally drive a car

#include <iostream>

using namespace std;

int main() {
    bool hasDriversLicence{}, isIntoxicated{};
    int age{};

    cout << "Here you can check if you can drive and on what conditions" << endl
         << "----------------------------------------------------------" << endl;

    cout << "What is your age?: ";
    cin >> age;

    cout << "Do you have a drivers licence? true/false: ";
    cin >> boolalpha >> hasDriversLicence;

    cout << "Are you intoxicated? true/false: ";
    cin >> boolalpha >> isIntoxicated;

    if (age >= 18) {
        if (hasDriversLicence) {
            if (!isIntoxicated) {
                cout << "Yes, you can drive!" << endl;
            }
            else {
                cout << "No, you can't drive, sober up first!" << endl;
            }
        }
        else {
            cout << "No, you can't drive, you have to get a drivers license."<< endl;
        }
    }
    else if (age >= 17) {
        if (hasDriversLicence) {
            if (!isIntoxicated) {
                cout << "Yes you can drive assisted untill you turn 18!" << endl;
            }   
            else {
                cout << "No, you can't drive! Sober up first then you can drive assisted untill you turn 18" << endl;
            }
        }
        else {
            cout << "No, you can't drive, you have to get a drivers license then you can drive assisted untill you turn 18" << endl;
        }
        }
            else {
                cout << "No you can't drive, you must get your drivers license and wait untill you're 17, then you can drive assisted untill you turn 18." << endl;
        }
}