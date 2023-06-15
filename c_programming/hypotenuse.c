//calculating idk some things
#include <stdio.h>
#include <math.h>
float hypotenuse(float a, float b)
{
    float hypotenuse = sqrt((pow(a, 2) + pow(b, 2)));

    return hypotenuse;
}

float circumference(float radius)
{
    const float PI = 3.14;
    float circumference = 2*PI*radius;

    return circumference;
}

int main()
{
    int select;
    printf("Type 1 to calculate the hypotenuse of a right triangle or type 2 to calculate the circumference of a circle: ");
    scanf("%d", &select);

    float result;
    if (select == 1)
    {
        float a, b;
        printf("Enter the value of cathetus a: ");
        scanf("%f", &a);
        printf("Enter the value of cathetus b: ");
        scanf(" %f", &b);

        result = hypotenuse(a, b);
    }

    else if (select == 2)
    {
        float radius;
        printf("Enter the circle radius: ");
        scanf("%f", &radius);

        result = circumference(radius);
    }

    else
        printf("\nInvalid option.");
    
    printf("\n\nRESULT: %.2f", result);

    return 0;
}
