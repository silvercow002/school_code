#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/
int size;


template<class T>
int horner(T poly[], int n, T x) {
    if (n == 1) {
        return poly[0];
    }
    else {
        return poly[n-1] + x*horner(poly, n-1, x);
    }

}


template<class T>
int horner_(T poly[], int n, T x) {
    if (n == size-1) {
        return poly[n];
    }
    return poly[n] + x * horner_(poly, n+1, x); 
}




signed main(void) {

    double x;
    cin >> size >> x;
    double* poly = new double[size];
    for (int i=0; i < size; i++) {
        cin >> poly[i];
    }
    cout << "Value of polynomial is "
        << horner_<double>(poly, 0, x) << '\n';
    delete poly;
    return 0;
}