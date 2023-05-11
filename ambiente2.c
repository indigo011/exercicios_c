#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main(){
    void limparBuffer();
    float c, f, k;
    char select;

    setlocale(0, "Portuguese");

    do {
        printf("\nDigite C para entrar com a temperatura em Celsius, F para Fahrenheint e K para Kelvin: ");
        select = getchar();
        limparBuffer();

        switch (select){
            case 'C':
                do {
                    printf("Digite a temperatura em Celsius: ");
                    scanf("%f", &c);
                    limparBuffer();
                    printf("Digite F para converter para Fahrenheint ou K para Kelvin: ");
                    select = getchar();
                    limparBuffer();


                    switch (select){
                        case 'F':
                            f = c*1.8 + 32;
                            printf("\n\n%.2f graus celsius equivalem a %.2f graus Fahrenheint.\n", c, f);
                            break;

                        case 'K':
                            k = c + 273;
                            printf("\n\n%.2f graus celsius equivalem a %.2f graus Kelvin.\n", c, k);
                            break;

                        default:
                            printf("\nOpção inválida.\n");
                    }
                } while ((select != 'K')&&(select != 'F'));

                break;

            case 'F':
                do {
                    printf("Digite a temperatura em Fahrenheint: ");
                    scanf(" %f", &f);
                    limparBuffer();
                    printf("Digite C para converter para Celsius ou K para Kelvin: ");
                    select = getchar();
                    limparBuffer();

                    switch (select){
                        case 'C':
                            c = (f - 32)/1.8;
                            printf("\n\n%.2f graus Fahrenheint equivalem a %.2f graus Celsius.\n", f, c);
                            break;

                        case 'K':
                            k = (f - 32)*5/9 + 273;
                            printf("\n\n%.2f graus Fahrenheint equivalem a %.2f graus Kelvin.\n", f, k);
                            break;

                        default:
                            printf("\nOpção inválida.\n");
                    }
                } while ((select != 'K')&&(select != 'C'));

                break;

            case 'K':
                do {
                    printf("Digite a temperatura em Kelvin: ");
                    scanf(" %f", &k);
                    limparBuffer();
                    printf("Digite F para converter para Fahrenheint ou C para Celsius: ");
                    select = getchar();
                    limparBuffer();

                    switch (select){
                        case 'F':
                            f = (k - 273)*1.8 + 32;
                            printf("\n\n%.2f graus Kelvin equivalem a %.2f graus Fahrenheint.\n", k, f);
                            break;

                        case 'C':
                            c = k - 273;
                            printf("\n\n%.2f graus Kelvin equivalem a %.2f graus Celsius.\n", k, c);
                            break;

                        default:
                            printf("\nOpção inválida.\n");
                    }
                } while ((select != 'F')&&(select != 'C'));

                break;

            default:
                printf("\nOpção inválida.\n");
        }

    } while ((select != 'C')&&(select != 'F')&&(select != 'K'));

    system("pause");
    return 0;
}

void limparBuffer(void){
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
}
