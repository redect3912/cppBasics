#include <iostream>

using namespace std;

int main() {

	int cents{}, euros{}, fiftyCents{}, twentyCents{}, tenCents{}, fiveCents{};

	cout << "Please enter the number of cents change: ";
	cin >> cents;

	euros = cents / 100;
	fiftyCents = (cents - (euros * 100)) / 50;
	twentyCents = (cents - (euros * 100 + fiftyCents * 50)) / 20;
	tenCents = (cents - (euros * 100 + fiftyCents * 50 + twentyCents * 20)) / 10;
	fiveCents = (cents - (euros * 100 + fiftyCents * 50 + twentyCents * 20 + tenCents * 10)) / 5;

	cout << "You can provide this change as follows" << endl;
	cout << "Euros: " << euros << endl;
	cout << "Fifty cents: " << fiftyCents << endl;
	cout << "Twenty cents: " << twentyCents << endl;
	cout << "Ten cents: " << tenCents << endl;
	cout << "Five cents: " << fiveCents << endl;

	cout << endl;
    return 0;
}


