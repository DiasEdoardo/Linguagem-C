#include<stdio.h>

    int main(){
        float y,z;
        int x;
        printf("Qual a quantidade de maças compradas?");
        scanf("%i",&x);

        if (x < 12)
        {
            y=1.30;
            z=x*y;
            printf("o custo total da compra é R$%f",z);

        }
        else
        {
            y=1.00;
            z=x*y;
            printf("o custo total da compra é R$%f",z);

        }
        return 0;
        


    }