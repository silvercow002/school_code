#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/




class shape {
private:
    double width;
    double height;
public:
    shape(double w, double h) {
        width = w;
        height = h;
    }
    virtual ~shape() {
        cout << "shape work\n";
    }
    
    virtual double area() {
        return width * height;
    }
    
    double getw() const{
        return width;
    }
    double geth() const{
        return height;
    }
};


class triangle : public shape {
public:
    triangle(double w, double h) : shape(w, h) {}
    ~triangle() {
        cout << "triangle work\n";
    }

    double area() override {
        return getw() * geth() * 0.5;
    }
};

class rectangle : public shape {
public:
    rectangle(double w, double h) : shape (w, h) {}
    ~rectangle() {
        cout << "rectangle work\n";
    }

    double area() override {
        return getw() * geth();
    }
};

signed main(void) {
    rectangle rect(10.5, 2);
    triangle tri(6.4, 8.6);
    cout << rect.area() << '\n';
    cout << tri.area() << '\n';
    int p;
    cin >> p;
    return 0;

}