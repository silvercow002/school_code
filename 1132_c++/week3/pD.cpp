#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/

namespace CompanyA {
    void _print() {
        cout << "Welcome to  Company A!\n";
    }
}

namespace CompanyB {
    void _print() {
        cout << "Welcome to Company B!\n";
    }
}


signed main(void) {
    char c;
    cout << "Enter company choice (A or B):\n";
    cin >> c;

    if (c == 'A') {
        CompanyA::_print();
    }
    else {
        CompanyB::_print();
    }

    int t;
    cin >> t;
}