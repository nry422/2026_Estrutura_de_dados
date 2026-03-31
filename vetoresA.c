//vetoresA
#include <stdio.h>
#define MAX 7

int main()
{
   int i; //indice / apontador
   double temp[MAX] = {22.5, 24.3, 26.7, 27.9, 29.5, 31.0, 22.2}, acum=0, media;

   for (i=0; i<MAX; i++) {
         acum = acum + temp[i];
      printf("[%d] = %.2lf\n", i, temp[i]);

   }

   media = acum / i;
   printf("Temp media = %.2lf\n\n\n", media);

   printf("Temp acima da media: \n\n");

   for (i=0; i<MAX; i++) {
      if(temp[i] > media){

         printf("[%d]= %.2lf\n",i, temp[i]);
      }
   }


}
