//exercicio 10
#include <stdio.h>


int main()
{
    char sNormal[30], sContrario[30];
    int i, j=0, palindroma = 1; //palindroma sendo 1 é verdadeira, condição padrao

    printf("insira a palavra para testar : ");
    scanf("%29s", sNormal); //sendo que o exemplo não tem espaçoes o 29s funciona bem,


    for (i = 0; sNormal[i] != '\0'; i++) //para quando acha \0
    {
        j++; //estou apenas contando o numero de caracteres para usa e ordem regressiva para a inversao;
    }

    j = j - 1; //ultimo caracter esta uma posiçao abaixo ou pega o \0

    for (i = 0; sNormal[i] != '\0'; i++)
    {
        sContrario[j] = sNormal[i]; // j continua do for anterior então fica decrescente
        j--; //decrescente
    }

    sContrario[j] = '\0'; //tem que terminar o aSaida, na posiçao j com o \0 para nao dar printf de lixo de memoria

    for (i = 0; sNormal[i] != '\0'; i++)
    {
        if (sNormal[i] != sContrario[i]) //se os caracters do original e invertido nao forem iguais marca palindroma como 0, ou seja falso
        {
            palindroma = 0;
        }
    }

    if (palindroma)   //checa se palindroma e verdadeiro ou falso
    {
        printf("E palindroma!!!");
    }
    else
    {
        printf("Nao e palindroma!!!");
    }




}
