#include <stdio.h>
#include <ctype.h>//library to manipulate caracters 

int main() {
    char unidade;
    float f, c;

    printf("Is the temperature in (F) or (C)?\n: ");
    scanf("%c", &unidade);

    //convert the given caracter to uppercase
    unidade = toupper(unidade);

    switch (unidade) {
        case 'C':
            printf("Enter the temperature in celsius: ");
            scanf("%f", &c);

            f = c*9/5 + 32;

            printf("\nThe given temperature converted to fahrenheint is %.2f", f);
            break;
        case 'F':
            printf("Enter the temperature in fahrenheint: ");
            scanf("%f", &f);

            c = (f-32)*5/9;

            printf("\nThe given temperature converted to celsius is %.2f", c);
            break;
        default:
            printf("\nPlease, enter a valid unit.");
    }

    return 0;
}