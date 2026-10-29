
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

class BankAccount {
public:
    int accountNumber;
    string name;
    double balance;

    BankAccount(int acc, string n, double b) {
        accountNumber = acc;
        name = n;
        balance = b;
    }
};

const string FILE_NAME = "accounts.txt";

// Load accounts from file
vector<BankAccount> loadAccounts() {
    vector<BankAccount> accounts;
    ifstream file(FILE_NAME);
    string line;

    while (getline(file, line)) {
        stringstream ss(line);
        string acc, name, bal;

        if (getline(ss, acc, '|') &&
            getline(ss, name, '|') &&
            getline(ss, bal)) {
            try {
                accounts.emplace_back(
                    stoi(acc), name, stod(bal)
                );
            } catch (...) {
                // Skip invalid records
            }
        }
    }

    return accounts;
}

// Save accounts to file
void saveAccounts(const vector<BankAccount>& accounts) {
    ofstream file(FILE_NAME);

    for (const auto& a : accounts) {
        file << a.accountNumber << "|"
             << a.name << "|"
             << fixed << setprecision(2)
             << a.balance << "\n";
    }
}

// Create a new account
void createAccount() {
    vector<BankAccount> accounts = loadAccounts();

    int acc;
    string name;

    cout << "Enter Account Number: ";
    cin >> acc;

    for (const auto& a : accounts) {
        if (a.accountNumber == acc) {
            cout << "Account number already exists!\n";
            return;
        }
    }

    cout << "Enter Customer Name: ";
    getline(cin >> ws, name);

    if (acc <= 0 || name.empty() ||
        name.find('|') != string::npos) {
        cout << "Invalid account details!\n";
        return;
    }

    accounts.emplace_back(acc, name, 0.0);
    saveAccounts(accounts);

    cout << "Account created successfully!\n";
}

// Deposit money
void depositMoney() {
    vector<BankAccount> accounts = loadAccounts();
    int acc;
    double amount;

    cout << "Enter Account Number: ";
    cin >> acc;

    for (auto& a : accounts) {
        if (a.accountNumber == acc) {
            cout << "Enter Deposit Amount: ";
            cin >> amount;

            if (!cin || amount <= 0) {
                cout << "Invalid amount!\n";
                return;
            }

            a.balance += amount;
            saveAccounts(accounts);

            cout << "Deposit successful!\n";
            cout << "Balance: Rs. "
                 << fixed << setprecision(2)
                 << a.balance << "\n";
            return;
        }
    }

    cout << "Account not found!\n";
}

// Withdraw money
void withdrawMoney() {
    vector<BankAccount> accounts = loadAccounts();
    int acc;
    double amount;

    cout << "Enter Account Number: ";
    cin >> acc;

    for (auto& a : accounts) {
        if (a.accountNumber == acc) {
            cout << "Enter Withdrawal Amount: ";
            cin >> amount;

            if (!cin || amount <= 0) {
                cout << "Invalid amount!\n";
                return;
            }

            if (amount > a.balance) {
                cout << "Insufficient balance!\n";
                return;
            }

            a.balance -= amount;
            saveAccounts(accounts);

            cout << "Withdrawal successful!\n";
            cout << "Balance: Rs. "
                 << fixed << setprecision(2)
                 << a.balance << "\n";
            return;
        }
    }

    cout << "Account not found!\n";
}

// Check account balance
void checkBalance() {
    vector<BankAccount> accounts = loadAccounts();
    int acc;

    cout << "Enter Account Number: ";
    cin >> acc;

    for (const auto& a : accounts) {
        if (a.accountNumber == acc) {
            cout << "Customer: " << a.name << "\n";
            cout << "Balance: Rs. "
                 << fixed << setprecision(2)
                 << a.balance << "\n";
            return;
        }
    }

    cout << "Account not found!\n";
}

// Display all accounts
void displayAccounts() {
    vector<BankAccount> accounts = loadAccounts();

    if (accounts.empty()) {
        cout << "No accounts available.\n";
        return;
    }

    cout << "\n--- Bank Account Details ---\n";

    for (const auto& a : accounts) {
        cout << "Account Number: " << a.accountNumber
             << "\nCustomer Name: " << a.name
             << "\nBalance: Rs. "
             << fixed << setprecision(2)
             << a.balance << "\n\n";
    }
}

int main() {
    int choice;

    do {
        cout << "\n===== BANK MANAGEMENT SYSTEM =====\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Check Balance\n";
        cout << "5. Display All Accounts\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";

        if (!(cin >> choice)) {
            cout << "Please enter a valid number.\n";
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        switch (choice) {
            case 1: createAccount(); break;
            case 2: depositMoney(); break;
            case 3: withdrawMoney(); break;
            case 4: checkBalance(); break;
            case 5: displayAccounts(); break;
            case 0: cout << "Thank you for using our bank!\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 0);

    return 0;
}
