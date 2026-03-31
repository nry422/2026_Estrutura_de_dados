//exercicio08
#include <stdio.h>
#define MAX 100

int main()
{
   int vEntrada[MAX], entrada, i, num=0, buscar, parar;

   printf("---Digite os valores desejados, digite '0' para parar!\n");
   printf("Insira o primeiro valor : ");
   scanf("%d", &entrada);

   if (entrada == 0) {
      printf("--Valor e 0!\n Deseja realmente parar o progarama? \n 1=Sim, 2=Nao");
      scanf("%d", &parar);

      if(parar == 1) {
         return 0;
      } else {
      printf("Insira o primeiro valor : ");
      scanf("%d", &entrada);
   }
   }

   while (entrada != 0) {

      vEntrada[num] = entrada;
      printf("Insira o proximo valor : ");
      scanf("%d", &entrada);
      num++;
   }

   printf("Valor que deseja buscar : ");
   scanf("%d", &buscar);


   for (i=0; i<num; i++) {
      if (vEntrada[i] == buscar) {
         printf("---Valor encontrado--- \n");
         printf("Posicao : %d \nValor : %d  ", i, vEntrada[i]);

      }
   }
}

