//exercicio13

#include <stdio.h>
#define MAX 100

int main()
{
   float vNum[MAX], num, soma=0, media;
   int i, vDados=0, qtde=0;

   //proibido fazer:
   //while(1){
   //scanf("%d", &num);
   //if (num==0) break;

   //do {

   //}while ();

   printf("num: ");
   scanf("%f", &num);
   while(num!=0) {

      vNum[vDados] = num;
      vDados++;


      printf("num: ");
      scanf("%f", &num);
   }

   for (i=0; i<vDados; i++) {
      printf ("[%d] %g \n", i, vNum[i]);
      soma = soma + vNum[i];
   }
   media = soma / vDados;
   printf("soma: %g \n", soma);
   printf("media: %g \n", media);


printf("Acima da media: \n ");
   for (i=0; i<vDados; i++) {
      if (vNum[i]>media) {

         printf("[%d] = %g\n", i, vNum[i]);
         qtde++;
      }
   }
   printf("Qtde valores acima da media: %d", qtde);
}

