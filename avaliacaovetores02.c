#include <stdio.h>
#define MAX 100

int main()
{

    int inVet[MAX], entrada, qtde=0, i, j=0;

    printf("-Questao 02-\n\n");
    printf("Insira os valores : ");
    scanf("%d", &entrada);

    while (entrada != 0)
    {

        inVet[qtde] = entrada;
        qtde++;
        printf("Insira os valores : ");
        scanf("%d", &entrada);

    }

    int outVet[qtde];

    for(i=0; i<qtde; i++)
    {

        if ( i != qtde/2 )
        {

            outVet[j] = inVet[i];
            j++;


        }



    }

    for (i=0; i<j; i++)
    {
        printf("%d ", outVet[i]);


    }



}
