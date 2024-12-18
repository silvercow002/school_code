#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/


signed main(void) {
    int n, m, cnt=0;
    while (cin >> n >> m) {
        if (cnt != 0) cout << '\n';
        if (n == 0 && m == 0) {
            break;
        }
        cnt++;

        string filed[n];
        for (int i=0; i < n; ++i) cin >> filed[i];



        int arr[n][m];
        for (int i=0; i < n; ++i) {
            for (int j=0; j < m; ++j) arr[i][j] = 0;
        }

        for (int i=0; i < n; ++i) {
            for (int j=0; j < m; ++j) {
                if (filed[i][j] == '*') arr[i][j] = -1;

                if (arr[i][j] == -1) {
                    
                    if (i-1 > 0 && j-1 >= 0 && arr[i-1][j-1 != -1]) arr[i-1][j-1]++;
                    if (i-1 > 0 && arr[i-1][j] != -1) arr[i-1][j]++;
                    if (i-1 > 0 && j+1 < m && arr[i-1][j+1 != -1]) arr[i-1][j+1]++;

                    if (i+1 < n && j-1 >= 0 && arr[i+1][j-1] != -1) arr[i+1][j-1]++;
                    if (i+1 < n && arr[i+1][j] != -1) arr[i+1][j]++;
                    if (i+1 < n && j+1 < m && arr[i+1][j+1] != -1) arr[i+1][j+1]++;

                    if (j-1 >= 0 && arr[i][j-1] != -1) arr[i][j-1]++;
                    if (j+1 < m && arr[i][j+1] != -1) arr[i][j+1]++;
                }


            }
        }

        cout << "Field #" << cnt << ":\n";
        for (int i=0; i < n; ++i) {
            for (int j=0; j < m; ++j) {
                // cout << arr[i][j] << ' ';
                if (arr[i][j] == -1) {
                    cout << '*';
                }
                else {
                    cout << arr[i][j];
                }
            }
            cout << '\n';
        }

    }
    // STOP;
}