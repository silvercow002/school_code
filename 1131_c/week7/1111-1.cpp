#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
// #define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/


signed main(void) {
    int n, r;
    cin >> n >> r;
    vector<string> str(r);
    for (auto &it:str) {
        cin >> it;
    }


    // for (auto &it:str) {
    //     cout << it.size() << it << '\n';
    // }


    for (int i=1; i <= n; ++i) {
        int pos = i*2-2;
        for (int j=0; j < r; ++j) {
            if (pos != str[j].size()) {
                if (str[j][pos+1] == '-') {
                    pos = pos + 2;
                    continue;
                }
            }

            if (pos != 0) {
                if (str[j][pos-1] == '-') {
                    pos = pos - 2;
                }
            }

        }

        cout << (pos+2)/2;
        if (i!=n) cout << ' ';
    }
    cout << '\n';


    // system("pause");
}