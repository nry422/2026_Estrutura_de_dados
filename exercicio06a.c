//exercicio06a
#include <stdio.h>
#define MAX 100

int main()
{
    int vEntrada[MAX], entrada, i, num=0, mult;

    printf("Insira o primeiro valor : ");
    scanf("%d", &entrada);

    while (entrada != 0)
    {

        vEntrada[num] = entrada;
        printf("Insira o proximo valor : ");
        scanf("%d", &entrada);
        num++;
    }


    printf("Calcular os multiplos de : ");
    scanf("%d", &mult);

    printf("Multiplos de %d : ", mult);
    for (i=0; i<num; i++)
    {
        if (vEntrada[i] % mult == 0)
        {
            printf("%d  ", vEntrada[i]);
        }
    }



}
