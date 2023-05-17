//coroinha
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int age, i;
    setlocale(0, "Portuguese");

    printf("Entre com a idade do coroinha: ");
    scanf("%d", &age);

    i = age;

    while (i < 18) {
        printf("\nAh, não! Coroinha foi enrabado pelo padre.\n");
        i++;
        system("pause");
        printf("\nAgora coroinha tem %d anos.", i);
    }
    
    printf("\nNah! Já tá muito velho!");
    return 0;
}