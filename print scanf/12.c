#include<stdio.h>
    int main(){
    float x,y,z,m;
        printf("Insira 3 notas para descobrir a media.\n");
        scanf("%f %f %f",&x,&y,&z);
        m=x+y+z/3;
        printf("a media das 3 notas eh: %f",m);
        return 0;

    }