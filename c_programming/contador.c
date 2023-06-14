#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
    int dia[2], mes[2], ano[2];
    int contador;
    
    //repete ate o user cancelar 
    int continuaPrograma = 1;
    do {
        printf("Digite a data inicial: ");
        scanf("%d", &dia[0]);
        system("cls");
        printf("Digite a data inicial: %d / ", dia[0]);
        scanf("%d", &mes[0]);
        system("cls");
        printf("Digite a data inicial: %d / %d / ", dia[0], mes[0]);
        scanf("%d", &ano[0]);
        system("cls");
        printf("Data inicial: %d / %d / %d\n\n", dia[0], mes[0], ano[0]);

        printf("Digite a data final: ");
        scanf("%d", &dia[1]);
        system("cls");
        printf("Data inicial: %d / %d / %d\n\n", dia[0], mes[0], ano[0]);
        printf("Digite a data final: %d / ", dia[1]);
        scanf("%d", &mes[1]);
        system("cls");
        printf("Data inicial: %d / %d / %d\n\n", dia[0], mes[0], ano[0]);
        printf("Digite a data final: %d / %d / ", dia[1], mes[1]);
        scanf("%d", &ano[1]);
        system("cls");
        printf("Data inicial: %d / %d / %d\n\n", dia[0], mes[0], ano[0]);
        printf("Data final: %d / %d / %d\n\n", dia[1], mes[1], ano[1]);
        /*printf("Digite o mes final: ");
        scanf("%d", &mes[1]);
        printf("Digite o ano final: ");
        scanf("%d", &ano[1]);*/

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

        system("cls");
        printf("\n\tTotal de dias contados: %d", contador);
        printf("\n\n\t(1) Nova contagem\n\t(0) Encerrar\n\tInforme a opcao desejada: ");
        scanf("%d", &continuaPrograma);

        if (continuaPrograma == 1) 
            system("cls");
        
        else 
            printf("\nPrograma encerrado!");

    } while (continuaPrograma == 1);
    
    return 0;
}