//Exercicio Strings 01
#include <stdio.h>
#include <string.h>

int main()
{
    char string[20], stringreverso[20];
    int i, j=0;

    printf("Insira alguma(s) palavra(s): ");
    scanf("%[^\n]", string); //ao inves do %s, pois palavras podem conter espaço

    //no codeblocks strrev invetre a string para mim;
    //strrev(string);

    //printf("%s", string);

    //invertendo com loop

    for (i=strlen(string) - 1; i >= 0; i--) //começo o loop do tamano da string - 1
    {
        stringreverso[j] = string[i]; //transfere para a stringreverso que começa de 0 com o j;
        j++;
    }

    stringreverso[j] = '\0'; // '\0' termina a string, evita ler lixo de memoria

    printf("%s", stringreverso);


}
