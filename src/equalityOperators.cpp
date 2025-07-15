#include <iostream>

using namespace std;

int main () {
    
    int x = 5, y = 0, z = 0;
    y = x; //assings x value of 5 to y

    bool isXSameAsY = (x == y); //gives 1, true since both 5
    bool isYsameAsZ = (y == z); //gives 0, false, since y=5,z=0

    cout << isXSameAsY << endl;
    cout << isYsameAsZ << endl;

}