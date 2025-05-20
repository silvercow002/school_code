#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/
typedef double Type;

class Exercise {
public:
    Type SetVal(Type p) {
        val = p + initVal();
        return val;
    }
    Type initVal() {
        return 0;
    }

private:
    int val;
};



signed main(void) {
    double num;
    cin >> num;
    Exercise ex;
    cout << ex.SetVal(num) << '\n';    
    int t;
    cin >> t;
    return 0;
}
