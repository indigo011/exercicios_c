#include <stdio.h>
#include <stdlib.h>

int main(void){
    char nome[6];
    int cont;

    printf("Digite o seu nome: ");
    scanf("%s", nome);
    printf("\n\nBem-vindo(a), \n");

    for (cont=0;cont < 6; cont++) {
        printf("%c\n\n", nome[cont]);
    }
    system("pause");

    return 0;
}
