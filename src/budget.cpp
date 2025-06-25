#include <iostream>

/****************************************************************
 * 
 * Program let's user calculate their income and expenses
 * 
 ****************************************************************/

using namespace std;

int main () {

    int income = 0;
    cout << "What is your income?: ";
    cin >> income;

    cout << "Please fill in your expenses in the order of rent, investing, savings, groceries, healthcare, sports, clothes, subscriptions and other: ";
    double expenses [9] = {0};
    cin >> expenses[0] >> expenses[1] >> expenses[2] >> expenses[3] >> expenses[4] >> expenses[5] >> expenses[6] >> expenses[7] >> expenses[8];

    double totalExpenses = expenses[0] + expenses[1] + expenses[2] + expenses[3] + expenses[4] + expenses[5] + expenses[6] + expenses[7] + expenses[8];

    double balance = income - totalExpenses;

    cout << "Your total income is " << income << " and your total expenses are " << totalExpenses << " which gives a balance of " << balance << endl;

    return 0;
}
