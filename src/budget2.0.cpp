#include <iostream>
#include <vector>

using namespace std;

int main () {

    cout << "What is your income?: ";
    int income{};
    cin >> income;
    cout << "What do you want to budget for each category? Enter your answers with spaces inbetween" << endl
         << "1. Rent/Mortgage" << endl
         << "2. Car" << endl
         << "3. Groceries" << endl
         << "4. Clothes" << endl
         << "5. Investments" << endl
         << "6. Savings" << endl
         << "7. Energy" << endl
         << "8. Misc" << endl;
    
    int rentMortgage{}, car{}, groceries{}, clothes{}, investments{}, savings{}, energy{}, misc{};
    vector <int> budget {};
    
    cout << "Enter your rent/mortgage amount: ";
    cin >> rentMortgage;
    budget.push_back(rentMortgage);

    cout << "Enter car payment: ";
    cin >> car;
    budget.push_back(car);

    cout << "Enter your clothes budget: ";
    cin >> clothes;
    budget.push_back(clothes);

    cout << "Enter your investment budget: ";
    cin >> investments;
    budget.push_back(investments);

    cout << "Enter your savings budget: ";
    cin >> savings;
    budget.push_back(savings);

    cout << "Enter your energy budget: ";
    cin >> energy;
    budget.push_back(energy);

    cout << "Enter your misc amount: ";
    cin >> misc;
    budget.push_back(misc);

    cout << "---------------------------------------" << endl
         << "Your total budget is: ";
    int total{};
    for (int i{0}; i < budget.size(); ++i) {
        if (i < budget.size() - 1) {
            cout << budget[i] << " + ";
            total += budget[i];
        }
        else if (i == budget.size() - 1){
            cout << budget[i];
            total += budget[i];
            cout << " = " << total << endl;
        }
    }
    if (income > total) {
        int surplus = income - total;
        cout << "Your surplus is: " << surplus << endl
             << "---------------------------------------" << endl;
    }
    else {
        int deficit = total - income;
        cout << "Your deficit is: " << deficit << endl
             << "---------------------------------------" << endl;
    }

    cout << "Vector budget: [";
    for (int i{0}; i < budget.size(); ++i) {
        if (i < budget.size() - 1) {
            cout << budget[i] << ", ";
        }
        else {
            cout << budget[i] << "]" << endl;
        }
    }


    bool changeEntries{false};
    do {
        cout << "Do you want to change any entries?: 1/0 ";
        cin >> changeEntries;

    } while (changeEntries == 1);
    
    return 0;
}