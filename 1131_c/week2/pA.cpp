#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
// #define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/



signed main(void) {
    double a, b, x, _x, y, _y;
    cin >> a >> b;
    y = (((-2)*b/a) + sqrt((12*b*b/a/a)+32)) /  ((2*b*b/a/a)+8);


    _y = (((-2)*b/a) - sqrt(((12*b*b/a/a)+32))) / ((2*b*b/a/a)+8);


    x = (b*y/a) +1;

    _x = (b*_y/a)+1;


    cout << fixed << setprecision(3);
    if (x >= _x) {
        cout << '(' << x << ',' << y << "), (" << _x << ',' << _y << ")\n";
    }
    else {
        cout << '(' << _x << ',' << _y << "), (" << x << ',' << y << ")\n";
    }

    system("pause");
}