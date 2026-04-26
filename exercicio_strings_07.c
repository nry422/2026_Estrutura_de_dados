//exercicio 07
#include <stdio.h>
#include <string.h>

int main()
{
    int saida=0, i, mult=5;
    char string[20]; //dei mais espaço do que os 5 necessarios para caber o \0 e mais para o teste

    printf("insira um codigo de 5 algarismos: ");
    scanf("%19s", string); //até 19 caracters mais /0


    if (strlen(string) != 5)  //se nao tiver 5 algarismos é invalido
    {
        printf("invalido\n");
        return 0; //para o programa
    }

    for (i=0; string[i] != '\0'; i++)   //para quando achar o \0!! poderia ter usado o strlen mas achei isso ainda mais simples?
    {

        saida = saida + (string[i] - '0') * mult; //subtrair 48 que é '0' em ASCII para achar valor int do caracter ASCII para os numeros, multiplicar pelo mult e somar na saida
        mult--; //reduz o multiplicador que começa em 5

    }

    saida = saida % 7; //resto da divisão por 7 do valor acumulado

    printf("DV %d \n", saida);




}
