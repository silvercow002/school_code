#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/




class BOOK {
private:
    int BOOK_NO;
    string TITLE;
    float PRICE;
    float TOTAL_COST(int n) {
        return n*PRICE;
    }
public:
    void INPUT() {
        cout << "Enter Book Titlle :";
        cin >> TITLE;

        cout << "Enter Book Number :";
        cin >> BOOK_NO;

        cout << "Enter pricePer copy :";
        cin >> PRICE;

    }
    void PURCHASE() {
        int tmp;
        cout << "Enter number of copies to purchase :";
        cin >> tmp;
        cout << "Total cost :";
        cout << TOTAL_COST(tmp);
    }
};


signed main(void) {
    BOOK obj;
    obj.INPUT();
    obj.PURCHASE();
    return 0;
}