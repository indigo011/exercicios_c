#include <stdio.h>
#include <math.h>

int main() {
    float p[2], distanciaOrigem;

    printf("Informe o valor da abscissa: ");
    scanf("%f", &p[0]);
    printf("Informe o valor da ordenada y: ");
    scanf("%f", &p[1]);
   
    
    distanciaOrigem = sqrt(pow(p[0], 2) + pow(p[1], 2));

    printf("\nDistancia: %f", distanciaOrigem);

    return 0;
}

