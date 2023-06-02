#include <stdio.h>

int main() {
    int votos[] = {2, 2, 3, 2, 1, 1, 1, 3, 1, 2, 1, 2, 1, 2, 1, 2, 3, 1, 2, 1, 1, 1, 1, 2};
    int tamanho = sizeof(votos)/sizeof(votos[0]);
}

//calculando a frequencia dos votos
int frequencia(int votos, int tamanho) {
    int i, j, candidatos[3] = {0};
    int maisVotado = 0;
    

    for (i = 0; i < tamanho; i++) {
        candidatos[votos[i]]++;
    }

    if 

    
}