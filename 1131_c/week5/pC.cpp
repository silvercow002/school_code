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
    cin >> n;
    for (int i=0; i < n; ++i) {
        int m;
        cin >> m;
        vector<int> a(m);
        set<int> b;
        for (auto &it:a) {
            cin >> it;
            b.insert(it);
        }
        sort(a.begin(), a.end());
        int ans=0, avg=a[a.size()/2];
        for (auto &it:a) {
            ans += abs(it-avg);
        }

        cout << ans << '\n';
    }
}