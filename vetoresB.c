//vetoresB
#include <stdio.h>
#define MAX 2

int main()
{
   int i; //indice / apontador
   double nota[MAX], acum=0, media;
   char nome[MAX][50];

   for (i=0; i<MAX; i++) {
      printf("informe o nome: ");
      scanf(" %[^\n]s", &nome[i]);
      printf("informe a nota: ");
      scanf("%lf", &nota[i]);
      printf("\n");


   }

   for (i=0; i<MAX; i++) {
      acum = acum + nota[i];
      printf("[%d] %s = %.2lf\n", i, nome[i], nota[i]);

   }

   media = acum / i;
   printf("nota media = %.2lf\n\n\n", media);

   printf("nota acima da media: \n\n");

   for (i=0; i<MAX; i++) {
      if(nota[i] > media) {

         printf("[%d]= %s %.2lf\n",i, nome[i], nota[i]);
      }
   }


}
