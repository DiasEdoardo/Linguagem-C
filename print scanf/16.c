#include<stdio.h>

    int main(){
        float b,h,a;
        printf("qual a base e qual a altura do triangulo?\n");
        scanf("%f %f",&b,&h);
        a=b*h/2;
        printf("a area do traingulo eh %f",a);
        return 0;
    }