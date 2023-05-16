#include <stdio.h>
#include <math.h>

//calculus of the hypotenuse of a triangle
int main() {
    double hypo, a, b;

    printf("Enter the value a: ");
    scanf("%lf", &a);
    printf("Enter the value b: ");
    scanf("%lf", &b);

    hypo = sqrt((pow(a, 2) + pow(b, 2)));

    printf("\nThe hypotenuse is %lf.", hypo);
    return 0;
}