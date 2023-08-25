#include<stdio.h>

    int main(){
        int a,b,c,r,s;
        float d;
        printf("Insira 3 numeros inteiros e positivos\n");
        scanf("%i %i %i",&a,&b,&c);
        r=(a+b)*(a+b);
        s=(b+c)*(b+c);
        d=r+s/2;
        printf("o resultado da expressao eh: %f",d);
        return 0;
    }