//entrada: 115 valores inteiros
//saida: o sistema informa o segundo maior valor e a qtd de valores distintos
//processamento: dois loops para verificar valores distintos, o primeiro valor � o maior valor
#include <stdio.h>
#include <locale.h>
#define N 10

int main() {
    int i, j, maiorValor, segundoMaiorValor, valoresDistintos = 0, verificador = 0;
    int valores[N];

    setlocale(0, "Portuguese");

    printf("Digite o 1º valor inteiro: ");
    scanf("%d", &valores[0]);

    maiorValor = segundoMaiorValor = valores[0];

    for (i = 1; i < N; i++) {
        printf("Digite o %dº valor inteiro: ", i+1);
        scanf("%d", &valores[i]);

        //definindo o segundo maior valor
        if (valores[i] > maiorValor) {
            segundoMaiorValor = maiorValor;
            maiorValor = valores[i];
        }
            
        else if (valores[i] > segundoMaiorValor)
            segundoMaiorValor = valores[i];
    }

    //contando numeros distintos
    for (i = 0; i < N; i++) {
        for (j = i+1; j < N; j++) {
            if (valores[i] == valores[j])
                verificador++;
        }

        if (verificador == 0) 
            valoresDistintos++; 
        
        verificador = 0;
    }

    printf("\nSegundo maior valor: %d", segundoMaiorValor);
    printf("\nQtd de valores distintos: %d", valoresDistintos);
    return 0;
}