#include<bits/stdc++.h>
using namespace std;



class Matrix {
private:
    int m[2][2];
public:
    Matrix(int t11=0, int t12=0, int t21=0, int t22=0) {
        m[0][0] = t11;
        m[0][1] = t12;
        m[1][0] = t21;
        m[1][1] = t22;
    }
    Matrix operator+(const Matrix& other) const;
    Matrix operator-(const Matrix& other) const;
    Matrix operator*(const Matrix& other) const;
    friend ostream& operator<<(ostream& os, const Matrix& other);
    Matrix operator-() const;
    Matrix operator*(int k) const;
};

Matrix Matrix::operator+(const Matrix& other) const{
    Matrix re(
        m[0][0]+other.m[0][0],
        m[0][1]+other.m[0][1],
        m[1][0]+other.m[1][0],
        m[1][1]+other.m[1][1]
    );
    return re;
}
Matrix Matrix::operator-(const Matrix& other) const{
    Matrix re(
        m[0][0]-other.m[0][0],
        m[0][1]-other.m[0][1],
        m[1][0]-other.m[1][0],
        m[1][1]-other.m[1][1]
    );
    return re; 
}

Matrix Matrix::operator*(const Matrix& other) const{
    Matrix re(
        m[0][0]*other.m[0][0]+m[0][1]*other.m[1][0],
        m[0][0]*other.m[0][1]+m[0][1]*other.m[1][1],
        m[1][0]*other.m[0][0]+m[1][1]*other.m[1][0],
        m[1][0]*other.m[0][1]+m[1][1]*other.m[1][1]
    );
    return re;
}

ostream& operator<<(ostream& os, const Matrix& m) {
    const int* a = &m.m[0][0];
    os << "[ " << a[0] << ' ' << a[1] << " ]\n"
    << "[ " << a[2] << ' ' << a[3] << " ]\n";
    return os;
}

Matrix Matrix::operator-() const {
    Matrix re(
        -m[0][0],
        -m[0][1],
        -m[1][0],
        -m[1][1]
    );
    return re;
}

Matrix Matrix::operator*(int k) const  {
    Matrix re(
        k*m[0][0],
        k*m[0][1],
        k*m[1][0],
        k*m[1][1]
    );
    return re;
}

Matrix operator*(int k, const Matrix& m) {
    return m*k;
}

signed main(void) {
    int a11, a12, a21, a22, b11, b12, b21, b22;
    cin >> a11 >> a12 >> a21 >> a22 >> b11 >> b12 >> b21 >> b22;

    Matrix a(a11, a12, a21, a22), b(b11, b12, b21, b22);
    cout << a+b << '\n';
    cout << a-b << '\n';
    cout << a*b << '\n';
    cout << -a << '\n';
    cout << 2 * b << '\n';
    return 0;
}