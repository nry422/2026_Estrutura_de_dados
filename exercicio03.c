//exercicio03
#include <stdio.h>
#define MAX 5

int main()
{
   int i, v1[MAX], v2[MAX], vs[MAX];

   for (i=0; i<MAX; i++) {
      printf("insira o valor do vetor 1\n");
      scanf("%d", &v1[i]);
   }
   for (i=0; i<MAX; i++) {
      printf("insira o valor do vetor 2\n");
      scanf("%d", &v2[i]);
   }

   printf("Vetor 1...:");
   for (i=0; i<MAX; i++) {
      printf("%3d ", v1[i]);
   }
   printf("\n");
   printf("Vetor 2...:");
   for (i=0; i<MAX; i++) {
      printf("%3d ", v2[i]);
   }
   printf("\n");
   for (i=0; i<MAX; i++) {
      vs[i] = v1[i] + v2[i];
   }
   printf("Vetor Soma:");
   for (i=0; i<MAX; i++) {
      printf("%3d ", vs[i]);
   }
}
