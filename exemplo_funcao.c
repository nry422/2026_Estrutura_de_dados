//exemplo_funcao
#include <stdio.h>
#include <stdlib.h>

int soma(int n1, int n2)
{
   return  n1+n2;
}

int mult(int n1, int n2)
{
   int m = n1 * n2;
   return m;


}

int primo(int n)
{

   int i, multi=0;
   for (i=1; i<=n; i++) {

      if (n % i == 0) {
         multi = multi + 1;
      }

   }

   if (multi == 2) {
      return 1;
   }

   else {
      return 0;
   }

}



int main()
{

   int x;
   x = soma(3,6);
   printf("x %d\n", x);

   int m;
   m = mult(89,1000);
   printf("m %d\n", m);

   int p;
   p = primo(5);

   if (p==1) {
      printf("primo");
   }
   else {
      printf("nao primo");
   }

   return 0;
}
