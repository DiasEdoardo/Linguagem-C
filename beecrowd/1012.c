#include<stdio.h>

        int main(){
                float a,b,c;
                scanf("%f %f %f",&a,&b,&c);

                float at,cr,t,aq,ar;
                at=a*c;
                cr=3.14159*c*c;
                t=(a*b)*c/2;
                aq=b*b;
                ar=a*b;
                printf("TRIANGULO: %.2f\n CIRCULO: %.2f\n TRAPEZIO: %.2f\n QUADRADO: %.2f\n RETANGULO: %.2f\n",t,cr,at,aq,ar);
                return 0;
        }