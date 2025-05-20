#include<bits/stdc++.h>
// using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/


template<class T>
class node {
public:
    T v;
    node *next;
    node(T x) : v(x), next(nullptr) {}
};


template<class T>
class queue {
    node<T> *start;
    node<T> *end;
public:
    queue() : start(nullptr), end(nullptr) {}

    bool empty() {
        return start == nullptr;
    }

    bool safe(T v) {
        node<T> *tar = start;
        while (tar != nullptr) {
            if (tar->v == v) {
                return false;
            }
            tar = tar->next;
        }
        return true;
    }

    void safe_push(T v) {
        node<T> *tmp = new node<T>(v);
        if (empty()) {
            start = end = tmp;
        }
        else if (safe(v)) {
            end->next = tmp;
            end = tmp;
        }
        return;
    }

    T front() {
        if (!empty()) {
            return start->v;;
        }
    }

    void pop() {
        node<T> *tmp = start;
        start = start->next;
        delete tmp;
        if (empty()) {
            end = nullptr;
        }
    }

};




signed main(void) {
    queue<std::string> q;
    std::string s1, s2, s3, s4;
    std::cin >> s1 >> s2 >> s3 >> s4;

    q.safe_push(s1);
    q.safe_push(s2);
    q.safe_push(s3);
    q.safe_push(s4);

    q.pop();
    while (!q.empty()) {
        std::cout << q.front() << ' ';
        q.pop();
    } 

    // system("pause");


    return 0;
}
