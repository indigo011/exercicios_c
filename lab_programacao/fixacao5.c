#include <stdio.h>

int main()
{
    float trab_lab, avaliacao_semestral, exame_final, media;

    //recebendo os dados
    printf("Digite a nota do trabalho de laboratorio: ");
    scanf("%f", &trab_lab);
    printf("Digite a nota da avaliacao semestral: ");
    scanf("%f", &avaliacao_semestral);
    printf("Digite a nota do exame final: ");
    scanf("%f", &exame_final);

    //calculando a media ponderada
    media = (trab_lab*2 + avaliacao_semestral*3 + exame_final*5)/10;

    //imprimindo os dados
    printf("\nMedia final: %.2f", media);

    return 0;
}