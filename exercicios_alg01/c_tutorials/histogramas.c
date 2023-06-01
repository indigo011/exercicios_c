#include <stdio.h>

int main() {
    int elemento[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    //cabecalho
    printf("%s%13s%18s\n", "Elemento", "Valor", "Histograma");

    int i;
    int j;
    for (i = 0; i < 10; i++) {
        printf("%8d%9d", i, elemento[i]);
        //imprimindo histogramas
        for (j = 1; j <= elemento[i]; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}