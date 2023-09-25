#include<stdio.h>

            int main(){
                float a,b,c;
                printf("informe os lados do triangulo retangulo:\n");
                scanf("%f%f",&a,&b);
                c=(a*a)+(b*b);
                if (c>100)
                {
                    printf("hipotenusa excede o tamanho permitido para área! %f",c);
                }
                else if (c<100)
                {
                    printf("hipotenusa aceita!%f",c);
                }
                else{
                    printf("valor inválido!");

                }
            return 0;
            }