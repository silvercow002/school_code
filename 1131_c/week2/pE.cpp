#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/


#include<regex>


signed main(void) {
    int n;
    string str;
    cin >> n;

    regex reg("[-+]?\\d+(?:\\.\\d+)?");
    smatch sm;
    while (getline(cin, str)) {
        regex_match(str, sm, reg);
        for (int i=0; i < sm.size(); ++i) {
            cout << sm[i];
        }
        cout << '\n';
    }
}