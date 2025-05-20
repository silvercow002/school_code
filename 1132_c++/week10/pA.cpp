#include<bits/stdc++.h>
using namespace std;

class triangle;
class rectangle {
public:
    typedef double unit;
    unit area() const {
        return width*height;
    }
    void set(unit wd, unit ht) {
        width = wd;
        height = ht;
    }
    friend double areaSum(const rectangle &r, const triangle &t);
private:
    unit width;
    unit height;
};



class triangle {
public:
    typedef int unit;
    unit area() const {
        return (width*height)/2;
    }
    void set(unit wd, unit ht) {
        width = wd;
        height = ht;
    }
    friend double areaSum(const rectangle &r, const triangle &t);
private:
    unit width;
    unit height;
};

double areaSum(const rectangle &a, const triangle &b) {
    return a.width*a.height + (b.width*b.height)/2.0;
    // return a.area() + b.area();
}

signed main(void) {
    rectangle::unit x1, y1;
    rectangle obj1;
    cin >> x1 >> y1;
    triangle::unit x2, y2;
    cin >> x2 >> y2;
    triangle obj2;
    obj1.set(x1, y1);
    obj2.set(x2, y2);
    cout << areaSum(obj1, obj2) << endl;

    // triangle a;
    // a.w();
    system("pause");
    return 0;
}