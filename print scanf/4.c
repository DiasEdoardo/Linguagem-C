#include<stdio.h>

    int main(){
        float r,r2,area;
        double pi;
        printf("Qual o raio do circulo?");
        scanf("%f",&r);

        r2=r*r;
        pi=3.14159265359;
        area=r2*pi;
        printf("a area do circulo eh %f",area);

        return 0;

    }