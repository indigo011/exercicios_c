#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
    int dia[2], mes[2], ano[2];
    int contador, verificadorErro;
    
    //repete ate o user cancelar 
    int continuaPrograma = 1;
    do {
        //repete ate ser digitado uma data valida
        do {
            system("cls");
            printf("Digite a data inicial: ");
            scanf("%d", &dia[0]);
            system("cls");
            printf("Digite a data inicial: %2d / ", dia[0]);
            scanf("%d", &mes[0]);
            system("cls");
            printf("Digite a data inicial: %2d / %2d / ", dia[0], mes[0]);
            scanf("%d", &ano[0]);
            system("cls");
            printf("Data inicial: %2d / %2d / %4d\n\n", dia[0], mes[0], ano[0]);

            printf("Digite a data final: ");
            scanf("%d", &dia[1]);
            system("cls");
            printf("Data inicial: %2d / %2d / %4d\n\n", dia[0], mes[0], ano[0]);
            printf("Digite a data final: %2d / ", dia[1]);
            scanf("%d", &mes[1]);
            system("cls");
            printf("Data inicial: %2d / %2d / %4d\n\n", dia[0], mes[0], ano[0]);
            printf("Digite a data final: %2d / %2d / ", dia[1], mes[1]);
            scanf("%d", &ano[1]);
            system("cls");
            printf("Data inicial: %2d / %2d / %4d\n\n", dia[0], mes[0], ano[0]);
            printf("Data final: %2d / %2d / %4d\n\n", dia[1], mes[1], ano[1]);

            //verificando se a data é válida
            if (ano[0] > ano[1] || ano[0] > 9999 || ano[1] > 9999 || ano[0] < 0 || ano[1] < 0) {
                printf("\nAno(s) inicial e/ou final invalido(s).\n");
                verificadorErro = 1;
                system("pause");
            }

            else {
                if (mes[0] > mes[1] || (mes[0] > 12 || mes[0] < 1) || (mes[1] > 12 || mes[1] < 1)) {
                    printf("\nMes(s) inicial e/ou final invalido(s).\n");
                    verificadorErro = 1;
                    system("pause");
                }

                else {
                    if (dia[0] > dia[1] || (dia[0] > 31 || dia[0] < 1) || (dia[1] > 31 || dia[1] < 1)) {
                        printf("\nDia(s) inicial e/ou final invalido(s).\n");
                        verificadorErro = 1;
                        system("pause");
                    }

                    else
                        else
                        verificadorErro = 0;
                }
            }    
            
        } while (verificadorErro == 1);
        
        //inicializando variaveis
        bool isAnoBissexto;
        int j = mes[0] + 1;
        contador = 0;

        //inicializando contador
        if (mes[0] == 2 && (ano[0] % 4 == 0))
            contador += 29 - dia[0];
        
        else if (mes[0] == 2 && (ano[0] % 4 != 0))
            contador += 28 - dia[0];
        
        else if (mes[0] == 4 || mes[0] == 6 || mes[0] == 9 || mes[0] == 11)
            contador += 30 - dia[0];
        
        else
            contador += 31 - dia[0];

        //contando os dias
        for (int i = ano[0]; i <= ano[1]; i++) {
            if (i % 4 == 0) //verificando se é ano bissexto
                isAnoBissexto = true;
            
            else    
                isAnoBissexto = false;
            
            while (j <= 12) {
                //condicao de parada
                if (i == ano[1] && j == mes[1]) { 
                    contador += dia[1];
                    break;
                }

                else if (j == 2 && isAnoBissexto == false)
                    contador += 28;
                
                else if (j == 2 && isAnoBissexto == true)
                    contador += 29;
                
                else if (j == 4 || j == 6 || j == 9 || j == 11)
                    contador += 30;
                
                else    
                    contador += 31;
                
                j++;
            }

            j = 1; //reinicia contador de meses
        }

        //validando resposta final
        do {
            system("cls");
            printf("\n\tTotal de dias contados: %d", contador);
            printf("\n\n\t(1) Nova contagem\n\t(0) Encerrar\n\tInforme a opcao desejada: ");
            scanf("%d", &continuaPrograma);

            if (continuaPrograma == 1) 
                system("cls");
            
            else if (continuaPrograma == 0)
                printf("\nPrograma encerrado!");
            
            else {
                printf("\n\tOpcao invalida! ");
                system("pause");
            }
       
        } while (continuaPrograma != 1 && continuaPrograma != 0);

    } while (continuaPrograma == 1);
    
    return 0;
}