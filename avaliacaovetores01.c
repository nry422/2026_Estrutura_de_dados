#include <stdio.h>
#include <math.h>
#define MAX 100

int main()
{
    int entrada, vLista[MAX], qtde=0, soma=0,  i;
    float media, somadif=0, variancia, desviopadrao;

    printf("-Questao 01-\n\n");
    printf("Digite o valor : ");
    scanf("%d", &entrada);

    while (entrada != 0)
    {

        vLista[qtde] = entrada;
        soma = entrada + soma;
        qtde++;

        printf("Digite o valor : ");
        scanf("%d", &entrada);

    }

    media = (float)soma / qtde;

    printf("\n\n");

    printf("Qtde : %d \n", qtde);
    printf("Soma : %d \n", soma);
    printf("Media : %.2f \n", media);

    float vDif[qtde];

    for (i=0; i< qtde; i++)
    {

        vDif[i] = vLista[i] - media;
        vDif[i] = pow(vDif[i],2);
        somadif = somadif + vDif[i];

    }

    variancia = (float)somadif / i;
    desviopadrao = sqrt(variancia);

    printf("\n\n");

    printf("SomaDif : %.2f \n", somadif);
    printf("Variancia : %.2f \n", variancia);
    printf("Desv.Pad %.2f \n", desviopadrao);


}
