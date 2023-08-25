#include<stdio.h>

    int main(){
        float real, dolar, cd;
            printf("Insira o valor em real a ser convertido para dolar:\n");
            scanf("%f",&real);
            printf("Insira a cotacao atual do dolar:\n");
            scanf("%f",&dolar);
            cd=real/dolar;
            printf("a conversao de %f real(is) para %f dolar(es)",real,cd);
            return 0;
    }