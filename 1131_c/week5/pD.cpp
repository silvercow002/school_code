#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/

string layr(int n, int x) {
    string _="", __="";
    for (int i=0; i < 2*n-1; ++i) {
        _ = _ + 'x';
    }
    for (int i=0; i < x-n; ++i) {
        __ = __ + ' ';
    }
    return __ + _ + __;
}

signed main(void) {
    int n;
    cin >> n;

    for (int i=1; i <= n; ++i) {
        string re = "";
        for (int j=n; j >= 1; --j) {
            if (n-i+1 > j) break;
            re = re + layr(i-(n-j), j);
        }
        cout << re << '\n';
    }

}