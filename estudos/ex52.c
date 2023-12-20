#include <stdio.h>
#define QTD_APOST 3
int main() {
    float apostadores[QTD_APOST], valorPremio, soma = 0;

    for (int i = 0; i < QTD_APOST; i++){
        printf("Informe o valor investido pelo apostador %d: ", i+1);
        scanf("%f", &apostadores[i]);
        soma += apostadores[i];
    }

    printf("Informe o valor do premio: ");
    scanf("%f", &valorPremio);
    float k = valorPremio/soma;

    printf("\n%30s%20s\n\n", "Valor Investido", "Valor recebido");
    
    for (int i = 0; i < QTD_APOST; i++) {
        printf("Apostador %d:%16.2f%20.2f\n", i+1, apostadores[i], apostadores[i]*k);
    }

    return 0;
}