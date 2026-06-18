#include <stdio.h>
#include <stdlib.h>

void print_vetor(int v[], int qtd)
{
   for (int i=0; i<qtd; i++) {
      printf("%d ", v[i]);
   }
   printf("\n");
}
int main()
{
   int i, j, temp, qtd, v[] = {5,4,3,2,1};
   qtd = sizeof(v) / sizeof(v[0]);
   int trocas = 0;
   int ifs = 0;

   print_vetor(v, qtd);

   for (j=0; j < qtd-1; j++) {

      for (i=0; i<qtd-1-j; i++) {
            ifs++;
         if (v[i] > v[i+1]) {
            trocas++;
            temp = v[i];
            v[i] = v[i+1];
            v[i+1] = temp;
            print_vetor(v, qtd);

         }
      }
   }
   printf("ifs = %d\n", ifs);
   printf("trocas = %d\n", trocas);
}

//strcmp

//https://www.youtube.com/watch?v=Iv3vgjM8Pv4&list=RDIv3vgjM8Pv4&start_radio=1
