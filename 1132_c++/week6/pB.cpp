#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/


class Clock {
private:
    int hour;
    int minute;
    int second;
public:
    Clock() {
        cin >> hour >> minute >> second;
    }

    void tick() {
        second++;
    }
    
    void show_time() {
        if (second >= 60) {
            minute += second / 60;
            second = second % 60;
        }
        if (minute >= 60) {
            hour += minute / 60;
            minute = minute % 60;
        }

        if (hour < 10) {
            cout << 0;
        }
        cout << hour << ':';
        if (minute < 10) {
            cout << 0;
        }
        cout << minute << ':';
        if (second < 10) {
            cout << 0;
        }
        cout << second << '\n';

    }
};

signed main(void) {
    Clock a;
    a.show_time();
    a.tick();
    a.show_time(); 
    // system("pause");
}
