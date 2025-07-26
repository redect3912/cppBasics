// Section 9
// Nested Loops - Histogram

#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int numItems{};

    cout << "How many data points do you have?: ";
    cin >> numItems;

    vector <int> data {};

    for (int i{0}; i < numItems; ++i) {
        int dataItem{};
        cout << "Enter data item " << i << ": ";
        cin >> dataItem;
        data.push_back(dataItem);
    }

    cout <<"\nDisplaying Histogram" << endl;

    for (int value: data) {
        for (int i{0}; i < value; ++i) {
            if (i % 5 == 0) {
                cout << "_";
            } else {
                cout << "-";
            }
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}

