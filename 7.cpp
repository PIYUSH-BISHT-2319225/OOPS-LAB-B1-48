/*Implement a Program in C++ by defining a class to represent a bank account.
Include the following:
Data Members
● Name of the depositor
● Account number
● Type of account (Saving, Current etc.)
● Balance amount in the account
Member Functions
● To assign initial values
● To deposit an amount
● To withdraw an amount after checking the balance
● To display name and balance
*/
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string depositorName;
    string accountNumber;
    string accountType;
    float balance;

public:
    BankAccount(string name, string accNum, string accType, float initialBalance) {
        depositorName = name;
        accountNumber = accNum;
        accountType = accType;
        balance = initialBalance;
    }

    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited:" << amount << endl;
        } else {
            cout << "Deposit amount must be positive!" << endl;
        }
    }

    void withdraw(float amount) {
        if (amount > 0) {
            if (amount <= balance) {
                balance -= amount;
                cout << "Withdrawn: " << amount << endl;
            } else {
                cout << "Insufficient balance!" << endl;
            }
        } else {
            cout << "Withdrawal amount must be positive!" << endl;
        }
    }

    void displayAccountInfo() const {
        cout << "Account Holder: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    float n,m;
    int z;
    BankAccount myAccount("PIYUSH BISHT", "12AER5J89", "Savings", 1000.00);

    myAccount.displayAccountInfo();
    cout<<"\nEnter the amount to be deposited:"<<endl;
    cin>>m;
    myAccount.deposit(m);
    cout<<"\nEnter the amount to be withdrawn:"<<endl;
    cin>>n;
    myAccount.withdraw(n);
    cout<<"\nAccount Details:"<<endl;

    myAccount.displayAccountInfo();

    return 0;
}

