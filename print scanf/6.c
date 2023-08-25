#include<stdio.h>

    int main(){
        float celsius, f;
            printf("Apresente a temperatura no formato de graus celsius para ser transformada em Fahrenheit\n");
            scanf("%f",&celsius);
            f=9*celsius+160;
            f=f/5;

            printf("a conversao eh %f",f);
            return 0;
    }