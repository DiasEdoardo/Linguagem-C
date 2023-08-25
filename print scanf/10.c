#include<stdio.h>
    int main(){
        float bmenor,bamaior,h,area;
        printf("Qual a base menor, a base maior e altura do trapezio?\n");
        scanf("%f %f %f",&bmenor,&bamaior,&h);
        area=bmenor+bamaior*h/2;
        printf("a area do trapezio eh %f",area);
        return 0;
    }