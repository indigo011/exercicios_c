#include <stdio.h>
#include <locale.h>
//teste de vetores
int main() {
    int i;
    float notas[4], media;

    setlocale(0, "Portuguese");

    //calculando a media das notas
    for (i = 0; i < 4; i++) {
        printf("Entre com a %d� nota: ", i+1);
        scanf("%f", &notas[i]);

        media += notas[i];
    }

    media /= (i+1);

    printf("\n\nA m�dia das notas � %.2f.", media);

    if (media < 5)
        printf("\nVoc� foi reprovado.");
    else
        printf("Voc� foi aprovado.");

    return 0;
}