#include <stdio.h>
#define MAX 100

int opcao()
{
   int op;
   printf("Matriculas de alunos\nInsira a opcao:\n [0] para sair\n [1] para incluir\n [2] para listar\n Opcao : ");
   scanf("%d", &op);
   system("cls");
   return op;
}

typedef struct {
   int matr;
   char nome[50];
   char sexo;
   float alt;
} tAluno;

int main()
{
   int op, i, qtd=0, iMatr;
   tAluno vAluno[MAX];

   do {
      op = opcao();

      switch (op) {
      case 1:
         printf("Inclusao\n");
         printf("Guardar dados dos alunos em struct com vetores no while\n Matricula = 0 para parar!\n\n\n");
         printf("Matricula: ");
         scanf("%d", &iMatr);

         while(iMatr != 0) {
            vAluno[i].matr= iMatr;

            printf("Nome: ");
            scanf(" %[^\n]", &vAluno[qtd].nome);
            printf("Sexo: ");
            scanf(" %c", &vAluno[qtd].sexo);
            printf("Altura: ");
            scanf("%f", &vAluno[qtd].alt);

            qtd++;
            //proximo loop
            printf("Matricula:");
            scanf("%d", &iMatr);
         }

         break;


      case 2:
         printf("Listar\n");
         for(i=0; i<qtd; i++) {
            printf("%d, %s, %c, %.2f.\n", vAluno[i].matr, vAluno[i].nome, vAluno[i].sexo, vAluno[i].alt);
         }

         break;

      case 0:
         printf("Saindo...\n");
         break;

      default:
         printf("opcao invalida");
      }
   }
   while (op != 0);
}

