#include <iostream>

using namespace std;

int main() {

    char selection{};

    do {
        cout << "\n-----------------------" << endl;
        cout << "1. Do this" << endl;
        cout << "2. Do that" << endl;
        cout << "3. Do something else" << endl;
        cout << "Q. Quit" << endl << endl;
        cout << "Enter your selection: ";

        cin >> selection;

        switch(selection) {
            case '1': {
                cout << "You choose 1 - doing this" << endl;
                break;
            }
            case '2': {
                cout << "You choose 2 - doing that" << endl;
                break;
            }
            case '3': {
                cout << "You choose 3 - doing something else" << endl;
                break;
            }
            case 'Q': {
                cout << "You choose Q - quitting" << endl;
                break;
            }
            case 'q': {
                cout << "You choose q - quitting" << endl;
                break;
            }
            default: {
                cout << "Invalid input, try again" << endl;
            }
        }

    } while (selection != 'q' && selection != 'Q');

    return 0;
}   