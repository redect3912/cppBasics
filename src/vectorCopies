#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector <int> vector1 = {}; //initializing 2 empty vectors
    vector <int> vector2 = {};

    vector1.push_back(10); 
    vector1.push_back(20);

    vector2.push_back(100);
    vector2.push_back(200);

    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << vector2.size() << endl;

    vector<vector<int>> vector2D; //creating empty 2d vector

    vector2D.push_back(vector1); //add v1,v2 as row 0,1 in 2d vector
    vector2D.push_back(vector2);

    cout << vector2D.at(0).at(0); //print to check if matches v1,v2
    cout << vector2D.at(0).at(1);


    cout << vector2D.at(1).at(0);
    cout << vector2D.at(1).at(1);
  

    vector1.at(0) = 1000; //change v1 at index 0 to 1000

    cout << vector2D.at(0).at(0); // doesnt work still displays old vector1 value because when creating vector2D it created copies of v1,v2 so doesnt change 2D
 return 0;
}
