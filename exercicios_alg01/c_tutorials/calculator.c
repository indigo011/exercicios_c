#include <stdio.h>
#include <math.h>

//calculator program
int main() {
    float a, b, result = 0;
    char operator;
    //void cleanBuffer();

    printf("Enter the value: ");
    scanf(" %f", &a);
    printf("\n-------------\n");
    printf("%f\n\n", a);
    printf("\t+\t-\t\n\n\tx\t/\n");
    printf("Enter one of the operators above: \n");
    scanf(" %c", &operator);
    //cleanBuffer();
    printf("\n-------------\n");
    printf("%f %c\n\n", a, operator);
    printf("Enter the value\n");
    scanf(" %f", &b);
    printf("\n-------------\n");
    printf("%f %c %f = \n\n", a, operator, b);

    switch (operator) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case 'x': 
            result = a * b;
            break;
        case '/':
            if (b == 0)
                printf("\nError: cannot divide.\n");
            else 
                result = a / b;

            break;
        default:
            printf("\nInvalid operator.\n");
    }

    printf("%f\n", result);
    return 0;
}

/*void cleanBuffer(void) {
    char c;
    while ((c = getchar()) != '\n' && c != 'EOF');
} */