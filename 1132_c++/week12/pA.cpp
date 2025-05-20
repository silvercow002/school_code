#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
// #define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/


template<class T>
T sum(T* a, T* b) {
    T re;
    for (T* i=a; i <= b; ++i) {
        re += *i;
    }
    return re;
}


signed main(void) {
        int i[3] = {1, 2, 3};
        double d[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
        cout << sum<int>(&i[0], &i[2]) << '\n';
        cout << sum<double>(&d[0], &d[4]) << '\n';


        system("pause");
        return 0;
}