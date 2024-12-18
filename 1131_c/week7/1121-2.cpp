#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/


int fromoct(string t) {
    int tmp=1, re=0;
    for (int i=t.size()-1; i >= 0; --i) {
        re += (t[i]-'0')*tmp;
        tmp = tmp * 8;
    }
    return re;
}


int fromhex(string t) {
    int tmp=1, re=0;
    for (int i=t.size()-1; i >= 0; --i) {
        re += (t[i]-'0')*tmp;
        tmp = tmp * 16;
    }
    return re;
}


int frombin(string t) {
    int tmp=1, re=0;
    for (int i=t.size()-1; i >= 0; --i) {
        re += (t[i]-'0')*tmp;
        tmp = tmp * 2;
    }
    return re;
}


int fromdec(string t) {
    int tmp=1, re=0;
    for (int i=t.size()-1; i >= 0; --i) {
        re += (t[i]-'0')*tmp;
        tmp = tmp * 10;
    }
    return re;
}




signed main(void) {
    int n;
    cin >> n;
    for (int i=0; i < n; ++i) {
        string a, b;
        cin >> a >> b;
        
        // int _a = fromhex(a), __a = fromoct(a), _b = frombin(b);
        int hex = fromhex(a), bin = frombin(b), oct = fromoct(a), dec = fromdec(a);
        // cout << "hex " << hex << "bin " << bin << "oct " << oct << "dec " << dec << '\n';
        if (hex == bin) {
            cout << "16\n";
        }
        else if (oct == bin) {
            cout << "8\n";
        }
        else if (dec == bin) {
            cout << "10\n";
        }
        else {
            cout << "-1\n";
        }

    }



    // system("pause");
}