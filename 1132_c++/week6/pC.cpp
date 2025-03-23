#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/


class Animal{

public:
    virtual void makeSound() {
        cout << "Animal makes a sound\n";
    }
};

class Dog : public Animal {
    void makeSound() override {
        cout << "Woof!\n";
    }
};


class Cat : public Animal {
    void makeSound() override { 
        cout << "Meow!\n";
    }
};

signed main(void) {
    Animal *a = new Animal, *d = new Dog, *c = new Cat;
    a->makeSound();
    d->makeSound();
    c->makeSound(); 
    STOP;
}