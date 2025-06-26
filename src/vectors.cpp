#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector <int> test_scores {98,34,65,32,85};

    cout << "The first score at index 0: " << test_scores[0] << endl; //array syntax
    cout << "The second score at index 1: " << test_scores.at(1) << endl; //vector syntax

    cout << "What do you want the score at index 0 to be?: ";
    cin >> test_scores.at(0); //assing user input at index 0

    test_scores.at(1) = 90;

    cout << "The first score at index 0 is now: " << test_scores.at(0) << endl;
    cout << "The second score at index 1 is now: " << test_scores.at(1) << endl;


    return 0;
}