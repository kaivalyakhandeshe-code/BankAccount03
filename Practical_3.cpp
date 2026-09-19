#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    int accountNo;
    string holderName;
    float balance;

public:

    // Default Constructor
    BankAccount()
    {
        accountNo = 0;
        holderName = "Not Assigned";
        balance = 0;
    }

    // Parameterized Constructor
    BankAccount(int accNo, string name, float amount)
    {
        accountNo = accNo;
        holderName = name;
        balance = amount;
    }

    // Display account details
    void display()
    {
        cout << "Account Number : " << accountNo << endl;
        cout << "Account Holder : " << holderName << endl;
        cout << "Balance        : " << balance << endl;
    }

    // Overloading + operator
    BankAccount operator+(BankAccount b)
    {
        BankAccount result;

        result.balance = balance + b.balance;

        return result;
    }
};

int main()
{
    int accNo1, accNo2;
    string name1, name2;
    float balance1, balance2;

    cout << "BANK ACCOUNT BALANCE ADDITION" << endl;
    cout << "-----------------------------" << endl;

    cout << "\nEnter details of first account:" << endl;

    cout << "Account Number: ";
    cin >> accNo1;

    cout << "Account Holder Name: ";
    cin >> name1;

    cout << "Balance: ";
    cin >> balance1;

    cout << "\nEnter details of second account:" << endl;

    cout << "Account Number: ";
    cin >> accNo2;

    cout << "Account Holder Name: ";
    cin >> name2;

    cout << "Balance: ";
    cin >> balance2;

    // Objects using parameterized constructor
    BankAccount account1(accNo1, name1, balance1);
    BankAccount account2(accNo2, name2, balance2);

    // Object using default constructor
    BankAccount total;

    // Using overloaded + operator
    total = account1 + account2;

    cout << "\n--- First Account ---" << endl;
    account1.display();

    cout << "\n--- Second Account ---" << endl;
    account2.display();

    cout << "\n--- Combined Balance ---" << endl;
    total.display();

    return 0;
}
