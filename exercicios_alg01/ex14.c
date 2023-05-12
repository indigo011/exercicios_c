#include <stdio.h>
#include <locale.h>

int main() {
    int opcao;
    float C, K, F;

    setlocale(0, "Portuguese");

    do {
        printf("Conversões Online\n");
        printf("1. Celsius para Fahrenheint\n2. Fahrenheint para Celsius\n3. Celsius para Kelvin\n4. Kelvin para Celsius\n5. Encerrar programa\n");
        printf("Informe a opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: 
                printf("\nDigite a temperatura em graus Celsius: ");
                scanf("%f", &C);

                F = C*1.8 + 32;

                printf("\n%.2fC° = %.2fF°\n", C, F);
                break;
            case 2: 
                printf("\nDigite a temperatura em graus Fahrenheint: ");
                scanf("%f", &F);

                C = (F - 32)/1.8;

                printf("\n%.2fF° = %.2fC°\n", F, C);
                break;
            case 3: 
                printf("\nDigite a temperatura em graus Celsius: ");
                scanf("%f", &C);

                K = C + 273.15;

                printf("\n%.2fC° = %.2fK°\n", C, K);
                break;
            case 4: 
                printf("\nDigite a temperatura em graus Kelvin: ");
                scanf("%f", &K);

                C = K - 273.15;

                printf("\n%.2fK° = %.2fC°\n", K, C);
                break;
            case 5:
                printf("\nPrograma encerrado.\n");
                break;
            default: 
                printf("\nOpção inválida.\n");
        }
    } while (opcao != 5);

    return 0;
} 
