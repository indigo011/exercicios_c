#include <stdio.h>
#include <stdlib.h>

void limparTela() {
    // system("pause");
    // system("cls");
}

int main() {
    int opcao;
    
    do {
        printf("Informe umas das opcoes abaixo:\n");
        printf("[1] Ferias\n[2] Decimo terceiro\n[3] Sair\nOpcao: ");
        scanf(" %d", &opcao);

        switch (opcao) {
            float salario, ferias, decTerceiro;
            int mesesTrabalhados;

            case 1:
                printf("Informe o seu salario: ");
                scanf("%f", &salario);

                ferias = salario*1.33;

                printf("Valor calculado para ferias: %.2f\n", ferias);
                limparTela();
                break;

            case 2:
                printf("\nInforme o seu salario: ");
                scanf("%f", &salario);
                printf("Informe a quantidade de meses trabalhados: ");
                scanf("%d", &mesesTrabalhados);

                decTerceiro = (mesesTrabalhados*salario)/12;
                printf("O seu decimo terceiro sera no valor de %.2f.\n", decTerceiro);
                limparTela();
                break;
            case 3:
                printf("Programa encerrado.");
                limparTela();
                break;

            default:
                printf("Opcao invalida.\n");
                limparTela();
        }  

    } while (opcao != 3);

    return 0;
}