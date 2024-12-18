#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/


int n, m;
vector<int> arr;

int feasible(int v) {
    int sum, ptr, i;
    for (i=0, ptr=0; i < m && ptr < n; ++i) {
        sum = 0;
        while ((ptr<n) && (sum+arr[ptr] <= v)) {
            sum = sum + arr[ptr];
            ptr++;
        }
    }
    return ptr == n;
}

signed main(void) {
    while (cin >> n >> m) {
        arr.clear();
        arr.resize(n);

        int max = -1, all=0;
        for (auto &it:arr) {
            cin >> it;
            all += it;
            if (max < it) {
                max = it;
            }   
        }

        int left = max, right = all, mid;
        while (left < right) {
            mid = (left+right)/2;
            if (feasible(mid)) {
                right = mid;
            } 
            else {
                left = mid+1;
            }
        }

        cout << left << '\n';




    }
}