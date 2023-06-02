#include <stdio.h>

int main() {
    char objeto[100];
    char atributos[10][100];
    char metodos[10][100];
    int opcao, i = 0;

    printf("Digite um objeto: ");
    scanf("%s", objeto);

    do {
        printf("Digite uma caracteristica deste objeto: ");
        scanf(" %s", atributos[i]);
        printf("Para adicionar mais caracteristicas, digite '1'. Senão, digite '2': ");
        scanf(" %d", &opcao);

        if (opcao != 1 && opcao != 2)
            printf("\nOpção invalida!\n");
        
        i++;
    } while (opcao == 1 && i < 3);
    
    i = 0;
    do {
        printf("Digite uma funcao deste objeto: ");
        scanf(" %s", metodos[i]);
        printf("Para adicionar mais funcoes, digite '1'. Senão, digite '2': ");
        scanf(" %d", &opcao);

        if (opcao != 1 && opcao != 2)
            printf("\nOpção invalida!\n");
        
        i++;
    } while (opcao == 1 && i < 3);

    printf("%s\n\n", objeto);
    for (i = 0; i < 3; i++) {
        printf("%s\n", atributos[i]);
    }

    printf("\n\n");

    for (i = 0; i < 3; i++) {
        printf("%s();\n", metodos[i]);
    }

    return 0;
}