//exercicio 06
#include <stdio.h>
#include <string.h>

int main()
{
    int saida=0, i;
    char string[20]; //dei mais espaço do que os 4 necessarios para caber o \0 e mais para o teste

    printf("insira um valor entre 0 e 9999 : ");
    scanf("%19s", string); //até 19 caracters mais /0


    if (strlen(string) > 4)  //se tiver mais de 4 digitos é invalido, o enunciado pede de 0 a 9999
    {
        printf("numero invalido\n");
        return 0;
    }

    for (i=0; string[i] != '\0'; i++)   //para quando achar o \0!! poderia ter usado o strlen mas achei isso ainda mais simples?
    {

        saida = saida + (string[i] - 48); //subtrair 48 para achar valor int do caracter ASCII para os numeros

    }

    printf("\nResultado da soma dos digitos em int : %d \n", saida);




}
