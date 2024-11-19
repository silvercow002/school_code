#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/

int a, b;

signed main(void) {
    while (cin >> a) {
        if (!a) return 0;

        int n = 0, b = 0;
        while (b <= a) {
            b += ++n;
        }
        cout << b-a << ' ' << n << '\n';
    }
}