#include <stdio.h>

int main() {
    int aux, i = 1;
    float soma = 0, media;

    printf("Entre com a idade %d: ", i);
    scanf("%d", &aux);
    soma = aux;

    while (aux > 0) {
        i++;
        printf("Entre com a idade %d: ", i);
        scanf("%d", &aux);

        if (aux > 0) 
            soma += aux;
    }

    if (soma > 0) {
        media = soma/(i-1);
        printf("Media das idades: %.2f", media);
    }

    else
        printf("A idade fornecida eh invalida!\nPrograma encerrado.");
    
    return 0;
}