#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/

signed main(void) {
    double a, b, c, d;
    cin >> a >> b >> c >> d;

    if (fabs(b-0)<1e-10) {
        cout << "NA\n";
    }
    else {
        cout << fixed << setprecision(6);
        cout << -(((a*d)+c)/b) << '\n';
    }


}




    
    // system("pause");
