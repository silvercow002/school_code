#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/


int convert(char a) {
    if ('0' <= a && a <= '9') {
        return a-'0';
    }
    else if ('A' <= a && a <= 'Z') {
        return a-'A'+10;
    }
    else {
        return a-'a'+36;
    }
}


int todec(int n, vector<int>& arr) {
    int re=0;
    for (int i=0; i < arr.size()-1; ++i) {
        re += arr[i];
        re *= n;
    }    
    return re+arr[arr.size()-1];
}



signed main(void) {
    string a;
    while (cin >> a) {
        vector<int> arr;
        int big=2;
        for (int i=0; i < a.size(); ++i) {
            int tmp = convert(a[i]);
            arr.push_back(tmp);
            if (big < tmp) big = tmp;
        }
        int min = 99;
        for (int i=63; i > big; --i) {
            int tmp = todec(i, arr);
            // cout << tmp%(i-1) << ' ' << i << '\n';
            if (tmp%(i-1) == 0 && min > i) {
                min = i; 
            }
        }

        if (min == 99) {
            cout << "-1\n";
        }
        else {
            cout << min << '\n';
        }

    }
}