#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
// #define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/

signed main(void) {
    int n;
    cin >> n;
    for (int i=0; i < n; ++i) {
        int a, b;
        char str[100];
        scanf("%d%d", &a, &b);
        fgets(str, sizeof(str), stdin);
        printf("%5d, %5d, %5d, %10.5f\n", a+b, a/b, a%b, (double)a/b);

    }    
}