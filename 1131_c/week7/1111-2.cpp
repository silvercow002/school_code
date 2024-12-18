#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/



string abc(int b, string a) {
    int sum=0;
    for (int i=0; i < a.size(); ++i) {
        // if (a[i]-'0'>10) 
        sum += a[i]-'0'>10 ? a[i]-'0'-7 : a[i]-'0';
    }

    cout << sum << ' ';
    int tmp=b; 
    string re;
    while (sum) {
        int x = sum%(tmp+1);
        char a = x>10 ? x+'0'+7 : x+'0';
        cout << a << ' ';
        re += a;
        sum/tmp;
        tmp = tmp*b;
    }        


    return re;
}


signed main(void) {
    int n;
    string input;
    while (cin >> n >> input) {
        if (n == 0 && input == "0") {
            break;
        }

        cout << abc(n, input);


    }




    system("pause");
}