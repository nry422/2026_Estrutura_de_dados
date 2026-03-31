//exercicio07
#include <stdio.h>
#define MAX 100

int main()
{
    int vEntrada[MAX], entrada, i, num=0, multde, qtdval, j=0;

    printf("Insira o primeiro valor : ");
    scanf("%d", &entrada);

    while (entrada != 0)
    {

        vEntrada[num] = entrada;
        printf("Insira o proximo valor : ");
        scanf("%d", &entrada);
        num++;
    }

    qtdval = num;
    int vSaida[qtdval];

    printf("Calcular os multiplos de : ");
    scanf("%d", &multde);

    printf("Multiplos de %d : ", multde);
    for (i=0; i<num; i++)
    {
        if (vEntrada[i] % multde == 0)
        {
            vSaida[j] = vEntrada[i];
            j++;
        }
    }
    for (i=0; i<j; i++)
    {
        printf("%d  ", vSaida[i]);
    }

}
