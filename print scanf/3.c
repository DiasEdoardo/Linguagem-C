#include<stdio.h>

    int main(){
            float l,dist,media;

            printf("Quantos litros de gasolina o carro percorreu?\n");
            scanf("%f",&l);
            printf("Qual a distancia percorrida?\n");
            scanf("%f",&dist);

            media=dist/l;
            printf("a media percorrida eh %f \n",media);

            return 0;
    }