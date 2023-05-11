//sequencia de Fibonacci
#include <stdio.h>
#include <locale.h>

int main() {
    int n, termo1 = 0, termo2 = 1, i;
    setlocale(0, "Portuguese");

    printf("Digite a quantidade de termos da sequência de Fibonacci para serem exibidos: ");
    scanf("%d", &n);
    printf("\n");

    //cálculo da sequência de Fibonacci
    for (i = 1; i <= n; i++) {
        if (i == 1)
            printf("%d - ", termo1);

        else if (i == 2)
            printf("%d - ", termo2);
        
        else if (i % 2 != 0) {
            termo1 += termo2;
            printf("%d - ", termo1);
        }

        else if (i % 2 == 0) {
            termo2 += termo1;
            printf("%d - ", termo2);
        }
    }

    //verificação do valor digitado
    if (n <= 0)
        printf("Valor digitado é inválido.\n");
    
    //formatação dos últimos caracteres
    else
        printf("\b\b \n");
    
    return 0;
}