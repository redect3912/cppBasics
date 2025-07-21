#include <iostream>

using namespace std;

int main() {

    int score{};
    cout << "Enter the exam score: ";
    cin >> score;

    char letterGrade {};

    if (score >= 0 && score <= 100) {
        if (score >= 90)
            letterGrade = 'A';
        else if (score >= 80)
            letterGrade = 'B';
        else if (score >= 70)
            letterGrade = 'C';
        else if (score >= 60)
            letterGrade = 'D';
        else 
            letterGrade = 'F';
    cout << "The grade is: " << letterGrade << endl;
    } else {
        cout << "Error: invalid number." << endl;
    }
    return 0;
}