#include<stdio.h>

    int main(){
        float j,p,i,n;
        printf("Insira o valor aq ser financiado, taxa de juros por mes e o periodo em meses: \n");
        scanf("%f %f %f",&p,&i,&n);
        j=p*i*n;
        printf("os juros simples eh %f",j);
        return 0;




    }