#include <stdio.h>
#include <math.h>

int main() {
    long int popA, popB;
    int anos = 0;

    popA = 90 * pow(10, 6);
    popB = 200 * pow(10, 6);

    while (popA < popB) {
        popA *= 1.03;
        popB *= 1.015;
        anos++;
    }

    printf("Anos necessarios para a populacao A ultrapassar ou igualar a populacao B: %d", anos);

    return 0;
}