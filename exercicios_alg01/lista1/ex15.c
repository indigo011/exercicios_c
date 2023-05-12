#include <stdio.h>

int main() {
    int i;
    float pi = 4, j = 3;

    for (i = 1; 4/j >= 0.0001; i++) {
        if (i % 2 != 0)
            pi -= 4/j;
        
        else
            pi += 4/j;
        
        j += 2;
    }

    printf("pi = %.4f", pi);

    return 0;
}