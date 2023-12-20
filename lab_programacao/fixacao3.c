#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int idade1, idade2, dia_mes;
    char nome[60], cep[11], telefone[13];
    float salario, altura, preco_mercadoria, media_idade;
    char genero;
    bool isCadastrado;

    //entrada dos dados
    printf("Entre com a idade 1: ");
    scanf(" %d", &idade1);
    printf("Entre com a idade 2: ");
    scanf(" %d", &idade2);
    printf("Entre com o nome do usuario: ");
    scanf(" %[^\n]s", nome);
    printf("Entre com o genero: ");
    scanf(" %c", &genero);
    printf("Entre com o salario: ");
    scanf("%f", &salario);
    printf("Entre com a altura do usuario: ");
    scanf("%f", &altura);
    printf("Entre com a qtd. de dias do mes vigente: ");
    scanf("%d", &dia_mes);
    printf("Entre com o valor da mercadoria: ");
    scanf("%f", &preco_mercadoria);
    printf("Entre com o CEP: ");
    scanf(" %[^\n]s", cep);
    printf("Entre com o telefone: ");
    scanf(" %[^\n]s", telefone);


    media_idade = (float)(idade1 + idade2)/2;

    printf("\n\nDados obtidos -------\n");
    printf("Idade 2: %d\n", idade2);
    printf("Media das idades: %.2f\n", media_idade);
    printf("Nome: %s\n", nome);
    printf("Genero: %c\n", genero);
    printf("Altura: %.2fcm\n", altura);
    printf("Salario: R$ %.2f\n", salario);
    printf("CEP: %s\n", cep);
    printf("Telefone: %s\n", telefone);
    printf("Preco da mercadoria: %.2f\n", preco_mercadoria);

    return 0;
}