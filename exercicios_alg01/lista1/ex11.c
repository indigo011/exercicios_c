#include <stdio.h>
#include <locale.h>

int main(){
    int i = 0, num, votos[6] = {0};
    setlocale(0, "Portuguese");

    printf("Digite o número correspondente para alguma das opções abaixo.\n\n");
    printf("(1) Candidato 1\n(2) Candidato 2\n(3) Candidato 3\n(4) Candidato 4\n(5) Voto nulo\n(6) Voto em branco\n(0) Sair\n\n---> ");
    scanf("%d", &num);

    while (num != 0) {
        switch (num) {
            case 1:
                votos[0]++;
                break;
            case 2:
                votos[1]++;
                break;
            case 3:
                votos[2]++;
                break;
            case 4:
                votos[3]++;
                break;
            case 5:
                votos[4]++;
                break;
            case 6:
                votos[5]++;
                break;
            default:
                printf("Opção inválida.\n");
        }

        printf("Digite o número correspondente para alguma das opções abaixo.\n\n");
        printf("(1) Candidato 1\n(2) Candidato 2\n(3) Candidato 3\n(4) Candidato 4\n(5) Voto nulo\n(6) Voto em branco\n(0) Sair\n\n---> ");
        scanf("%d", &num);
    }

    if (i != 0) {
        printf("\n\n---------------\n\n");
        printf("RESULTADOS:\n");

        for (i = 0; i < 4; i++) {
            printf("Candidato %d: %d\n", i+1, votos[i]);
        }

        printf("Votos nulos: %d\nVotos em branco: %d\n", votos[4], votos[5]);
    }
    
    return 0;
}