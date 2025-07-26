#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<vector<int>> vector2D {
        { 12,  87, -4,  33,  0,  19},
        {102, -55, 88,  41},
        {  7,   8,  9, 10, 11, 12, 13, 14},
        {-9,  22, 23},         
        {314, 159, 265, 358, 979},
        { -1,  -2,  -3 },
        { 42 },
        { 5, 6, 7, 8, -99, 10, 11 }
    };

    bool sentinelFound{};
    int sentinel{-99};

    cout << "Please enter sentinel value: ";
    cin >> sentinel;
    cout << "Valid data points:\n" 
         << "--------------------------------------------------------------" << endl;
    int i{0}, j{0};

    for (i = 0; i < vector2D.size() && !sentinelFound; ++i) {
        for (j = 0; j < vector2D[i].size(); ++j) {
            if (vector2D[i][j] == sentinel) {
                sentinelFound = true;
                cout << "\n" << "--------------------------------------------------------------" << "\n"
                             << "Sentinel " << sentinel << " found at row " << i + 1 << " and column " << j + 1 << "\n";
                break;
            }
            else if (vector2D[i][j] > 0){
                cout << vector2D[i][j] << " ";
            }
        }
        if (!sentinelFound) cout << '\n';
    }

    if (!sentinelFound) {
        cout << "Sentinel not found" << endl;
    }
    return 0;
}