#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/

unsigned int arr[1000][1000];

signed main(void) {

    for (int i=0; i < 400; ++i) {
        arr[i][0] = 1;
    }

    for (int i=1; i < 400; ++i) {
        for (int j=1; j < 400; ++j) {
            arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
        }
    }

    // for (int i=0; i < 100; ++i) {
    //     for (int j=0; j < 100; ++j) {
    //         cout << arr[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }

    int a, b;
    while (cin >> a >> b) {
        if (a < b ) cout << "error\n";
        else {
            cout << arr[a][b] << '\n';
        }
    }
}