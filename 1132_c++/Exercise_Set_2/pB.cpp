#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/


class rectangle {
private: 
    int width, height; // width and height of a rectangle
public:
    /* complete the rectangle constructor(s) */
    rectangle() {}
    rectangle(int w, int h) : width(w), height(h) {}

    rectangle operator+(const rectangle& r) {
        /* Complete the operator overloading */
        if (height != r.height && width != r.width) {
            if (height*width >= r.height*width) {
                return rectangle(width, height);
            }
            return rectangle(r.width, r.height);
        } 
        else if (height == r.height) {
            return rectangle(width+r.width, height);
        } 
        else if (width == r.width) {
            return rectangle(width, height+r.height);
        }
        return rectangle(width, height);
    }
    rectangle operator=(const rectangle& r) {
        /* Complete the operator overloading */
        width = r.width;
        height = r.height;
        return *this;
    }
    friend ostream& operator<<(ostream& os, const rectangle& r); 
};

ostream& operator<<(ostream& os, const rectangle& r) {
 /* Complete the operator overloading so that the rectangle 
   can be printed */
    for (int i=0; i < r.height; ++i) {
        for (int j=0; j < r.width; ++j) {
            os << '*' << ' ';
        }
        os << '\n';

    }
    os << '\n';
    return os;
}




signed main(void) {
    int w1, h1, w2, h2;
    cin >> w1 >> h1 >> w2 >> h2;
    rectangle r1(w1, h1), r2(w2, h2), r;
    r = r1 + r2;
    cout << r;



    // system("pause");
    return 0;
}
