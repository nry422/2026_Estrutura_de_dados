#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#define MAX 100


typedef struct
{
    int matr;
    char nome[50];
    char sexo;
    float alt;
} tAluno;


int opcao()
{
    system("pause");
    system("cls");
    int op;
    printf("+---------------------------+\n");
    printf("|   MATRICULAS DE ALUNOS    |\n");
    printf("+---------------------------+\n");
    printf("| [1] Incluir               |\n");
    printf("| [2] Listar                |\n");
    printf("| [3] Buscar                |\n");
    printf("| [4] Ordenar               |\n");
    printf("| [5] Excluir               |\n");
    printf("| [6] Editar                |\n");
    printf("+---------------------------+\n");
    printf("| [0] Salvar e sair         |\n");
    printf("+---------------------------+\n");
    printf(" Sua opcao: ");
    scanf("%d", &op);
    system("cls");
    return op;
}

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
    for (int i=0; i<strlen(str); i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] -= 32;
        }
    }
}

void fSalvar(tAluno vAluno[], int qtd, char *filename)
{
    FILE *file = fopen(filename, "w");
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo %s!!!\n", filename);
        return;
    }
    for (int i = 0; i < qtd; i++)
    {
        fprintf(file, "%d;%s;%c;%.2f\n", vAluno[i].matr, vAluno[i].nome, vAluno[i].sexo, vAluno[i].alt);
        firula(i);
    }
    fclose(file);
    printf("Arquivo salvo com sucesso!!!\n");
}

int fCarregar(tAluno vAluno [], char *filename)
{

    printf("Carregando Arquivo...\n");
    FILE *file = fopen(filename, "r");

    if (file==NULL)
    {
        printf("Nao foi encontrado o arquivo %s!!!\n", filename);
        return 0;
    }
    int qtd=0;
    while (fscanf(file, "%d;%[^;];%c;%f\n",
                  &vAluno[qtd].matr, vAluno[qtd].nome, &vAluno[qtd].sexo, &vAluno[qtd].alt) == 4)
    {
        printf("#");
        Sleep(50);
        qtd++;
    }
    printf("\n");
    fclose(file);
    printf("%d alunos carregados com sucesso!\n", qtd);
    return qtd;
}

int buscaMatricula(tAluno vAluno[], int qtd, int matrProcurada)
{
    int i = 0;

    while (i < qtd && vAluno[i].matr != matrProcurada)
    {
        i++;
    }

    if (i < qtd)
    {
        return i;
    }

    return -1;
}

int main()
{
    int op, i, qtd = 0, iMatr, encontrados=0, j, temp, maiorMatr = 0, matrExcluir, indiceEncontrado = -1, matrEditar, idEditar = -1;
    tAluno vAluno[MAX];
    char busca[MAX];
    char filename[] = "aluno.csv";


    qtd = fCarregar(vAluno, filename);

    do
    {
        op = opcao();

        switch (op)
        {
        case 1:
            printf("+-------------------------------------------------+\n");
            printf("|              Inclusao de Alunos                 |\n");
            printf("+-------------------------------------------------+\n");
            printf("|        Numero de matricula automatico!          |\n");
            printf("+-------------------------------------------------+\n");
            printf("|       [0] - Sair      |   [1] - Inserir         |\n");
            printf("+-------------------------------------------------+\n");
            printf("| Opcao: ");
            scanf("%d", &iMatr);

            while(iMatr != 0)
            {
                if (iMatr != 1)
                {
                    system("cls");
                    printf("Erro: Valor nao aceito, favor digitar 0 para sair ou 1 para inserir matricula!!!\n\n");
                    system("pause");
                    system("cls");

                }
                else
                {

                    for(i = 0; i < qtd; i++)
                    {
                        if(vAluno[i].matr > maiorMatr)
                        {
                            maiorMatr = vAluno[i].matr;
                        }
                    }

                    vAluno[qtd].matr = maiorMatr + 1;

                    printf("Nome: ");
                    scanf(" %[^\n]", vAluno[qtd].nome);
                    meuStrToUpper(vAluno[qtd].nome);
                    printf("Sexo: ");
                    scanf(" %c", &vAluno[qtd].sexo);
                    printf("Altura: ");
                    scanf("%f", &vAluno[qtd].alt);

                    qtd++;
                }
                //proximo loop
                printf("+-------------------------------------------------+\n");
                printf("|              Inclusao de Alunos                 |\n");
                printf("+-------------------------------------------------+\n");
                printf("|       [0] - Sair      |   [1] - Inserir         |\n");
                printf("+-------------------------------------------------+\n");
                printf("| Opcao: ");
                scanf("%d", &iMatr);
            }

            break;


        case 2:
            printf("+--------+---------------------------+------+--------+\n");
            printf("| Matr   | Nome                      | Sexo | Altura |\n");
            printf("+--------+---------------------------+------+--------+\n");
            for(i=0; i<qtd; i++)
            {
                printf("| %-6d | %-25s | %-4c | %-6.2f |\n",
                       vAluno[i].matr, vAluno[i].nome, vAluno[i].sexo, vAluno[i].alt);
            }
            printf("+--------+---------------------------+------+--------+\n");
            printf("%d alunos carregados com sucesso!\n", qtd);
            break;

        case 3:
            encontrados = 0;
            printf("+---------------------------+\n");
            printf("|          BUSCAR           |\n");
            printf("+---------------------------+\n");
            printf(" Digite sua busca: ");
            scanf(" %[^\n]", busca);
            meuStrToUpper(busca);
            system("cls");

            printf("+--------+---------------------------+------+--------+\n");
            printf("| Matr   | Nome                      | Sexo | Altura |\n");
            printf("+--------+---------------------------+------+--------+\n");
            for(i = 0; i < qtd; i++)
            {
                if(strstr(vAluno[i].nome, busca) != NULL)
                {
                    printf("| %-6d | %-25s | %-4c | %-6.2f |\n",
                           vAluno[i].matr, vAluno[i].nome, vAluno[i].sexo, vAluno[i].alt);
                    encontrados++;
                }
            }

            if(encontrados == 0)
                printf("+--------+---------------------------+------+--------+\n"
                       "| Nenhum aluno encontrado!                           |\n"
                       "+--------+---------------------------+------+--------+\n");
            else
                printf("+--------+---------------------------+------+--------+\n"
                       "| Total: %-3d aluno(s) encontrado(s)                 |\n"
                       "+--------+---------------------------+------+--------+\n", encontrados);
            break;

        case 4:

            for (j=0; j < qtd-1; j++)
            {

                for (i=0; i<qtd-1-j; i++)
                {

                    if (strcmp(vAluno[i].nome, vAluno[i+1].nome) > 0)   //se o valor da comparação for positivo o segundo nome vem antes em ordem alfabetica que o primeiro, então troca a posição
                    {
                        tAluno temp = vAluno[i];
                        vAluno[i] = vAluno[i+1];
                        vAluno[i+1] = temp;

                    }
                }
            }

            printf("Alunos foram ordenados pelo nome com sucesso!!\n");


            break;

        case 5:

            indiceEncontrado = -1;

            printf("Excluir Aluno\n");

            if (qtd == 0)
            {
                printf("Erro: Nenhum aluno cadastrado!\n");
                break;
            }

            printf("Digite a matricula para excluir: ");
            scanf("%d", &matrExcluir);

            indiceEncontrado = buscaMatricula(vAluno, qtd, matrExcluir);

            if (indiceEncontrado == -1)
            {
                printf("\nMatricula %d nao encontrada!\n", matrExcluir);
            }
            else
            {
                char confirmar;
                printf("\nAluno encontrado: %s\n", vAluno[indiceEncontrado].nome);
                printf("Tem certeza que deseja excluir? [S/N]: ");
                scanf(" %c", &confirmar);

                if (confirmar == 'S' || confirmar == 's')
                {
                    for (i = indiceEncontrado; i < qtd - 1; i++)
                    {
                        vAluno[i] = vAluno[i + 1];
                    }

                    qtd--;


                    printf("Aluno excluido com sucesso!\n");

                }
                else
                {
                    printf("\nExclusao cancelada.\n");
                }
            }
            break;

        case 6:

            idEditar = -1;

            printf("Editar Aluno\n");

            if (qtd == 0)
            {
                printf("Nenhum aluno cadastrado!\n");
                break;
            }

            printf("Digite a matricula do aluno para editar: ");
            scanf("%d", &matrEditar);

            idEditar = buscaMatricula(vAluno, qtd, matrEditar);

            if (idEditar == -1)
            {
                printf("\nMatricula %d nao encontrada!\n", matrEditar);
            }
            else
            {
                printf("\nDados Atuais do Aluno:\n");
                printf("Nome: %s\n", vAluno[idEditar].nome);
                printf("Sexo: %c\n", vAluno[idEditar].sexo);
                printf("Altura: %.2f\n", vAluno[idEditar].alt);

                printf("Digite os dados atualizados:\n");

                printf("Novo Nome: ");
                scanf(" %[^\n]", vAluno[idEditar].nome);
                meuStrToUpper(vAluno[idEditar].nome);

                printf("Novo Sexo: ");
                scanf(" %c", &vAluno[idEditar].sexo);

                printf("Nova Altura: ");
                scanf("%f", &vAluno[idEditar].alt);

                printf("+-------------------------------------------------+\n");
                printf("|          Dados atualizados com sucesso!         |\n");
                printf("+-------------------------------------------------+\n");
            }
            break;

        case 0:
            printf("Salvando dados antes de sair...\n");
            fSalvar(vAluno, qtd, filename);
            printf("Saindo...\n");
            break;

        default:
            printf("opcao invalida");
        }
    }
    while (op != 0);
}

