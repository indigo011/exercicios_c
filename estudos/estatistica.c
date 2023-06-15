#include <stdio.h>

float media(float vetor[], int tamanho) {
    int i;
    float media = 0;

    for (i = 0; i < tamanho; i++) {
        media += vetor[i];
    }

    return media/tamanho;
}

float mediana(float vetor[], int tamanho) {
    int i, j, aux;
    //ordenando os elementos
    for (i = 0; i < tamanho; i++) {
        for (j = 0; j < tamanho -1 - i; j++) {
            if (vetor[j] > vetor[j + 1]) 
            {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }

    //pegando o elemento central
    if (tamanho % 2 != 0)
        return vetor[(int)tamanho/2];
    else
    {
        float media = (vetor[(int)tamanho/2] + vetor[(int)tamanho/2 - 1])/2;
        return media;
    }
}

int main() {
    float vetor[] = {3, 2, 1, 9, 3, 4, 7, 10};
    int tamanho = sizeof(vetor)/sizeof(vetor[0]);

    printf("Media: %.3f\nMediana: %.3f\n", media(vetor, tamanho), mediana(vetor, tamanho));
    return 0;
}
