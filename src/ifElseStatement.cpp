#include <iostream>

using namespace std;

int main() {

    cout << "Please enter student score from 0-100: ";
    int score{}, grade{};
    cin >> score;
    
    if (score >= 55) 
        cout << "You have passed this course." << endl;
    else 
        cout << "You have not passed this course." << endl;

    if (score%10 >= 5 && score >= 55) 
        grade = score / 10 + 1;
    else 
        grade = score / 10;

    cout << "Your final grade is " << grade << endl;
    
    return 0;


}