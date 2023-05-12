#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    int i, x, n, produto;
    setlocale(0, "Portuguese");

    printf("Digite a constante da tabuada: ");
    scanf("%d", &x);
    printf("Digite o valor limite da tabuada: ");
    scanf("%d", &n);
    printf("\n\nMúltiplos de %d de 0 a %d: ", x, n);

    for (i = 0; i <= n; i++) {
        produto = x * i;
        printf("%d, ", produto);
    }

    printf("\b\b.\n\n");

    system("pause");
    return 0;
}