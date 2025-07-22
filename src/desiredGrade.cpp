#include <iostream>

using namespace std;

int main () {
    int desiredGrade{}, totalQuestions{}, examGrade{}, correctQuestions;
    // examGrade = (correctQuestions / totalQuestions) * 9  + 1;

    

    cout << "Enter the grade you want to get on the exam: ";
    cin >> examGrade;

    totalQuestions = 25;
    correctQuestions =  (((examGrade - 1) * totalQuestions)) / 9 ;

    switch(examGrade) {
        case 10: 
            cout << "You need to get " << correctQuestions << " correct questions to get a " << examGrade << endl;
            break;
        case 9: 
            cout << "You need to get " << correctQuestions << " correct questions to get a " << examGrade << endl;
            break;
        case 8: 
            cout << "You need to get " << correctQuestions << " correct questions to get a " << examGrade << endl;
            break;
        case 7: 
            cout << "You need to get " << correctQuestions << " correct questions to get a " << examGrade << endl;
            break;
        case 6: 
            cout << "You need to get " << correctQuestions << " correct questions to get a " << examGrade << endl;
            break;
        default: 
            cout << "You will have to retake this course if you actually get a " << examGrade << endl;
    }
    return 0;
}