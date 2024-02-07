#include<stdio.h>
    void raio(float r, float v){
        v=(4.0/3.0)*3.14*(r*r*r);
        printf("O volume da esfera é: %.2f",v);
    }

    int main(){
        float r,v=0;
        printf("Informe o raio da esfera:");
        scanf("%f",&r);
        raio(r,v);
        return 0;
    }