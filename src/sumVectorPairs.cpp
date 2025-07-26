/* calculate total of all pairs of a user entered set */
#include <iostream>
#include <vector>

using namespace std;
int main() {

    vector <int> vec {};
    
    cout << "Enter how many items you want to add to the set?: ";

    int vectorSize{};
    cin >> vectorSize;

    int pairs = vectorSize* (vectorSize-1) / 2;

    cout << "Your vector is length " << vectorSize << " and will have " << pairs << " pairs" << endl;

    for (int i{0}; i < vectorSize; ++i) {
        int userValue{};
        cout << "Enter value " << i << ": ";
        cin >> userValue;
        vec.push_back(userValue);
    }

    int elementCounter{};
    cout << "Your vector of size " << vectorSize << ": " << "{";
    for (int i{0}; i < vectorSize; ++i) {
        ++elementCounter;
        cout << vec[i];
        if (elementCounter < vectorSize) {
            cout << ", ";
        }
    }
    cout << "}" << endl
         << "Now we will calculate the sum of all unique pairs:" << endl;
    
    
    int pairCounter {};
    int result {};
    
    for (int i{}; i < vectorSize; ++i) {
        for (int j{i+1}; j < vectorSize; ++j) {
                result += vec[i] * vec[j];
                cout << "(" << vec[i] << "*" << vec[j] << ")";
                ++pairCounter;
                if (pairCounter < pairs) {
                    cout << " + ";
                }
        }
    }
    cout << " = " << result;
    return 0;
}