#include <stdio.h>

int main(){
    int i = 0;
    float aux, soma = 0;

    while (i < 5) {
        printf("Entre com o valor %d: ", i+1);
        scanf("%f", &aux);

        soma += aux;
        i++;
    }

    printf("\n\nSoma: %.2f", soma);
    return 0;
}