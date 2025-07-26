#include <iostream>

using namespace std;

int main() {
    for (int outer{1}; outer <= 2; ++outer) {
        for (int inner{1}; inner <= 3; ++inner) {
            cout << outer << ", " << inner << endl;
        }
    }
    return 0;
}