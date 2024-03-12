#include<stdio.h>

    int main(){
        float r,volume,r3=0;
        scanf("%f",&r);
        r3=r*r*r;
        volume=4.0/3*3.14159*r3;
        printf("VOLUME = %.3f ",volume);
        return 0;
    }