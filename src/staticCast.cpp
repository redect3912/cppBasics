// Section 8
// Mixed Type Expressions
/*
    Ask the user to enter 3 integers
    Calculate the sum of the integers then
    calculate the average of the 3 integers.
    
    Display the 3 integers entered
    the sum of the 3 integers and
    the average of the 3 integers.
*/

#include <iostream>

using namespace std;

int main() {

    cout << "Please enter 3 integers with spaces inbetween: ";
    int nr1 = 0, nr2 = 0, nr3 = 0;
    cin >> nr1 >> nr2 >> nr3;

    int sum = 0;
    sum = nr1 + nr2 + nr3;

    double avg = (static_cast<double> (sum)) / 3;

    cout << "You have entered " << nr1 << ", " << nr2 << " and " << nr3 << endl;
    cout << "the sum is " << sum << endl;
    cout << "the average is " << avg << endl;


    return 0;
}

