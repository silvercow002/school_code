#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/



class Vehicle {
private:
    double vehiclePrice;
public:
    Vehicle(double v) {
        vehiclePrice = v;
    }
    virtual ~Vehicle() {};

    double get_v_price() {
        return vehiclePrice;
    }
};

class FourWheeler {
private:
    double wheelsPrice;
public:
    FourWheeler(double w) {
        wheelsPrice = w;
    }
    virtual ~FourWheeler() {};

    double get_w_price() {
        return wheelsPrice;
    }
};

class Car : public Vehicle, public FourWheeler {
private:
    double carPrice;
public:
    Car(double b, double w, double c) : Vehicle(b), FourWheeler(w) {
        carPrice = c;
    }



    double totalCost() {
        return  carPrice + get_w_price() + get_v_price();
    }
};

signed main(void) {
    double base_price, wheels_price, car_price;
    cout << "Enter the base price, wheels' price and car price: ";
    cin >> base_price >> wheels_price >> car_price;
    Car c(base_price, wheels_price, car_price);
    cout << "Total cost of the car " << c.totalCost() << '\n';


    // system("pause");
}