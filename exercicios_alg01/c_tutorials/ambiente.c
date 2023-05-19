#include <stdio.h>
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

    return 0;
}