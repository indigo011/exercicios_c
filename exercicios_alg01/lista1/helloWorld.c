#include <stdio.h>
#include <string.h>


int main() {
    char nome[25];

    printf("Enter your name: ");
    fgets(nome, 25, stdin);
    nome[strlen(nome)-1] = '\0';

    printf("Hello, %s. How are you?", nome);
    

    printf("\nNão entendo suas motivações, jovem gafanhoto.");
    return 0;
}