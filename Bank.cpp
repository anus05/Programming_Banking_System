#include<iostream>
using namespace std;

class BankAccount {
private:
    int account_number;
    float balance;

public:
    void getAccountDetails() {
        cout << "Enter your account number: ";
        cin >> account_number;
        cout << "Enter your initial balance: ";
        cin >> balance;
    }

    void display() {
        cout << "\nAccount Number: " << account_number << endl;
        cout << "Current Balance: " << balance << endl;
    }

    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. New Balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(float amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawal successful. New Balance: " << balance << endl;
        }
    }
};

int main() {
    BankAccount person1;
    int choice;
    float amount;

    person1.getAccountDetails();

    do {
        cout << "\nChoose an action:\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. View Account Info\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                person1.deposit(amount);
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                person1.withdraw(amount);
                break;
            case 3:
                person1.display();
                break;
            case 4:
                cout << "Thank you for using our banking system!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while(choice != 4);

    return 0;
}
