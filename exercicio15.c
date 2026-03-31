//exercicio15
#include <stdio.h>
#define MAX 100

int main()
{
   int vEntrada[MAX], entrada, i=0, num = 0;

   printf("--> Digite os valores desejados entre 3 e 7, digite '0' para parar!\n");
   printf("Insira o primeiro valor : ");
   scanf("%d", &entrada);


   while (entrada != 0) {
      if (entrada >2 && entrada <8) {
         vEntrada[num] = entrada;
         num++;
         printf("ok!\n");
      }

      else {
         printf("Err!\n");
      }

      printf("Insira o proximo valor  : ");
      scanf("%d", &entrada);
   }

   printf("Valores guardados :  \n");
   for (i=0; i<num; i++ )
      printf("%d ", vEntrada[i]);

}





