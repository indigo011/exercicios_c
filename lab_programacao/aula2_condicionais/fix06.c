#include <stdio.h>

int main()
{
    float v, i, r, p;

    printf("Digite o valor da resistencia eletrica: ");
    scanf("%f", &i);
    printf("Digite o valor da corrente eletrica: ");
    scanf("%f", &r);

    //calculando a tensao
    v = i * r;
    //calculando a potencia
    p = v * i;

    printf("\nTensao eletrica: %.2f", v);
    printf("\nPotencia eletrica: %.2f", p);

    return 0;
}