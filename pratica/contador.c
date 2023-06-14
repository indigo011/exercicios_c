//contador de dias
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
    
    int contadorDias = 0;//inicializando contadores
    bool isAnoBissexto;

    for (i = ano[0]; i <= ano[1]; i++) {
        i % 4 == 0 ? isAnoBissexto == true : isAnoBissexto == false;

        for (j = mes[0]; j <= mes[1]; j++) {
            for (k = dia[0] + 1; k <= 31; k++) {
                if (j == 2 && k == 29 && isAnoBissexto == false)
                    break;
                    
                if (j == 2 && k == 30 && isAnoBissexto == true)
                    break;
                    
                if ((j == 4 || j == 6 || j == 9 || j == 11) && k == 30)
                    break;
                    
                contadorDias++;
            } 
        }
    }

    printf("\nTotal de dias: %d", contadorDias);
    return 0;
}