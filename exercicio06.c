//exercicio06
#include <stdio.h>
#define MAX 100

int main()
{
   int vEntrada[MAX], entrada, mult, i, num=0, multde, ctdvet, vet02, multvet[ctdvet];

   printf("Insira o valor : \n");
   scanf("%d", &entrada);

   while (entrada != 0) {

      vEntrada[num] = entrada;
      printf("Insira o valor : \n");
      scanf("%d", &entrada);
      num++;
   }

   ctdvet = num -1;

   printf("Voce quer os multiplos de .... \n");
   scanf("%d", &multde);

   printf("Multiplo de %d  \n", multde);
   for (i=0; i<num; i++) {
      if (vEntrada[i] % multde == 0) {
         //printf("  %d   ", vEntrada[i]);
         multvet[i] = vEntrada[i];
      }
   }
}
