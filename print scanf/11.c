#include<stdio.h>

    int main(){
        float x,y,z,m;
        printf("Insira 3 notas sabendo que a primeira nota tera peso 2 a segunda peso 3 e a terceira peso 5\n");
        scanf("%f %f %f",&x,&y,&z);
        x=x*2;
        y=y*3;
        z=z*5;
        m=x+y+z/10;
        printf("A media ponderada das notas eh:%f ",m);
        return 0;
    }