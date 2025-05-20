#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
// #define int long long
#define double int
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/

signed main(void) {
    pair<double, double> a, b, c, d;
    cin >> a.first >> a. second >> b.first >> b.second >> c.first >> c.second >> d.first >> d.second;

    double area_a = abs(a.first-b.first) * abs(a.second-b.second), area_b = abs(c.first-d.first) * abs(c.second-d.second);

    double w = max(0, min(b.first, d.first) - max(a.first, c.first));
    double h = max(0, min(a.second, c.second) - max(b.second, d.second)); 
    cout << (area_a + area_b) - (w*h) << '\n';
}