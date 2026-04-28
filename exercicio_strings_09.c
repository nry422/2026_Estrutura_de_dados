//exercicio 09
#include <stdio.h>
//#include <string.h> não precisa

int main()
{
    char sPrimeira[21], sSegunda[21], sSaida[21]; //aceito até 20 caracteres no scanf, o 1 extra fica reservado para o \0
    int i, j=0;

    printf("insira a primeira parte para juntar as strings (max 20 caracteres total) : ");
    scanf("%20s", sPrimeira); //sendo que o exemplo não tem espaçoes o 20s funciona bem,
    //fgets(sPrimeira, 21, stdin); //se fosse usar em exemplo com espacos e deixei 21 porque o fgets já reserva para o \0


    printf("insira a segunda parte para juntar as strings (max 20 caracteres total) : ");
    scanf("%20s", sSegunda);
    //fgets(sSegunda, 21, stdin);

    //for (i = 0; sPrimeira[i] != '\0'; i++) // para tirar o \n...
        //if (sPrimeira[i] == '\n') sPrimeira[i] = '\0';

    //for (i = 0; sSegunda[i] != '\0'; i++)
        //if (sSegunda[i] == '\n') sSegunda[i] = '\0';


    for (i = 0; sPrimeira[i] != '\0'; i++) //para quando acha \0
    {
        sSaida[j] = sPrimeira[i];
        j++;
    }

    for (i = 0; sSegunda[i] != '\0'; i++)
    {
        sSaida[j] = sSegunda[i]; // j continua do for anterior então fica na posição certa para o sSaida
        j++;
    }

    sSaida[j] = '\0'; //tem que terminar o aSaida, na posiçao j com o \0 para nao dar printf de lixo de memoria

    printf("Primeira e segunda parte concatenadas : %s", sSaida);


}
