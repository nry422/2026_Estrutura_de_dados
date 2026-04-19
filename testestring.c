#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
   int contvogal = 0;
   char string[100];
   printf("digite algo: ");
   scanf("%s", &string);

   for (int i=0; i<strlen(string); i++){
         char s = tolower(string[i]);
         if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u') {
            contvogal++;
         }
      //printf("%c %d\n", string[i], string[i]);

   }

   printf("vogais %d ", contvogal);






}
