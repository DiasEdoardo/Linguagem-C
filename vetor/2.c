#include<stdio.h>

    int main(){
            int vet[5]={0,0,0,0,0},soma=0,i;
            for (i = 0; i < 5; i++)
            {
                printf("digite um numero para o vetor de posiçao %i \n",i);
                scanf("%i",&vet[i]);
                soma=soma+vet[i];
            }
            printf("a soma dos vetores é %i \n",soma);

            
        return 0;
    }