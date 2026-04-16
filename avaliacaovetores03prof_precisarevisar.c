#include <stdio.h>
#define MAX 100

void printVetor(int v[, int n])
{
         for (int i=0; i<n; i++){
            printf("%d ", v[i]);
         }
         printf("\n");

}

int main(){
   char palavra[MAX];
   int i, valor, tam, pos;
   char letra;

   printf("palavra: ");
   scanf("%s", &palavra);
   tam = strlen(palavra);

  printf("letra:" );
  scanf(" %c", &letra)

  for (i=0; i<tam; i++){
   if (palavra[i]==letra) {
      pos= i;
      break;
   }
  }
   printf ("pos %d\n")
   printVetor(vetor, qtd);

   int meio = qtd / 2;

   printf("meio = %d\n", vetor[meio]);

   for (i=meio; i<qtd; i++){
      vetor[i] = vetor[i+1];

   }
   qtd--;
   printVetor(vetor, qtd);

}
