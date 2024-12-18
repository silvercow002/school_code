#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
// #define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/


char *h[10] = {"零", "一", "二", "三", "四", "五", "六", "七", "八", "九"};

string a(int x) {
    int a=x/100, b=(x/10)%10, c=x%10;
    string str="";

    if (a > 0) {
        // str = str + h[a] + "百";
        // printf("%s百", h[a]);
        if (a == 0) {
            printf("零");
        }
        else if (a == 1) {
            printf("一");
        }
        else if (a == 2) {
            printf("二");
        }
        else if (a == 3) {
            printf("三");
        }
        else if (a == 4) {
            printf("四");
        }
        else if (a == 5) {
            printf("五");
        }
        else if (a == 6) {
            printf("六");
        }
        else if (a == 7) {
            printf("七");
        }
        else if (a == 8) {
            printf("八");
        }
        else if (a == 9) {
            printf("九");
        }

    }

    if (x >= 20 && x%100) {
        // str = str + h[b];
        printf("%s", h[b]);
        if (a == 0) {
            printf("零");
        }
        else if (a == 1) {
            printf("一");
        }
        else if (a == 2) {
            printf("二");
        }
        else if (a == 3) {
            printf("三");
        }
        else if (a == 4) {
            printf("四");
        }
        else if (a == 5) {
            printf("五");
        }
        else if (a == 6) {
            printf("六");
        }
        else if (a == 7) {
            printf("七");
        }
        else if (a == 8) {
            printf("八");
        }
        else if (a == 9) {
            printf("九");
        }
    }

    if (b > 0) {
        // str = str + "十";
        printf("十");
    }

    if (c > 0) {
    //    str = str + h[c]; 
        printf("%s", h[c]);
        if (c == 0) {
            printf("零");
        }
        else if (c == 1) {
            printf("一");
        }
        else if (a == 2) {
            printf("二");
        }
        else if (a == 3) {
            printf("三");
        }
        else if (a == 4) {
            printf("四");
        }
        else if (a == 5) {
            printf("五");
        }
        else if (a == 6) {
            printf("六");
        }
        else if (a == 7) {
            printf("七");
        }
        else if (a == 8) {
            printf("八");
        }
        else if (a == 9) {
            printf("九");
        }
    }

    if (!x) 
        printf("%s", h[0]);
        // str = h[0];

    return str;
}







signed main(void) {
    // for (int i=0; i < 1000; ++i) {
    //     cout << i << ' ' << a(i) << '\n';
    // }
    // cout << '\n';

    int n;
    scanf("%d", &n);
    a(n);
    printf("\n");

    // cout << a(n) << '\n';
    // cout << a(n) << endl;
    // printf("%s\n", a(n).c_str());
    // STOP;
}