#include <iostream>

using namespace std;

int main() {

    int num{};

    cout << "Enter an integer: ";
    cin >> num;

    // if the statement is true, first option gets output, if false second
    cout << num << " is " << ((num %2 == 0) ? "even": "odd" ) << endl;
    
    int num1{}, num2{};
    cout << "Enter 2 more integers seperated by a space: ";
    cin >> num1 >> num2;

    if (num1 != num2) {
        cout << "Largest: "<< ((num1 > num2) ? num1 : num2) << endl;
        cout << "Smallest: "<< ((num1 < num2) ? num1 : num2) << endl;
    } else {
        cout << "The number are the same" << endl;
    }
    return 0;
}