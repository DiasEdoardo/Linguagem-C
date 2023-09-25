#include<stdio.h>
        int main(){
            float sb,pres,x;
            printf("Insira o valor do seu salário bruto:\n");
            scanf("%f",&sb);
            printf("Insira o valor da prestação:\n");
            scanf("%f",&pres);
            x=sb*0.30;
            if (pres<x)
            {
                printf("o empréstimo pode ser concedido!");
            }else{
                printf("o emprésitmo não pode ser concedido!");

            }
            return 0;
        }