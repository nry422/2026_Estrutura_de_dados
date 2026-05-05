#include <stdio.h>
#define MAX 100

int main()
{
   float vNum[MAX], num, soma=0, media;
   int i, vDados=0, qtde=0;

   printf("insira o valor: ");
   scanf("%f", &num);
   while(num!=0) {

      vNum[vDados] = num;
      vDados++;


      printf("insira o valor: ");
      scanf("%f", &num);
   }

   for (i=0; i<vDados; i++) {

      soma = soma + vNum[i];
      qtde++;
   }
   media = soma / vDados;
   printf("soma: %g \n", soma);
   printf("quantidade: %d \n", qtde);
   printf("media: %.2f \n", media);

    qtde=0;
   for (i=0; i<vDados; i++) {
      if (vNum[i]<media) {
         qtde++;
      }
   }
   printf("Qtde valores abaixo da media: %d", qtde);
}

