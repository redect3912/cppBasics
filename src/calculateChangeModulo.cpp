#include <iostream>

using namespace std;

int main() {

	int cents{}, euros{}, fiftyCents{}, twentyCents{}, tenCents{}, fiveCents{}, oneCents{};

	cout << "Please enter the number of cents change: ";
	cin >> cents;

	euros = cents / 100;
    cents = cents % 100;

	fiftyCents = cents / 50;
    cents %= 50;

	twentyCents = cents / 20;
    cents %= 20;

	tenCents = cents / 10;
    cents %= 10;

	fiveCents = cents / 5;
    cents %= 5;

    oneCents = cents / 1;

	cout << "You can provide this change as follows" << endl;
	cout << "Euros: " << euros << endl;
	cout << "Fifty cents: " << fiftyCents << endl;
	cout << "Twenty cents: " << twentyCents << endl;
	cout << "Ten cents: " << tenCents << endl;
	cout << "Five cents: " << fiveCents << endl;
    cout << "One cents: " << oneCents << endl;

	cout << endl;
    return 0;
}