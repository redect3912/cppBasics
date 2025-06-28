#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    // vector <int> test_scores {98,34};

    // cout << "The first score at index 0: " << test_scores[0] << endl; //array syntax
    // cout << "The second score at index 1: " << test_scores.at(1) << endl; //vector syntax

    // cout << "What do you want the score at index 0 to be?: ";
    // cin >> test_scores.at(0); //assing user input at index 0

    // test_scores.at(1) = 90;

    // cout << "The first score at index 0 is now: " << test_scores.at(0) << endl;
    // cout << "The second score at index 1 is now: " << test_scores.at(1) << endl;

    // cout << "The vector is still size 2, but it can scale when we add another element." << endl;
    // cout << "We use \"test_scores.push_back(80)\" for that" << endl;
    // test_scores.push_back(80);

    // cout << "There are now " << test_scores.size() << " elements in the vector, the third of which is at index 2 and has value " << test_scores.at(2) << endl;


    //cin >> test_scores.at(3); checks for bounds, out of range gives error message
    

    vector <int> testScores = {45,65,83,27};

    cout << "Enter a test score to add to the vector: ";

    int scoreToAdd = 0;
    cin >> scoreToAdd;

    testScores.push_back(scoreToAdd); //adds integer scoreToAdd to end of vector

    cout << "The test scores are now: " << endl;

    cout << testScores.at(0) << endl;
    cout << testScores.at(1) << endl;
    cout << testScores.at(2) << endl;
    cout << testScores.at(3) << endl;
    cout << testScores.at(4) << endl;
    
    cout << "There are now " << testScores.size() << " scores in the vector" << endl;
    return 0;
}
