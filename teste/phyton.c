#include <stdio.h>
#include "phyton.h"

void dinput(char string[], int *variavel)  {
    printf("%s", string);
    scanf("%d", variavel);
}

void finput(char string[], float *variavel)  {
    printf("%s", string);
    scanf("%f", variavel);
}

void cinput(char string[], char *variavel)  {
    printf("%s", string);
    scanf("%c", variavel);
}

void sinput(char string[], char *variavel[])  {
    printf("%s", string);
    scanf("%d", variavel);
}