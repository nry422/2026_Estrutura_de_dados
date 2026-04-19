//Exercicio Strings 05
#include <stdio.h>
#include <string.h> //precisa para o strlen

int main()
{
    char string[64];
    int zero=0, um=0, not=0, i;

    printf("Insira o valor para testar se e binario: ");
    scanf("%s", string);

    for (i=0; i < strlen(string) ; i++) //strlen é o comprimento da string
    {

        if (string[i] == '0')
        {
            zero++;
        }
        else if (string[i] == '1')
        {
            um++;
        }
        else
        {
            not++;
        }
    }

    printf("Zeros : %d\nUms : %d\nEstranhos : %d\n", zero, um, not);
    if (not == 0)
    {
        printf("Numero binario valido");
    }
    else
    {
        printf("Numero binario invalido");
    }





}
