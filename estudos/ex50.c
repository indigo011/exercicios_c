#include <stdio.h>

int main(){
    int anoAtual, idade;

    printf("Informe o ano atual: ");
    scanf("%d", &anoAtual);
    printf("Informe a sua idade: ");
    scanf("%d", &idade);

    printf("\nAno de nascimento: %d", anoAtual-idade);
    return 0;
}