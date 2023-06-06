#include <stdio.h>
#include <unistd.h>
#include <stdio.h>

// protótipos das funções
void refrao(void);

// define a função refrao
void refrao(void) {
    int bpm = 130;  // Definindo o BPM desejado
    int tempoPorBatida = 60 * 1000000 / bpm;  // Calculando o tempo (em microssegundos) entre cada batida

    for (int i = 0; i < 12; i++) {
        if (i == 1)
            printf("\n[batida de funk inicia]\n");

        for (int j = 0; j < 4; j++) {
            if (i == 0 && j == 0)
                continue;

            printf("Toma");

            if (j < 3)
                printf(", ");

            fflush(stdout);
            usleep(tempoPorBatida);
        }

        printf("\n");
    }
}

int main() {
    system("pause");
    refrao();
    return 0;
}