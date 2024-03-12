#include<stdio.h>

    int main(){

        int nump,numc,nump2,numc2;
        float preco,preco2,total;
        scanf("%i %i %f",&numc,&nump,&preco);
        scanf("%i %i %f",&numc2,&nump2,&preco2);

        total=nump*preco+nump2*preco2;
        printf("VALOR A PAGAR:R$%.2f",total);

        return 0;
    }