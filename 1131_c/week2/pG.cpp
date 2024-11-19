#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/


signed main(void) {
    int in;

    while (std::cin >> in) {
        vector<int> arr;
        arr.push_back(in);
        while (std::cin.peek() != '\n') {
            cin >> in;
            arr.push_back(in);
        }
        
        std::cin.ignore();

        int ans=0;
        for (auto &it:arr) ans = ans + it;
        
        // cout << ans << ' ' << (double)ans/arr.size() << '\n';

        // printf("%5d, %5d, %5d, %10.5f\n", a+b, a/b, a%b, (double)a/b);
        printf("%5d %10.5f\n", ans, (double)ans/arr.size());
        // cout << fixed << setprecision(5);
        // cout << ans << ' ' << (double)ans/arr.size() << '\n'; 
    }


    // system("pause");
}