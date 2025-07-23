#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance;

public:
    BankAccount()
    {
        balance = 0.0;
    }

    BankAccount(double initialAmount)
    {
        balance = initialAmount;
    }

    void updateBalance(double deposit, double withdrawal)
    {
        balance += deposit;
        balance -= withdrawal;
    }

    void showBalance() const
    {
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    double initialAmount, deposit, withdrawal;

    cout << "Initial balance: ";
    cin >> initialAmount;

    cout << "Deposit amount: ";
    cin >> deposit;

    cout << "Withdraw amount: ";
    cin >> withdrawal;

    BankAccount account(initialAmount);
    account.updateBalance(deposit, withdrawal);
    account.showBalance();

    return 0;
}
