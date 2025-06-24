#include <iostream>

using namespace std;

 int main () {
    int priceSmall {25}, priceBig {35};
    float taxRate {0.06f};

    cout << "Estimate for carpet cleaning service" << endl;

    int nrSmall{0}, nrBig{0};

    cout << "How many small rooms do you want cleaned? (up to 20m2): ";
    cin >> nrSmall;

    cout << "How many big rooms do you want cleaned?: ";
    cin >> nrBig;

    const float totalNoTax = nrSmall * priceSmall + nrBig * priceBig;
    const float tax = totalNoTax * taxRate;
    const float total = totalNoTax + tax;

    cout << "*********************************************************************************************" << endl;
    cout << "The price for a small room is $" << priceSmall << " and the price for a big room is $" << priceBig << "." << endl;
    cout << "You have selected " << nrSmall << " small rooms and " << nrBig << " big rooms." << endl;
    cout << "The cost is $" << totalNoTax << " and the tax amount is $" << tax << "." << endl;
    cout << "So the total estimated cost including tax is $ " << total << "." << endl;
    cout << "This estimate is valid for 30 days." << endl;
    cout << "*********************************************************************************************" << endl;

    return 0;
 }