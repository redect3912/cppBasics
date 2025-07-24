#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector <int> testScores {34,54,65,23,67,36,98,35,67,55,75,83,23,88,44,34,26,93,44,100,35,85,74,66,53};

    int searchValue{};
    cout << "What test value are you looking for?: ";
    cin >> searchValue;

    int count{0};
    while (count < testScores.size() && testScores[count] != searchValue) {
        ++count;
    }

    cout << "The test value " << searchValue << " is at index " << count << endl;

    return 0;
}