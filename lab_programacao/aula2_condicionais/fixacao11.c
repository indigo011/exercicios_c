#include <stdio.h>

int main()
{
    float subtotal, total;
    int codigoDesconto;

    printf("Informe o valor do produto: ");
    scanf("%f", &subtotal);

    do
    {
        printf("\nInforme o codigo de desconto: ");
        scanf("%d", &codigoDesconto);

        switch (codigoDesconto)
        {
            case 33:
                total = subtotal*0.90;
                break;

            case 77:
                total = subtotal*0.80;
                break;
            
            case 230:
                if (subtotal > 100.00)
                    total = subtotal*0.70;
                else
                    total = subtotal*0.75;
                break;

            default:
                printf("\nO codigo informado eh invalido.");
        }

    } while (codigoDesconto != 33 && codigoDesconto != 77 && codigoDesconto != 230);

    printf("\nSubtotal:%10.2f\n", subtotal);
    printf("\nDesconto aplicado:%10.2f\n", subtotal - total);
    printf("\nTotal:%10.2f\n", total);

    return 0;
}