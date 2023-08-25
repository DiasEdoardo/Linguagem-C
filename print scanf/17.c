#include<stdio.h>
#include<math.h>
    int main(){
        float l,l2,r,a;
        printf("qual a medida da aresta?");
        scanf("%f",&l);
        l2=l*l;
        r=sqrt(3);
        a=r*l2;
        printf("a area do tetraeadro eh: %f",a);
        return 0;


    }