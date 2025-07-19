#include <iostream>

using namespace std;

/*
short program to determine whether someone can work as a delivery
driver using bools and logical operators.
*/

int main() {

    int age {};
    bool parentalConsent{};
    bool ssn{};
    bool accidents{};

    cout << "What is your age?: ";
    cin >> age;

    cout << "Do you have parental consent to work? true/false: ";
    cin >> boolalpha >> parentalConsent;

    cout << "Do you have a valid ssn number? true/false: ";
    cin >> boolalpha >> ssn;

    cout << "Have you had any driving accidents? true/false: ";
    cin >> boolalpha >> accidents;

    if ( ((age >= 18) || (age > 15 && parentalConsent)) && (ssn && !accidents) ) {
        cout << "You can work as a delivery driver" << endl;
    }
    else {
        cout << "You can't work as a delivery driver at this time" << endl;
    }

    return 0;

}