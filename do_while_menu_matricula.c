#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100

int opcao()
{
   system("pause");
   system("cls");
   int op;
   printf("Matriculas de alunos\nInsira a opcao:\n [0] Sair\n [1] Incluir\n [2] Listar\n [3] Buscar\n [4] Gerar Arquivo CSV\n [5] Carregar Arquivo\n Sua opcao : ");
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

void firula(int i)
{
   if (i%4==0) printf("-");
   if (i%4==1) printf("\\");
   if (i%4==2) printf("|");
   if (i%4==3) printf("/");
   Sleep(150);
   printf("\b");
}

void meuStrToUpper(char *str)
{
   for (int i=0; i<strlen(str); i++) {
      if(str[i]>='a' && str[i]<='z') {
         str[i] -= 32;
      }
   }
}

int main()
{
   int op, i, qtd=0, iMatr, encontrados=0;
   tAluno vAluno[MAX];
   char busca[MAX];
   char filename[] = "aluno.csv";
   FILE *file;

   do {
      op = opcao();

      switch (op) {
      case 1:
         printf("Inclusao\n");
         printf("Guardar dados dos alunos em struct com vetores no while\n Matricula = 0 para parar!\n\n\n");
         printf("Matricula: ");
         scanf("%d", &iMatr);

         while(iMatr != 0) {
            vAluno[qtd].matr = iMatr;

            printf("Nome: ");
            scanf(" %[^\n]", vAluno[qtd].nome);
            meuStrToUpper(vAluno[qtd].nome);
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

      case 3:
         encontrados = 0;
         printf("Buscar\n");
         printf("Digite aqui sua busca\n");
         scanf(" %[^\n]", busca);
         meuStrToUpper(busca);

         for(i = 0; i < qtd; i++) {
            if(strstr(vAluno[i].nome, busca) != NULL) {
               printf("Matricula : %d\n Nome : %s\n Sexo: %c\n Altura : %.2f\n", vAluno[i].matr, vAluno[i].nome, vAluno[i].sexo, vAluno[i].alt);
               encontrados++;
            }
         }

         if(encontrados == 0) {
            printf("Não foi encontrado!!\n");

         }
         else {
            printf("Total: %d Alunos Encontrados\n", encontrados);

         }
         break;

      case 4:
         printf("Gerando Arquivo CSV...");
         file = fopen(filename, "w");
         if (file==NULL) {
            printf("Erro ao abrir o arquivo $s!!!\n", filename);
            break;
         }
         for(i=0; i<qtd; i++) {
            fprintf(file, "%d;%s;%c;%.2f\n", vAluno[i].matr, vAluno[i].nome, vAluno[i].sexo, vAluno[i].alt);
            firula(i);
         }
         fclose(file);
         printf("Arquivo salvo com sucesso!!!\n");
         break;

      case 5:
         qtd = 0;
         printf("Carregando Arquivo...\n");
         file = fopen(filename, "r");

         if (file==NULL) {
            printf("Erro ao abrir o arquivo $s!!!\n", filename);
            break;
         }
         while (fscanf(file, "%d;%[^;];%c;%f\n",
                       &vAluno[qtd].matr, &vAluno[qtd].nome, &vAluno[qtd].sexo, &vAluno[qtd].alt) == 4) {
            printf("#");
            Sleep(50);
            qtd++;
         }
         printf("\n");
         fclose(file);
         printf("%d alunos carregados com sucesso!\n", qtd);
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

//adicionar carregar arquivo ao abrir e salvar ao sair com funcoes para cada
