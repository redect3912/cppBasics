#include <iostream>

using namespace std;

int main() {

    cout << "Please enter an integer: ";
    int num{};
    const int min{10};
    const int max{100};
    cin >> num; 

    if (num >= min) {
        cout << "The number you typed is equal or larger than " << min << endl;
    }

    if (num <= max)
        cout << "The number you entered is equal or smaller than " << max << endl;

    if (num >= min && num <= max) {
        cout << "The number you entered is inclusive between " << min << " and " << max << endl;
        int differenceMax = max - num;
        int differenceMin = num - min;
        cout << "It is " << differenceMax << " removed from " << max << " and " << differenceMin << " removed from " << min << endl;
    }

    if (num == min) {
        cout << "The number you entered is exactly " << min << endl;
    }

    if (num == max) {
        cout << "The number you entered is exactly " << max << endl;
    }

    return 0;
}