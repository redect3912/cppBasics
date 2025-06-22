#include <iostream>

using namespace std;

int main() {
    cout << "Enter a number between 1 and 100: ";
    int nr = 0;

    if (!(cin >> nr)) {
        cout << "You have not entered a number, please try again." << endl;
    }
    else if (1 <= nr && nr <= 100) {
        cout << "Your favourite number is " << nr << "." << endl;
    }
    else {
        cout << "You didn't enter a number between 1 and 100, please try again." << endl;
    }

    return 0;
}