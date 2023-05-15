#include <stdio.h>
#include <string.h>

int main() {
    char nome[25];

    printf("Type your name: ");
    fgets(nome, 25, stdin);

    printf("\nHello, %s! How are you?", nome);
    return 0;
}