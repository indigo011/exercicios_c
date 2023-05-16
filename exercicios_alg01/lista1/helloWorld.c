#include <stdio.h>

char[] maioridade(int x) {
    return x >= 18 ? "Maior" : "Menor";
}

int main() {
    int idade;

    printf("Entre com sua idade: ");
    scanf("%d", &idade);

    maioridade(idade);
    return 0;
}