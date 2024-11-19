#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/


double avg[10][10][3];

signed main(void) {
    for (int i=0; i < 2; ++i) {
        for (int j=0; j < 3; ++j) {
            int a=0, b=0, c=0;
            for (int k=0; k < 5; ++k) {

                int _a, _b, _c;
                cin >> _a;
                cin.ignore();
                cin >> _b;
                cin.ignore();
                cin >> _c;
                
                a += _a;
                b += _b;
                c += _c;
            }
            avg[i][j][0] = (double)a/5;
            avg[i][j][1] = (double)b/5;
            avg[i][j][2] = (double)c/5;
        }
    }

    cout << fixed << setprecision(2);

    for (int i=0; i < 2; ++i) {
        for (int j=0; j < 3; ++j) {
            printf("%d年%d班學生國文成績平均為 %.2f\n", i+1, j+1, avg[i][j][0]);
        }
    }
    
    for (int i=0; i < 2; ++i) {
        for (int j=0; j < 3; ++j) {
            printf("%d年%d班學生英文成績平均為 %.2f\n", i+1, j+1, avg[i][j][1]);
        }
    }

    for (int i=0; i < 2; ++i) {
        for (int j=0; j < 3; ++j) {
            printf("%d年%d班學生數學成績平均為 %.2f\n", i+1, j+1, avg[i][j][2]);
        }
    }

}