#include <stdio.h>
#include <string.h>

int main()
{
    char nome[10] = "gato", nome2[10];

    //copiando uma string
    strcpy(nome2, nome);

    printf("%s\n%s", nome, nome2);

    //concatenando strings
    strcat(nome2, "+", nome);
    printf("\n\n%s", nome2);

    return 0;
}