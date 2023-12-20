#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool isTriangulo = false;
    float x, y, z;

    printf("Digite o primeiro lado do triangulo: ");
    scanf("%f", &x);
    printf("Digite o segundo lado do triangulo: ");
    scanf("%f", &y);
    printf("Digite o terceiro lado do triangulo: ");
    scanf("%f", &z);

    if ((x < y+z)&&(y < x+z)&&(z < x+y))
        isTriangulo = true;
    
    if (isTriangulo) 
    {
        if (x == y && y == z)
            printf("\nO lados formam um triangulo equilatero.");

        else if ((x == y && y != z)||(x == z && y != z)||(z == y && y != x))
            printf("\nO lados formam um triangulo isosceles.");
        
        else 
            printf("\nO lados formam um triangulo escaleno.");
    }

    else
        printf("\nOs lados nao formam um triangulo.");
    
    return 0;
}