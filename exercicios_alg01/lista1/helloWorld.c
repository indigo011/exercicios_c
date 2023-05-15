//circumference & area of a circle calculator
#include <stdio.h>
#include <math.h>
#define PI 3.1415

int main() {
    float C, r, A;

    printf("Enter the circle radius (the radius of a circle is the half length of its diameter): ");
    scanf("%f", &r);

    C = 2*r*PI;
    A = PI * pow(r, 2);

    printf("\nCircumference: %.3f\nArea: %.3f", C, A);
    return 0;
}