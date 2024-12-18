#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/






signed main(void) {
    int n, m;
    cin >> n;
    for (int cnt=0; cnt < n; ++cnt) {
        cin >> m;
        if (m == 1) {
            cout << m << '\n';
            continue;
        }


        int left=0, right=m, mid;



        // if (m =)
        while (left < right) {
            // mid = (left+right)/2;
            mid = left + (right - left) /2;

            if (mid <= m / mid) {
                left = mid+1;
            }
            else {
                right = mid;
            }

        }

        left = left - 1;

        if (left*left != m) {
            cout << 0 << '\n';
        }
        else {
            cout << left << '\n';
            
        }
    }
}