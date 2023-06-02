#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void dormir() {
   int i;

   printf("\nJoao Victor dorme\n");
   
   for (i = 1; i <= 3; i++) {
      printf("Zzzzz\n");
   }
}

void acordar() {
   printf("\nJoao Victor acorda");
   printf("\nJoao Victor está com sono. Clique enter para dormir\n");
}

int main() {
   int i;

   setlocale(0, "Portuguese");
   
   for (i = 1; i <= 1;) {
      acordar();
      system("pause");
      dormir();
      system("pause");
   }

   return 0;
}