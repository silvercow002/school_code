#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/


pair<int, int> sub(string str) {
    string x, y;
    pair<int, int> re = {0,0};
    bool flag = false;
    for (int i=0; i < str.size(); ++i) {
        if (str[i] == '/') {
            flag = true;
            continue;
        }

        if (flag) {
            re.second *= 10;
            re.second += str[i]-'0';
        }
        else {
            re.first *= 10;
            re.first += str[i]-'0';
        }
    }
    return re;
}


int _gcd(int a, int b) {
    return !b?a:_gcd(b,a%b);
}

pair<int, int> tot(pair<int, int> x) {
    while (_gcd(abs(x.first), x.second) != 1) {
        int tmp = _gcd(abs(x.first), x.second);
            x.first /= tmp;
            x.second /= tmp;
    }
    return x;
}


signed main(void) {
    while (true) {
        string in_a, in_b;
        char op;
        // cin >>  in_a >> op >> in_b;
        

        pair<int, int> a, b, ans;
        char tmp;
        // a = sub(in_a);
        // b = sub(in_b);
        cin >> a.first >> tmp >> a.second;
        cin >> op;
        cin >> b.first >> tmp >> b.second;


        if (op == '+') {
            ans.first = a.first*b.second + a.second*b.first;
            ans.second = a.second*b.second;
        }

        else if (op == '-') {
            ans.first = a.first*b.second - a.second*b.first;
            ans.second = a.second*b.second;
        }
        else if (op == '*') {
            ans.first = a.first*b.first;
            ans.second = a.second*b.second;
        }
        else {
            ans.first = a.first*b.second;
            ans.second = a.second*b.first;
        }
        
        if (ans.first * ans.second < 0) {
            ans.first = -1 * abs(ans.first);
        }
        ans.second = abs(ans.second);

        ans = tot(ans);

        cout << a.first << '/' << a.second;
        cout << ' ' << op << ' ';
        cout << b.first << '/' << b.second;
        cout << " = ";
        cout << ans.first << '/' << ans.second << '\n';


        cin >> op;
        if (op == 'n') break;
    }
}