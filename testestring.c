#include <stdio.h>

int main()
{
   int contvogal = 0;
   char string[100];
   printf("digite algo: ");
   scanf("%s", &string);

   for (int i=0; i<10; i++){
         if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u') {
            contvogal++;
         }
      //printf("%c %d\n", string[i], string[i]);

   }

   printf("vogais %d ", contvogal);






}
