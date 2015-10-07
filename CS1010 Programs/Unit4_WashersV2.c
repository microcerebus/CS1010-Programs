// Unit4_WashersV2.c
// This version contains a circle_area() function.
#include <stdio.h>
#include <math.h>
#define PI 3.14159

double circle_area(double);

int main(void) {
    double d1,           // hole circle diameter
           d2,           // big circle diameter
           thickness,
           density;
    int    qty;

    double unit_weight,  // single washer's weight
           total_weight, // a batch of washers' total weight
           rim_area;     // single washer's rim area 
    
    // read input data
    printf("Inner diameter in cm: ");
    scanf("%lf", &d1);
    printf("Outer diameter in cm: ");
    scanf("%lf", &d2);
    printf("Thickness in cm: ");
    scanf("%lf", &thickness);
    printf("Density in grams per cubic cm: ");
    scanf("%lf", &density);
    printf("Quantity: ");
    scanf("%d", &qty);

    // compute weight of a single washer
    rim_area = circle_area(d2) - circle_area(d1);
    unit_weight = rim_area * thickness * density;

    // compute weight of a batch of washers
    total_weight = unit_weight * qty;

    // output
    printf("Total weight of the batch of %d washers is %.2f grams.\n", 
	       qty, total_weight);

    return 0;
}

double circle_area(double diameter) {
    return pow(diameter/2, 2) * PI;
}
