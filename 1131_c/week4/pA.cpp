#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/


int arr[10000][10000];

signed main(void) {
    int n, a, b;
    cin >> n;
    for (int in=0; in < n; ++in) {
        cin >> a >> b;
        int k;
        for (k=0; !((2*k-1)*(2*k-1) < b && b <= (2*k+1)*(2*k+1)); ++k) {}
        // cout << k << '\n';
        int x = a/2 + k+1, y = a/2 + k+1;
        
        int start = (2*k+1)*(2*k+1);

        // cout << start << ' ' << start-2*k << ' ' << start-2*k-2*k << ' ' << start-2*k-2*k-2*k << ' ' << start-2*k-2*k-2*k-2*k << '\n';

        // cout << x << ' ' << y << '\n';

        if (start-2*k < b && b <= start) {
            y = y - (start-b);
            cout << '(' << x << ',' << y << ')' << '\n';
            continue;
        }


        y = y - 2*k;

        if (start-2*k-2*k < b && b <= start-2*k) {
            x = x - (start-2*k-b);
            cout << '(' << x << ',' << y << ')' << '\n';
            continue;
        }

        x = x - 2*k;

        if (start-2*k-2*k-2*k < b && b <= start-2*k-2*k) {
            y = y + (start-2*k-2*k-b);
            cout << '(' << x << ',' << y << ')' << '\n';
            continue;
        }

        y = y + 2*k; 


        x = x + (start-2*k-2*k-2*k-b);

        cout << '(' << x << ',' << y << ')' << '\n';




    }


    // system("pause");
}