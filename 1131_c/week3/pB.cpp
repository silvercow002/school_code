#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/



string s1 = "On the ",
    s2 = " day of Christmas\nmy true love sent to me:\n",
    s3 = "A Partridge in a Pear Tree\n",
    str[12] = {
        "and a Partridge in a Pear Tree\n",
        "2 Turtle Doves\n",
        "3 French Hens\n",
        "4 Calling Birds\n",
        "5 Golden Rings\n",
        "6 Geese a Laying\n",
        "7 Swans a Swimming\n",
        "8 Maids a Milking\n",
        "9 Ladies Dancing\n",
        "10 Lords a Leaping\n",
        "11 Pipers Piping\n",
        "12 Drummers Drumming\n"
        },
    day[12] = {
        "first", "second", "third", "fourth", "fifth", "sixth", "seventh", "eighth", "ninth", "tenth", "eleventh", "twelfth"
    };


signed main(void) {
    int n;
    cin >> n;
    for (int i=0; i < n; ++i) {
        cout << s1 << day[i] << s2;
        if (!i) {
            cout << s3;
        }
        else {
            for (int j=i; j >= 0; --j) {
                cout << str[j];
                // cout << j << '\n';
            }
        }

        if (i+1 != n) cout << '\n';
        // cout << '\n';
    }

    system("pause");
}
