#include<stdio.h>

            int main(){
                float num;
                do
                {
                    printf("digite um numero (se o numero for negativo o programa para):\n");
                    scanf("%f",&num);
                } while (num>0);
                printf("\no numero eh negativo!");
                return 0;   
            }