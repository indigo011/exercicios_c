#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    int ano, mes, dia, horas, minutos, segundos, aux;

    ano = mes = dia = horas = minutos = segundos = 0;

    printf("Digite o ano atual: ");
    scanf("%d", &ano);
    printf("Digite o ano de nascimento: ");
    scanf("%d", &aux);

    if (ano < aux)
        ano = ano - aux -1;
    else
        ano -= aux;

    printf("Digite o mês atual: ");
    scanf("%d", &mes);
    printf("Digite o mês de nascimento: ");
    scanf("%d", &aux);

    if (mes < aux)
        mes = 12 - aux + mes;
    else if (mes > aux)
        mes -= aux;

    printf("Digite o dia atual: ");
    scanf("%d", &dia);
    printf("Digite o dia de nascimento: ");
    scanf("%d", &aux);

    if (dia < aux)
        dia = 30 - aux + dia;
    else if (dia > aux)
        dia -= aux;

    printf("Digite a hora atual: ");
    scanf("%d", &dia);
    printf("Digite o dia de nascimento: ");
    scanf("%d", &aux);



    system("pause");
    return 0;
}
