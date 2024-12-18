#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/



int c[100][100], cc[100][100];



int ccc(int nn, int kk) {
    cc[nn][kk]++;

    if (cc[nn][kk] > 1) {
        return c[nn][kk];
    }
    else {
        return c[nn][kk] = ccc(nn-1, kk) + ccc(nn-1, kk-1);
    }
}



signed main(void) {
    int n, m, cn, ck;
    while (cin >> n >> m >> cn >> ck) {
        for (int i=0; i < n; ++i) {
            c[i][0] = 1;
            // cc[i][0]++;
            c[i][i] = 1;
            // cc[i][i]++;
        }


        ccc(n, m);
        cout << c[n][m] << ' ' << cc[cn][ck] << '\n';
    }
}