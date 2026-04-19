//Exercicio Strings 04
#include <stdio.h>
#include <string.h> //para strlen
#include <ctype.h> //para o tolower

int main()
{
    int contvogal = 0, contcar = 0, contblank = 0;
    char string[50];

    printf("Insira alguma(s) palavra(s): ");
    scanf("%[^\n]", string); //%[^\n] para strings com espaços em branco, string nao usa &para associar a variavel

    for (int i=0; i<strlen(string); i++)  //strlen comprimento da string, requer <string.h>
    {
        char s = tolower(string[i]); //transforma em minusculo para fazer menos comparacoes
        if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u')
        {
            contvogal++; //se for voga adiciona 1
        }
        else if (s == ' ')
        {
            contblank++; //se tiver espaço em branco adiciona 1
        }
        else
        {
            contcar++; //se não tiver vogal ou espaço em branco adiciona 1
        }


    }

    printf("caracteres %d \nvogais %d \nespacos em branco %d", contcar+contvogal, contvogal, contblank); //adiciona vogais e os outros caracters excluindo espaço em branco






}
