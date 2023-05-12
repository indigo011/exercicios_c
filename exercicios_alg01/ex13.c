#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, fatorial, n;
    float s = 1;

    printf("Digite um valor inteiro maior que zero: ");
    scanf("%d", &n);

    //verificação do n != 0  
    if (n <= 0) 
        printf("\nValor invalido!\n");
    
    else {
        //cálculo de cada termo do S
        for (i = 1; i <= n; i++) {
            if (i == 1)
                s++;
            
            else {
                fatorial = i;

                //cálculo do fatorial
                for (j = i - 1; j >= 1; j--) {
                    fatorial *= j;
                }

                s += 1/fatorial;
            }
        }

        printf("\n\nS = %.2f\n", s);
    }

    system("pause");
    return 0;
}
