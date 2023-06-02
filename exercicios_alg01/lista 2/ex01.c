//entrada: 20 numeros inteiros (2x)
//saida: o sistema deve informar se o usuário acertou ou fracassou a similaridade.
//processamento: se numeros iguais < 18, fracasso. Senão, sucesso
//restrições: somente numeros inteiros

#include <stdio.h>
#include <locale.h>

int main() {
    int sequencia1[20], sequencia2[20], score = 0, i;

    setlocale(0, "Portuguese");

    for (i = 0; i < 20; i++) {
        printf("Digite o %dº numero da sequencia (apenas inteiros): ", i+1);
        scanf("%d", &sequencia1[i]);
    }

    for (i = 0; i < 20; i++) {
        printf("Digite novamente o %dº numero da sequencia (apenas inteiros): ", i+1);
        scanf("%d", &sequencia2[i]);

        if (sequencia2[i] == sequencia1[i])
            score++;
    }

    if (score < 18)
        printf("\nFracasso na similaridade.");

    else
        printf("\nSucesso na similaridade.");
    
    return 0;  
}