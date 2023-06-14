#include <stdio.h>
#include <stdbool.h>

int main() {
    int dia[2], mes[2], ano[2];
    int i, j, k;

    printf("Digite o dia inicial: ");
    scanf("%d", &dia[0]);
    printf("Digite o mes inicial: ");
    scanf(" %d", &mes[0]);
    printf("Digite o ano inicial: ");
    scanf(" %d", &ano[0]);
    printf("Digite o dia final: ");
    scanf(" %d", &dia[1]);
    printf("Digite o mes final: ");
    scanf(" %d", &mes[1]);
    printf("Digite o ano final: ");
    scanf(" %d", &ano[1]);

    int contadorDias = 0;
    bool isAnoBissexto;

    for (i = ano[0]; i <= ano[1]; i++) {
        isAnoBissexto = (i % 4 == 0 && i % 100 != 0) || (i % 400 == 0);

        int limiteMesFinal = (i == ano[1]) ? mes[1] : 12;

        for (j = mes[0]; j <= limiteMesFinal; j++) {
            int limiteDiaFinal = (i == ano[1] && j == mes[1]) ? dia[1] : 31;

            if (j == 2) {
                limiteDiaFinal = (isAnoBissexto) ? 29 : 28;
            } else if (j == 4 || j == 6 || j == 9 || j == 11) {
                limiteDiaFinal = 30;
            }

            int limiteDiaInicial = (j == mes[0]) ? dia[0] : 1;

            for (k = limiteDiaInicial; k <= limiteDiaFinal; k++) {
                contadorDias++;
            }
        }
    }

    printf("\nTotal de dias: %d\n", contadorDias);
    return 0;
}