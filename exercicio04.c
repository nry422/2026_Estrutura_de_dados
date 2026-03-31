//exercicio04
#include <stdio.h>
#define MAX 25

int main()
{
   int vNum[MAX], i, ocup=0, num;

   printf("insira o numero  ");
   scanf("%d", &num);

   while (num != 0) {
      vNum[ocup] = num;
      ocup++;

      printf("insira o numero  ");
      scanf("%d", &num);





   }

   printf("numerors %d\n", ocup);


   for (i=ocup-1; i >= 0; i--) {
      printf("%d  ", vNum[i]);

   }
}
