#include <stdio.h>
#include <math.h>

int main() {
    int i, j;
    float S, X, fatorial = 1;

    printf("Digite o valor de X: ");
    scanf("%f", &X);

    S = X;

    for (i = 2; i <= 20; i += 2) {
        for (j = 1; j <= i + 1; j++) {
            fatorial *= j;
        }

        if (i == 2)
            S -= pow(i, X)/fatorial;
        
        else
            S += pow(i, X)/fatorial;
    }

    printf("\nS = %.2f", S);

    return 0;
}