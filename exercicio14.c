//exercicio14
#include <stdio.h>
#define MAX 10

void printVetor(int v[], int q)
{
   for (int i=0; i<q; i++) {
      printf("%d ", v[i]);
   }
   printf("\n");
}

int main()
{
   int vNum[MAX], num, i, qtd=0;
   int vPar[MAX], vImp[MAX];
   int qPar=0, qImp=0;

   printf("Insira o primeiro valor : ");
   scanf("%d", &num);

   while (num != 0) {

      vNum[qtd] = num;
      qtd++;
      printf("Insira o proximo valor : ");
      scanf("%d", &num);

   }

   for (i=0; i<qtd; i++) {
      if (vNum[i] % 2 == 0) {
         //par
         vPar[qPar] = vNum[i];
         qPar++;

      }
      else {
         //impar
         vImp[qImp]= vNum[i];
         qImp++;

      }

   }
   printVetor(vPar, qPar);
   printVetor(vImp, qImp);



}
