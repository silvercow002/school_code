#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/



class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int c = 1;
        for (int i=digits.size()-1; i >= 0; --i) {
            if (c) {
                digits[i] += 1;
                if (digits[i] == 10) {
                    digits[i] = 0;
                }
                else {
                    c = 0;
                    break;
                }
            }
        }

        if (c) {
            digits.insert(digits.begin(), 1);
        }


        return digits;
    }
};



signed main(void) {
    int n;
    cin >> n;
    vector<int> digits(n);
    for (int i=0; i < n; ++i) {
        cin >> digits[i];
    }

    Solution sol;
    vector<int> result = sol.plusOne(digits);

    for (int d : result) {
        cout << d << ' ';
    }
    cout << endl;

    return 0;
}