#include <stdio.h>
#include <string.h>

int main() {
    printf("N\t10*N\t100*N\t1000*N\n");

    for (int i = 1; i <= 10; i++) {
        printf("%d\t%d\t%d\t%d\n", i, i * 10, i * 100, i * 1000);
        
        int totalLength = 8 + strlen("10*N\t100*N\t1000*N") + 3 * strlen("\t") + 4 * strlen("-------");
        for (int j = 0; j < totalLength; j++) {
            printf("-");
        }
        
        printf("\n");
    }
    
    return 0;
}