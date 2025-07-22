/*  
    Shipping cost calculator (cm)  
    Base cost  €2.50  
    +10 %  for volume 1501–7500 cm³  
    +25 %  for volume >7500 cm³  
    maxHeight = maxWidth = maxHeight = 25 (cm)
*/


#include <iostream>

using namespace std;

int main() {

    int length{}, width{}, height{}; // parameters user inputs
    cout << "Please enter the length, width and height of your package in cm with spaces: ";
    cin >> length >> width >> height;

    const int maxDimension{25}; // all inputs max 25 
    double packageCost{};
    const int tier0Max{1500}, tier1Max{7500}; // tier 0 (0-1500) no surcharge, tier 1 (1501-7500) 10%+, >7500 25%+ 
    const double baseCost{2.50}; // min cost 

    if (length <= maxDimension && width <= maxDimension && height <= maxDimension) {
        int packageVolume{}; 
        packageVolume = length * width * height;

        if (packageVolume >= 0 && packageVolume <= tier0Max) {
            packageCost = baseCost;
        }
        else if (packageVolume > tier0Max && packageVolume <= tier1Max) {
            packageCost = baseCost * 1.1;
        }
        else {
            packageCost = baseCost * 1.25;
        }
        cout << "Your shipping cost will be EUR: " << packageCost << endl;
    }
    else {
        cout << "We cannot ship the package with entered dimension, please note the max dimension for width, length and height is 25cm." << endl;
    }
    return 0;
}
