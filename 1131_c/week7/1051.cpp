#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/


signed main(void) {
    string str;
    cin >> str;

    int n=0;
    for (int i=0; i < str.size(); ++i) {
        if (i%2) n = n + (str[i]-'0');
        else n = n - (str[i]-'0');
    }

    if (abs(n)%11) printf("%s is not a multiple of 11.\n", str.c_str());
    else printf("%s is a multiple of 11.\n", str.c_str());


    // system("pause");   
}



