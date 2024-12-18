#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
// #define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/


int dd[13], _dd[13];

int dice(void) {
    return ((int) (rand() / (RAND_MAX+1.0) * 6) + 1) + 
            ((int) (rand() / (RAND_MAX+1.0) * 6) + 1);
}

int _dice(void) {
    return (rand()%6 +1) + (rand()%6 +1);
}


signed main(void) {
    int seed, time;
    cin >> seed >> time;
    srand(seed);

    for (int i=0; i < time; ++i) {
        dd[dice()]++;
        _dd[_dice()]++;
    }

    for (int i=2; i <=12; ++i) {
        printf("%d %d\n", i, _dd[i]);
    }
    printf("\n");
    for (int i=2; i <=12; ++i) {
        printf("%d %d\n", i, dd[i]);
    }
}