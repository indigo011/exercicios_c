#include <stdio.h>
#include <stdbool.h>

int main()
{
    int idade1 = 22, idade2 = 30, dia_mes = 31;
    char nome[] = "Nicolas", cep[] = "79490-000", telefone[] = "65998135598";
    float salario = 1500, altura = 1.79, preco_mercadoria = 30.00, media_idade;
    char genero = 'M';
    bool isCadastrado = false;

    media_idade = (float)(idade1 + idade2)/2;

    printf("Idade 1: %d\n", idade1);
    printf("Idade 2: %d\n", idade2);
    printf("Media das idades: %f\n", media_idade);
    printf("Nome: %s\n", nome);
    printf("Genero: %c\n", genero);
    printf("Altura: %.2fcm\n", altura);
    printf("Salario: R$ %f\n", salario);
    printf("CEP: %s\n", cep);
    printf("Telefone: %s\n", telefone);
    printf("Preco da mercadoria: %.2f\n", preco_mercadoria);

    return 0;
}