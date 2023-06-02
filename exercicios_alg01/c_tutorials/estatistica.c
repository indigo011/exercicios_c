#include <stdio.h>
#define TAMANHO 10

float mediana(float valores[TAMANHO])
{
    int i, j;
    float aux;
    
    for (i = 1; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO - 1; j++) {
            if (valores[j] > valores[i]) {
                aux = valores[j];
                valores[j] = valores[i];
                valores[i] = aux;
            }
        }
    }

    if (TAMANHO % 2 != 0)
        return valores[int(TAMANHO/2)];
    else {
        int media;
        media = (valores[TAMANHO/2-1] + valores[TAMANHO/2])/2;
        return media;
    }
}

int main() {
    float valores[] = {1, 4, 5, 7, 3, 2, 10, 2, 9, 2};

    printf("%.2f", mediana(valores));
    return 0;
}