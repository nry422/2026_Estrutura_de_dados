//exercicio16
#include <stdio.h>
#define MAX 20

int main()
{
    int vho[MAX], vmu[MAX], numpessoas, contho=0, contmu=0, idade, mediaho=0, mediamu=0, i;
    char sexo;

    printf("Insira o numero de pessoas\n");
    scanf("%d", &numpessoas);



    for (i = 0; i < numpessoas; i++)
    {

        printf("Insira a Idade\n");
        scanf("%d", &idade);

        printf("Insira o sexo\n");
        scanf(" %c", &sexo);

        if (sexo == 'M')
        {

            vho[contho] = idade;
            contho++;

        }
        else if (sexo == 'F')
        {
            vmu[contmu] = idade;
            contmu++;

        }
        else
        {
            printf("Valores programados para sexo apenas M ou F\n");
            i--;
        }




    }

    for (i = 0; i < contho; i++)
    {
        mediaho = vho[i] + mediaho;
    }

    mediaho = mediaho / contho;
    printf("Media M: %d ", mediaho);

    for (i = 0; i < contmu; i++)
    {
        mediamu = vmu[i] + mediamu;
    }

    mediamu = mediamu / contmu;
    printf("Media F: %d ", mediamu);



}
