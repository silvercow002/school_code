#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/


#define SIZE 5

struct cell {
    bool isAilve;
    bool next;
};

class Game {
    cell world[SIZE][SIZE];
public: 
    Game() {
        for (int i=0; i < SIZE; ++i) {
            for (int j=0; j < SIZE; ++j) {
                world[i][j].isAilve = false;
                world[i][j].next = false;
            }
        }
    }

    void createCell(int x, int y) {
        world[x][y].isAilve = true;
    }




    void evolve(int round) {
        for (int cnt=0; cnt < round-1; ++cnt) {
            // round = round-1;
            for (int i=0; i < SIZE; ++i) {
                for (int j=0; j < SIZE; ++j) {
                    int alive = 0;
                    
                    if (i-1 >= 0) {
                        if (j+1 < SIZE && world[i-1][j+1].isAilve) {
                            alive++;
                        }
                        if (j-1 >= 0 && world[i-1][j-1].isAilve) {
                            alive++;
                        }
                        if (world[i-1][j].isAilve) {
                            alive++;
                        }
                    }

                    if (i+1 < SIZE) {
                        if (j+1 < SIZE && world[i+1][j+1].isAilve) {
                            alive++;
                        }
                        if (j-1 >= 0 && world[i+1][j-1].isAilve) {
                            alive++;                        
                        }
                        if (world[i+1][j].isAilve) {
                            alive++;
                        }

                    }

                    if (j-1 >= 0 && world[i][j-1].isAilve) {
                        alive++;
                    }
                    if (j+1 < SIZE && world[i][j+1].isAilve) {
                        alive++;
                    }

                    if (world[i][j].isAilve) {
                        if (alive == 2 || alive == 3) {
                            world[i][j].next = true;
                        }
                        else {
                            world[i][j].next = false;
                        }
                    }
                    else {
                        if (alive >= 3) {
                            world[i][j].next = true;
                        }
                        else {
                            world[i][j].next = false;
                        }
                    }

                }
            }


            for (int i=0; i < SIZE; ++i) {
                for (int j=0; j < SIZE; ++j) {
                    world[i][j].isAilve = world[i][j].next;
                }
            }
        }
    }

    void print_world() {
        for (int i=0; i < SIZE; ++i) {
            for (int j=0; j < SIZE; ++j) {
                cout << world[i][j].isAilve << ' ';
            }
            cout << '\n';
        }        
        cout << '\n';
    }
};


signed main(void) {
    Game g;
    int x, y;
    while (cin >> x >> y) {
        g.createCell(x,y);
    }
    
    g.evolve(3);
    g.print_world();

    return 0;
}