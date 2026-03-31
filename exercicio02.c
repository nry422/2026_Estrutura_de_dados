//exercicio02
#include <stdio.h>
#define MAX 10

int main()

{
   int i, impar=0, par=0, vNum[MAX];

   for (i=0; i<MAX; i++) {
      printf("insira o numero \n");
      scanf("%d", &vNum[i]);

      if (vNum[i] % 2 == 0) {
         printf("%d par\n", vNum[i]);
         par++;
      }
      else {
         printf ("%d impar\n", vNum[i]);
         impar++;
      }
   }
   printf("impares %d\n", impar);
   printf("pares %d\n", par);


   return 0;
}
