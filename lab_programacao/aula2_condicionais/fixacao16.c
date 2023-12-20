#include <stdio.h>
#include <math.h>

//calculando o cosseno de x
int main()
{
    float x;
    printf("Entre com o valor de x: ");
    scanf("%f", &x);

    float x_rad = (M_PI * x)/180;
    x_rad /= 2;

    float y = 2.5 * cos(fabsf(x_rad)); //o parametro da função x deve estar em radianos

    printf("Valores\n");
    printf("x = %.2f\ny = %.2f", x_rad, y);
    
    return 0;
}