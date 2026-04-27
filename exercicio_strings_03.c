//exercicio 03
#include <stdio.h>

int main()
{
    char frase[100];
    int i;

    printf("Insira a frase para tornar ALL CAPS:\n");
    fgets(frase, 100, stdin); //fgets para evitar overflow de memoria!!!

    for (i=0; frase[i] != '\0'; i++) //para quando achar o \0!! poderia ter usado o strlen mas achei isso ainda mais simples?
    {
        if (frase[i] >= 'a' && frase[i] <= 'z') //entre 97 e 122 são letras minusculas, se forem elas
        {
            frase[i] = frase[i] -32; //tira 32, que equivale ao valor da maiuscula!!
        }
    }

    printf("FRASE ALL CAPS:\n\n%s", frase);






}
