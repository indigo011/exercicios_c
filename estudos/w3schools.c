#include <stdio.h>
#define VALOR_MAX 20

int main() {
    for (int i = 0; i < 2; i++) {
        i % 2 == 0 ? printf("Numeros pares: ") : printf("Numeros impares: ");

        for (int j = i; j <= VALOR_MAX; j += 2) {
            printf("%d", j);
            if (j + 1 < VALOR_MAX)
                printf(", ");
        }

        printf("\n\n");   
    }

    return 0;
}