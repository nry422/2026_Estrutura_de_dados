#include <stdio.h>
#define MAX 100

typedef struct {
   int matr;
   char nome[50];
   char sexo;
   float altura;
} tAluno;

int main()
{
   int i, qtd;
   tAluno vetAlu[MAX];

   printf("quantos alunos? ");
   scanf("%d", &qtd);

   for (i=0; i<qtd; i++) {
      printf("matr ");
      scanf("%d", &vetAlu[i].matr);

      fflush(stdin);
      printf("nome ");
      gets(vetAlu[i].nome);

      printf("sexo  ");
      scanf(" %c", &vetAlu[i].sexo);

      printf("altura  ");
      scanf("%f", &vetAlu[i].altura);

   }

   for (i=0; i<qtd; i++) {
      printf("%d %s %c %.2f\n",
             vetAlu[i].matr, vetAlu[i].nome,
             vetAlu[i].sexo, vetAlu[i].altura);


   }





}
