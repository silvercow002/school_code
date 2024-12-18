#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/



signed main(void) {
    int n;
    while (cin >> n) {
        vector<int> arr(n);
        for (auto &it:arr) cin >> it;

        vector<int> brr;
        for (int i=0; i < n; ++i) {
            for (int j=i; j < n; ++j ) {
                brr.push_back(arr[i]+arr[j]);
            }
        }

        sort(brr.begin(), brr.end());

        bool flag = true;
        for (int i=1; i < brr.size(); ++i) {
            if (brr[i-1] == brr[i]) {
                flag = false;
                break;
            }
        }

        if (flag) {
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }


    }
}