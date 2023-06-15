#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
    int j, contador = 0;

    for (int i = 0; i < 12; i++) {
        contador = 0;
        printf("Enter the month in number: ");
        scanf("%d", &j);

        if (((j % 7) % 2 != 0) || j == 7)
            contador += 31;
        
        else    
            contador += 30;
        
        printf("The given month has %d days.", contador);
        system("pause");
        system("cls");
    }
 
    return 0;   
}