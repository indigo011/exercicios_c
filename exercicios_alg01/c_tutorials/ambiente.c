#include <stdio.h>
#include <string.h>
//#include <string.h>

int main() {
    char nome[25];
    char sobrenome[25];

    printf("Digite o seu nome: ");
    fgets(nome, 25, stdin);
    nome[strlen(nome)-1] = ' ';
    printf("Digite o seu sobrenome: ");
    fgets(sobrenome, 25, stdin);

    strcat(nome, sobrenome);
    puts(nome);
    return 0;
}