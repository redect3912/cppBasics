#include <iostream>
#include <vector>

using namespace std;

int main() {

    
    // for (int i{1}; i<= 10; ++i) { //initialize i inside loop > i only visible in side loop
    //     cout << i << endl;
    // }
    

    // int scores[] {93,85,23,45,55};

    // for (int i {0}; i < 5; ++i) { // with loops and arrays the condition should be less than size of array or less than or equal to size array - 1 
    //     cout << scores[i] << endl;
    // }

    // for (int i {10}; i > 0; --i) {
    //     cout << i << endl;
    // }
    // cout << " after loop ";

    // for (int i{10}; i <= 100; i+=10) {
    //     if (i%15 == 0) {
    //         cout << i << endl;
    //     }
    // }

    // for (int i{1}, j{5}; i<=5; ++i, ++j) {
    //     cout << i << " + " << j << " = " << i + j << endl;
    // }

    // for(int i {1}; i <= 100; ++i) {
    //     cout << i;
    //     if (i%10 == 0) {
    //         cout << endl;
    //     } else {
    //         cout << " ";
    //     }
    // }

    // vector <int> nums {10,20,30,40,50};

    // for (unsigned i{0}; i < nums.size(); ++i) {
    //     cout << nums[i] << endl;
    // }

    for (int i {0}; i <= 1000; ++i) {
        if (i % 100 == 0) {
            cout << i << endl;
        }
        else if (i % 7 == 0) {
            cout << i;
        }
        else {
            cout << ".";
        }
    }


    return 0;

}