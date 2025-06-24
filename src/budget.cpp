#include <iostream>

/****************************************************************
 * 
 * Program let's user calculate their income and expenses
 * 
 ****************************************************************/

using namespace std;

int main () {
    double income = 0, rent = 0, groceries = 0, invest = 0, clothes = 0, subscriptions = 0, healthcare = 0, savings = 0, sports = 0, other = 0;

    cout << "You can enter your monthly income and expenses here to get a concise overview" << endl;
    cout << "What is your income?: ";
    cin >> income;

    cout << "What is do you spent on rent?: ";
    cin >> rent;

    cout << "What is do you spent on groceries?: ";
    cin >> groceries;

    cout << "How much do you invest?: ";
    cin >> invest;

    cout << "What is do you spent on clothes?: ";
    cin >> clothes;

    cout << "What is do you spent on subscriptions: ";
    cin >> subscriptions;

    cout << "What is do you spent on healthcare?: ";
    cin >> healthcare;

    cout << "How much do you save?: ";
    cin >> savings;

    cout << "What do you spent on sports?: ";
    cin >> sports;

    cout << "What is do you spent on other things?: ";
    cin >> other;

    double expenses = rent + groceries + invest + clothes + subscriptions + healthcare + savings + sports + other;
    double balance = income - expenses;
    cout << "Your total income is " << income << " and your total expenses are " << expenses << " which gives a balance of " << balance << endl;
    return 0;
}
