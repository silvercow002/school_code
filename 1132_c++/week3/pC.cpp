#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/

class BankAccount {
private:
    double balance;
public:
    BankAccount() {
        cout << "Enter initial Balance: ";
        cin >> balance;
        cout << "Initial Balance: $" << balance << '\n';
    }

    void deposit(double amount) {
        cout << "Depositing $" << amount << "...\n";
        balance += amount;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            cout << "Withcdradwing $" << amount << "...\n";
            balance -= amount;
        }
    }

    void getBalance() {
        cout << "Current Balance: $" << balance << '\n'; 
    }
};


signed main(void) {
    BankAccount obj;
    double tmp;

    cout << "Enter deposit amount: ";
    cin >> tmp; 
    obj.deposit(tmp);
     
    cout << "Enter withdrawal amount: ";
    cin >> tmp;
    obj.withdraw(tmp);

    obj.getBalance();

    cin >> tmp;
}
