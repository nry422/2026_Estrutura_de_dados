//exercicio12
#include <stdio.h>
#define MAX 100

int main()
{
    int vEntrada[MAX], entrada, i, num = 0, buscar, confirmar;

    printf("--> Digite os valores desejados, digite '0' para parar!\n");
    printf("Insira o primeiro valor : ");
    scanf("%d", &entrada);

    if (entrada == 0)
    {
        printf(" -> Digite 0 novamente para encerrar\n -> Qualquer outro valor (ex. 1) para continuar ");
        scanf(" %d", &confirmar);

        if(confirmar == 0)
        {
            return 0;
        }
        else
        {
            printf("Insira o primeiro valor : ");
            scanf("%d", &entrada);
        }
    }

    while (entrada != 0)
    {

        vEntrada[num] = entrada;
        printf("Insira o proximo valor  : ");
        scanf("%d", &entrada);
        num++;
    }

    printf("\nValor que deseja buscar : ");
    scanf("%d", &buscar);

    int vPosicao[num], j = 0;


    for (i = 0; i<num; i++)
    {

        if (vEntrada[i] == buscar)
        {
            vPosicao[j] = i;
            j++;
        }
    }
    if (j == 0)
    {
        printf("\n--> Numero %d nao encontrado!\n", buscar);
        return 0;
    }
    if (j == 1)
    {
        printf("\n--> O numero %d foi encontrado apenas 1 vez, na posicao %d.", buscar, vPosicao[0]);
        return 0;

    }
    else
    {
        printf("\n--> O numero %d foi encontrado %d vezes, o ultimo esta na posicao %d. ", buscar, j, vPosicao[j-1]);

    }

}

