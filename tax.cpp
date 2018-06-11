#include <iostream>

using namespace std;

int tax (int income, float taxValue)
{
    // INCOME * PERCENTAGE? () DO MATH BELOW AND OUTPUT
    // Getting different value than example but math here is correct
    float answer = (income * taxValue);
    cout << answer << endl;
    return 0;
}

int taxRate (int taxBracket[7])
{
    int income;
    cout << "Enter the taxable income: ";
    cin >> income;

    // Checks if error is received by negative or chars
    if (!cin.fail()) {
        if ((income >= taxBracket[0]) && (income <= taxBracket[1])) {
            tax(income, .10);

        } else if ((income >= taxBracket[1]) && (income <= taxBracket[2])) {
            tax(income, .15);

        } else if ((income >= taxBracket[2]) && (income <= taxBracket[3])) {
            tax(income, .25);

        } else if ((income >= taxBracket[3]) && (income <= taxBracket[4])) {
            tax(income, .28);

        } else if ((income >= taxBracket[4]) && (income <= taxBracket[5])) {
            tax(income, .33);

        } else if ((income >= taxBracket[5]) && (income <= taxBracket[6])) {
            tax(income, .35);

        } else if (income >= taxBracket[6]) {
            tax(income, .396);

        } else {
            cout << "Enter a valid amount (POSITIVE NUMBERS ONLY)" << endl;
        }
    } else {
        cout << "Enter a valid amount (NNUMBERS ONLY)" << endl;
    }
    return income;
}

int main()
{

    int choice;
    // Not adding variations of +1. 0 - 9325, 9326(X)
    int t1[7] = {0,9325,37950,91900,191650,416700,418400};
    int t2[7] = {0,18650,75900,153100,233350,416700,470700};
    int t3[7] = {0,9325,37950,76550,116675,208350,235350};
    int t4[7] = {0,13350,50800,131200,212500,416700,444550};

    cout << "*******************************************\n" << endl;
    cout << "_*_*Welcome to the income tax calulator*_*_\n" << endl;
    cout << "*******************************************\n" << endl;
    cout << "Status # - Current Status" << endl;
    cout << "-------------------------" << endl;
    cout << "0  -   Single filer" << endl;
    cout << "1  -   Married jointly or qualifying widow(er)" << endl;
    cout << "2  -   Married separately" << endl;
    cout << "3  -   Head of household\n" << endl;

    cout << "Please choose a status # from the above table based on your filing status: ";
    cin >> choice;

    switch (choice) {
        // 0 - Single = t1 ....
        case 0: taxRate(t1);
                break;
        case 1: taxRate(t2);
                break;
        case 2: taxRate(t3);
                break;
        case 3: taxRate(t4);
                break;
    }
    return 0;
}
