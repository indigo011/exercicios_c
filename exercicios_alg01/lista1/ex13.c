#include <stdio.h>

int main(){
    int n, i;
    float s, fatorial;

    s = fatorial = i = 1; //inicializando variáveis

    printf("Digite um numero inteiro maior que zero: ");
    scanf("%d", &n);

    //calculando o fatorial
    while (i <= n) {
        fatorial *= i;
        s += 1/fatorial; //calculando s
        i++;
    }

    if (n < 1) //restrições
        printf("\nValor inválido.");

    printf("\nS = %.2f", s);

    return 0;
}