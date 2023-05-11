#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    char nome[15];
    unsigned int idade;
    char sexo;

    setlocale(LC_ALL, "Portuguese");
    setlocale(LC_CTYPE, "UTF-8");

    printf("Digite o seu nome: ");
    fgets(nome, 15, stdin);
    fflush(stdin);
    printf("Digite a sua idade: ");
    scanf("%u", &idade);

    do {
        printf("Digite (M) para masculino e F para feminino: ");
        fflush(stdin);
        sexo = getchar();

        if ((sexo != 'M')&&(sexo != 'F'))
            printf("Caractere inválido. Tente novamente.\n\n");

    } while ((sexo != 'M')&&(sexo != 'F'));

    printf("Seu nome é: %s, você tem %u anos e o sexo informado é ", nome, idade);

    if (sexo == 'M')
        printf("masculino.\n");
    else
        printf("feminino.\n");

    system("pause");
    return 0;
}
