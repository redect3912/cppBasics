#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> values {1,2,-1,3,-99,7,8,9};

    bool valueFound {false};
    const int desiredValue = -99;
    int i{0};
    for(i; i < values.size(); ++i) {
        if (values[i] == desiredValue) {
            valueFound = true;
            break;
        }
        else if (values[i] < 0) {
            continue;
        }
        cout << "Valid data at index " << i << " : " << values[i] << endl;
    }
    if (valueFound) {
        cout << "Desired value found: " << desiredValue << " at index " << i << endl;
    }
}