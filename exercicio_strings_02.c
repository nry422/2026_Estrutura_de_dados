#include <stdio.h>

int meustrlen(char string[])
{
   int cont=0;
   while (string[cont] != '\0') {
   cont++;

}
return cont;


}

int main()
{
   char s[100];

   printf("Digite algo: ");
   fgets(s, 100, stdin);
   s[strcspn(s, "\n")] = '\0';

   int tam = meustrlen(s);


   printf("tam = %d\n", tam);

}
