#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/

#define pi 3.14159

struct qq {
    double hole_diameter;
    double edge_diameter;
    double thickness;
    double density;
    double quantity;

    double weight;
    double hole_radius;
    double edge_radius;
    double rim_area;
    double unti_weight;

    double calculateRimArea(void) {
        hole_radius = hole_diameter / 2.0;
        edge_radius = edge_diameter / 2.0;
        rim_area = pi * edge_radius * edge_radius - pi * hole_radius * hole_radius;
        return rim_area;
    }

    double calculateUnit(void) {
        return unti_weight = rim_area * thickness * density;
    }

    double calculateWeight(void) {
        return weight = unti_weight * quantity;
    }

};


void inputData(double* hole_diameter, double* edge_diameter, double* thickness) {
    // printf("Inner diameter in centimeters> ");
    scanf("%lf", hole_diameter);
    // printf("Outer diameter in centimeters> ");
    scanf("%lf", edge_diameter);
    // printf("Thickness in centimeters> ");
    scanf("%lf", thickness);
}

void _inputData(double* density, double* quantity) {
    // printf("Material density in grams per cubic centimeter> ");
    scanf("%lf", density);
    // printf("Quantity in batch>");
    scanf("%lf", quantity);
}

// void __inputData(double* weight) {
    // printf("\nThe expected weight of the batch is %.2f", weight);
    // printf(" grams.\n");
// }

signed main(void) {
    qq qq;
    inputData(&qq.hole_diameter, &qq.edge_diameter, &qq.thickness);
    _inputData(&qq.density, &qq.quantity);
    qq.calculateRimArea();
    qq.calculateUnit();
    qq.calculateWeight(); 
    // __inputData(&qq.weight);
    printf("The expected weight of the batch is ");
    cout << fixed << setprecision(2) << qq.weight; 
    printf(" grams.\n");
    system("pause");
}