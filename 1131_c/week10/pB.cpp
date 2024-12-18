#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
// #define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/

// PRNG by LCG
static int state = 0;
void _set(int seed) {
    state = seed;
}
int next() {
    state = (state * 0x343FD + 0x269EC3) & 0x7FFFFFFF;
    return state >> 15;
}





signed main(void) {
    int n, m, tmp;
    while (cin >> n >> m) {
        _set(m);
        vector<int> data, arr(65535);
        int max = -1;
        for (int i=0; i < n; ++i) {
            tmp = next();

            if (arr[tmp] == 0) {
                data.push_back(tmp);
            }
            if (max <  tmp) max = tmp;
            arr[tmp]++;
        }

        sort(data.begin(), data.end());
        // for (auto &it:data) cout << it << ' ' << arr[it] << '\n';
        long long tmp = 0;
        for (int i=0; i < data.size(); ++i) {
            if (tmp <= n/2) {
                tmp += arr[data[i]];
            }
            else {
                break;
            }
        }
        cout << data[tmp];
        // cout << [data.size()/2];
        // cout << data[data.size()/2];

    }



}