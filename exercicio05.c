//exercicio5

#include <stdio.h>
#define MAX 100

int main()
{
    int vetvalores[MAX], entrada, i, cont=0;

    printf("Insira os valores: \n");
    scanf("%d", &entrada);

    while (entrada != 0)
    {
        vetvalores[cont] = entrada;
        cont++;
        printf("Insira os valores: \n");
        scanf("%d", &entrada);
    }

    int quad[cont];

    for (i=0; i<cont; i++){

        quad[i] = vetvalores[i] * vetvalores[i];
        printf("%d ", quad[i]);


    }






}
