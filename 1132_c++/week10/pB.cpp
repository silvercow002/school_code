#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/



const int gcd(const int &a, const int &b) {
    return b==0 ? a : gcd(b, a%b);
}

class Fractional {
private:
    // double numerator;
    // double denominator;
    int numerator;
    int denominator;
public:
    int r, i;

    Fractional(pair<int, int> p): numerator(p.first), denominator(p.second) {
        r = 0;
        i = 0;
        ta();
        kk();
    }

    void printFrac() {
        if (this->denominator == 1) {
            cout << this->numerator << '\n';
        }
        else {
            cout << this->numerator << '/' << this->denominator << '\n';
        }
        return;
    }

    void kk() {
        if (this->denominator < 0) {
            this->denominator = this->denominator * -1;
            this->numerator = this->numerator * -1;
        }
    }

    void ta() {
        // const int &gg = gcd(this->numerator, this->denominator);
        const int &gg = gcd(abs(this->numerator), abs(this->denominator));
        if (gg != 1) {
            this->numerator = this->numerator/gg;
            this->denominator = this->denominator/gg;
            ta();
        }
        else {
            return;
        }
    }

    friend Fractional operator+(const Fractional &a, const Fractional &b);
    friend Fractional operator-(const Fractional &a, const Fractional &b);
    friend Fractional operator*(const Fractional &a, const Fractional &b);
    friend Fractional operator/(const Fractional &a, const Fractional &b);
};

Fractional operator+(const Fractional &a, const Fractional &b) {    
    int an = a.numerator*b.denominator, ad = a.denominator*b.denominator,bn = b.numerator*a.denominator, bd = b.denominator*a.denominator;
    return Fractional({an+bn, ad});
}

Fractional operator-(const Fractional &a, const Fractional &b) {
    int an = a.numerator*b.denominator, ad = a.denominator*b.denominator,bn = b.numerator*a.denominator, bd = b.denominator*a.denominator;
    return Fractional({an-bn, ad});

}
Fractional operator*(const Fractional &a, const Fractional &b) {
    return Fractional({a.numerator*b.numerator, a.denominator*b.denominator});
}
Fractional operator/(const Fractional &a, const Fractional &b) {
    // return Fractional({a.numerator*b.numerator, a.denominator*b.numerator});
    return Fractional({a.numerator*b.denominator, a.denominator*b.numerator});
}


signed main(void) {
    int n = 99;
    for (int i=0; i < n; ++i) {
        pair<int, int> p1, p2;
        char op;
        cin >> p1.first >> p1.second >> op >> p2.first >> p2.second;
        
        Fractional a1(p1), a2(p2);
        if (op == '+') {
            (a1+a2).printFrac();
        }
        else if (op == '-') {
            (a1-a2).printFrac();

        }
        else if (op == '/') {
            (a1/a2).printFrac();

        }
        else {
            (a1*a2).printFrac();
        }
    }

    system("pause");
}