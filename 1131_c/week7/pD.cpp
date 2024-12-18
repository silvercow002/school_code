#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/



string abc(string a) {
    if (a.size() == 1) {
        return a;
    }

    int tmp = 0;

    for (int i=0; i < a.size(); ++i) {
        tmp += a[i] - '0';
    }

    string re = "";
    while (tmp != 0) {
        re = (char)(tmp%10 + '0') + re;
        tmp = tmp / 10;
    }

    if (re.size() != 1) {
        return abc(re);
    }
    else {
        return re;
    }

}



signed main(void) {
    string n;
    while (cin >> n) {
        if (n[0] == '0' && n.size() == 1) {
            return 0;
        }

        cout << abc(n)[0] - '0' << '\n';

    }
}