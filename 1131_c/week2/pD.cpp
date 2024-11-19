#include<bits/stdc++.h>
using namespace std;

// #define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
// #define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/

signed main(void) {
    int n, a, b;
    // cin >> n;
    while (cin >> a >> b) {
        if (!a && !b) return 0;
        printf("%5d, %5d, %5d, %10.5f\n", a+b, a/b, a%b, (double)a/b);
    }

    // system("pause");
}