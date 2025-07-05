#include <iostream>

/****************************************************************
 * 
 * Program let's user calculate their income and expenses
 * 
 ****************************************************************/

using namespace std;

int main () {

    int monthlyIncome = 0;
    cout << "What is your monthly income?: ";
    cin >> monthlyIncome;

    cout << "Please fill in your monthly expenses in the order of rent, investing, savings, groceries, healthcare, sports, clothes, subscriptions and other: ";
    double expenses [9] = {0};
    cin >> expenses[0] >> expenses[1] >> expenses[2] >> expenses[3] >> expenses[4] >> expenses[5] >> expenses[6] >> expenses[7] >> expenses[8];

    double monthlyExpenses = expenses[0] + expenses[1] + expenses[2] + expenses[3] + expenses[4] + expenses[5] + expenses[6] + expenses[7] + expenses[8];

    double monthlyBalance = monthlyIncome - monthlyExpenses;
    double yearlyBalance = monthlyBalance * 12;

    double yearlyIncome = monthlyIncome * 12;
    double yearlyExpenses = monthlyExpenses * 12;

    cout << "Your monthly income is " << monthlyIncome << " and your monthly expenses are " << monthlyExpenses << " which gives a moonthly balance of " << monthlyBalance << endl;
    cout << "Your yearly income is " << yearlyIncome << " and your yearly expenses are " << yearlyExpenses << " which gives a yearly balance of " << yearlyBalance << endl;

    return 0;
}
