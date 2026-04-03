//exercicio17
#include <stdio.h>
#define MAX 15

int main()
{
    int vetor[MAX], i=0, num=1;

    while (i < MAX)
    {


        if (num % 3 != 0 && num % 5 != 0)
        {

            vetor[i] = num;

            i++;





        }

        num++;



    }

    for (i=0; i < MAX; i++)
    {

        printf("%d ", vetor[i]);

    }




}
