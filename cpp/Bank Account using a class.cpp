#include <iostream>
#include <string>
using namespace std;

class Bank {
private:
    int accNum;
    string name;
    double balance;

public:
    Bank(int accno, string accname, double bal) {
        accNum = accno;
        name = accname;
        balance = bal;
    }

    string deposit(double amt) {
        string msg = "";
        if (amt > 0) {
            balance += amt;
            msg = "Deposited\n";
        } else {
            msg = "Not permitted to deposit\n";
        }
        msg += "Current Balance: " + std::to_string(balance);
        return msg;
    }

    string withdraw(double amt) {
        string msg = "";
        if (amt <= balance && amt > 0) {
            balance -= amt;
            msg = "Withdrawal successful\n";
        } else {
            msg = "Insufficient balance\n";
        }
        msg += "Current Balance after withdrawal: " + std::to_string(balance);
        return msg;
    }

    string dispBalance() {
        return "ACC ID: " + std::to_string(accNum) + "\n" +
               "ACC Name: " + name + "\n" +
               "ACC Balance: " + std::to_string(balance) + "\n";
    }
};

int main() {
    Bank bank(123, "Swathi", 60000.0);

    cout << "ACCOUNT DETAILS\n" << bank.dispBalance() << "\n";
    cout << "DEPOSITING\n" << bank.deposit(12000.0) << "\n";
    cout << "WITHDRAW\n" << bank.withdraw(2000.0) << "\n";

    return 0;
}
