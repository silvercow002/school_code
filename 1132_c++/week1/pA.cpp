#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/

struct Rational {
    int q, p;
};

int gcd(int a, int b) {
    a = abs(a), b = abs(b);
    return (a%b == 0) ? b : gcd(b, a%b);
}


Rational simplify(Rational a) {
    int tmp = gcd(a.q, a.p);

    if (a.q == 0) {
        a.p = 1;
    }
    else {
        if (tmp != 1) {
            cout << '\n';
            cout << a.q << ' ' << a.p << '\n';
            cout << "tmp" << tmp << '\n';
            a.q = a.q/tmp;
            a.p = a.p/tmp;
        }
    }

    return a;
}

Rational ADD(const Rational &a, const Rational &b) {
    return simplify({a.q * b.p + b.q * a.p, a.p * b.p});

}

Rational SUB(const Rational &a, const Rational &b) {
    return simplify({a.q * b.p - b.q * a.p, a.p * b.p});
}

Rational MUL(const Rational &a, const Rational &b) {
    return simplify({a.q * b.q, a.p * b.p});
}


Rational DIV(const Rational &a, const Rational &b) {
    // if (!b.q) return;
    return simplify({a.q * b.p, a.p * b.q});
}

void print(Rational &a) {
    cout << a.q << " / " << a.p << '\n';
}

signed main(void) {
    Rational a, b, c;
    cin >> a.q >> a.p >> b.q >> b.p;

    c = ADD(a, b);
    print(c);

    c = SUB(a, b);
    print(c);

    c = MUL(a, b);
    print(c);
    
    c = DIV(a, b);
    print(c);

}