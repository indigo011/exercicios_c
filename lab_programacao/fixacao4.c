#include <stdio.h>

int main()
{
    char sexo, nome[101];
    int idade;
    float salario;

    //recebendo dados
    printf("Digite o seu nome: ");
    scanf(" %[^\n]s", nome);
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite o seu salario: ");
    scanf("%.2f", &salario);
    printf("Digite o seu sexo: ");
    scanf(" %c", &sexo);

    //imprimindo dados
    printf("\n\nDados fornecidos ------------\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Salario: %f\n", salario);
    printf("Sexo: %c\n", sexo);

    return 0;
}