#include <stdio.h>
<<<<<<< HEAD
#include <string.h>
//#include <string.h>

int main() {
    char nome[25];
    char sobrenome[25];

    printf("Digite o seu nome: ");
    fgets(nome, 25, stdin);
    nome[strlen(nome)-1] = ' ';
    printf("Digite o seu sobrenome: ");
    fgets(sobrenome, 25, stdin);

    strcat(nome, sobrenome);
    puts(nome);
=======
#include <locale.h>
//teste de vetores
int main() {
    int i;
    float notas[4], media;

    setlocale(0, "Portuguese");

    //calculando a media das notas
    for (i = 0; i < 4; i++) {
        printf("Entre com a %dª nota: ", i+1);
        scanf("%f", &notas[i]);

        media += notas[i];
    }

    media /= (i+1);

    printf("\n\nA média das notas é %.2f.", media);

    if (media < 5)
        printf("\nVocê foi reprovado.");
    else
        printf("Você foi aprovado.");

>>>>>>> ff30528fd2dfbc79bf529b87fb33b037afaaf2ab
    return 0;
}