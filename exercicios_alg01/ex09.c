#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    int i, n, soma = 0;
    setlocale(0, "Portuguese");

    printf("Digite um expoente inteiro e positivo.\nO programa calcular� o somat�rio de 3^0 a 3^n, sendo n o expoente informado.");
    scanf("%d", &n);

    if (n < 0)
        printf("Valor digitado � inv�lido.\n");
    else {
        for (i = 0; i <= n; i++) {
            soma += pow(3, i);
        }

        printf("O somat�rio de 3^0 a 3^%d � %d.\n", n, soma);
    }

    printf("\nPROGRAMA ENCERRADO.\n");
    return 0;
}