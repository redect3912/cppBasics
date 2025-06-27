#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector <int> test_scores {98,34};

    cout << "The first score at index 0: " << test_scores[0] << endl; //array syntax
    cout << "The second score at index 1: " << test_scores.at(1) << endl; //vector syntax

    cout << "What do you want the score at index 0 to be?: ";
    cin >> test_scores.at(0); //assing user input at index 0

    test_scores.at(1) = 90;

    cout << "The first score at index 0 is now: " << test_scores.at(0) << endl;
    cout << "The second score at index 1 is now: " << test_scores.at(1) << endl;

    cout << "The vector is still size 2, but it can scale when we add another element." << endl;
    cout << "We use \"test_scores.push_back(80)\" for that" << endl;
    test_scores.push_back(80);

    cout << "there is now a third element which is at index 2 and has value " << test_scores.at(2) << endl;


    return 0;
}
