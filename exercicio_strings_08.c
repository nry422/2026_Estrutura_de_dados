//exercicio 08
#include <stdio.h>
//#include <string.h>

int main()
{
    char sEntrada[100], sSaida[100];
    int i, j=0;

    printf("insira a frase : ");
    fgets(sEntrada, 100, stdin);

    for (i = 0; sEntrada[i] != '\0'; i++)  //para o for quando achar o \0, poderia ter usado strlen
    {

        if (sEntrada[i] != ' ')   //se entrada nao for espaco em branco
        {

            sSaida[j] = sEntrada[i]; //passa valor de sentrada para ssaida, usa o j++ pois precisa adicionar +1 ao indice que uso para o ssaida
            j++;

        }


    }

    sSaida[j] = '\0'; //tem que terminar o aSaida, na posiçao j com o \0 para nao dar printf de lixo de memoria

    printf("Sem espacos : %s", sSaida);


}
