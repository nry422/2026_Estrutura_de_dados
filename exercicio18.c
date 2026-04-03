//exercicio 18
#include <stdio.h>
#define MAX 10

int main(){
    int vetor[MAX], i=0, vala=0, valb=1;

    while (i < MAX){

        vetor[i] = vala;
        i++;
        vetor[i] = valb;
        i++;


        vala = vala + valb;
        valb = vala + valb;



    }

    for (i=0; i < MAX; i++){
        printf("%d ", vetor[i]);

    }


}
