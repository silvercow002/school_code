#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/



class Car {
private:
    static int speed_limit;
public:
    int speed;

    Car(int s) {
        speed = s;
    }

    bool checkSpeed() {
        return speed <= speed_limit;
    }    

    void getLimit(int lt) {
        speed_limit = lt;
    }
};
int Car::speed_limit = 0;

signed main(void) {
    int a, b, c;
    cin >> a >> b >> c;

    Car f(b), s(c);
    f.getLimit(a);
    s.getLimit(a);

    cout << f.checkSpeed() << '\n';
    cout << s.checkSpeed() << '\n';;
    system("pause");
}