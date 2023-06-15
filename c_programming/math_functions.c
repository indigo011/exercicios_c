//I'll present you some useful math functions in C
#include <stdio.h>
#include <math.h> //necessary header to use math functions in c

int main() 
{
    double a = sqrt(4);// it calculates the square root of 4;
    double b = pow(2, 3);//it calculates the power of a number. In this case, it raises the base (2) to the third power (3);
    double c = round(3.14);//it rounds a given float number. When the float part is greater than 5, it rounds it up. Otherwise, it rounds it down;
    double d = ceil(3.14);//it rounds up a float number;
    double e = floor(3.9);//it rounds down a float number;
    double f = fabs(100);// it turns a negative number into a positive one;
    double g = log(8, 10);//it calculates the logarithm of a number;
    double h = sin(45);//it calculates the sin of a number;
    double i = cos(45);//it calculates the cosine of a number;
    double j = tan(45);//it calculates the tangent of a number;

    printf("%.2f\n", a);
    printf("%.2f\n", b);
    printf("%.2f\n", c);
    printf("%.2f\n", d);
    printf("%.2f\n", e);
    printf("%.2f\n", f);
    printf("%.2f\n", g);
    printf("%.2f\n", h);
    printf("%.2f\n", i);
    printf("%.2f\n", j);

    return 0;
}