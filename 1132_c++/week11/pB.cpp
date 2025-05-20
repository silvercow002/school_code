#include<bits/stdc++.h>
using namespace std;


struct Node {
    int data;
    int order;
    Node *next;
    Node() {
        cin >> data;
        order = counter++;
        next = nullptr;
    }
    ~Node() {}
    static int counter;

    bool operator<(const Node& other) const {
        return data < other.data;        
    }
};

int Node::counter = 0;

ostream& operator<<(ostream& os, const Node& n) {
    os << n.order << ':' << n.data;
    return os;
}


template<class T>
void bubbleSort(T a[], int n) {
    for (int i=0; i < n-1; i++) {
        for (int j=n-1; i < j; j--) {
            if (a[j] < a[j-1]) {
                swap(a[j],  a[j-1]);
            }
        }

    }
    return;
}



signed main(void) {
    int n = 5;
    Node *dataList = new Node[n];
    bubbleSort<Node>(dataList, n);
    for (int i=0; i < n; i++) {
        cout << dataList[i] << " ";
    }
    cout << endl;
    delete [] dataList;
    return 0;
}
