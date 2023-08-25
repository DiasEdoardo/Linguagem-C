#include<stdio.h>

    int main(){
        int totaleleitores;
        float vbranco,validos,nulos,pb,pv,pn;

            printf("Qual a quantidade de eleitores?");
            scanf("%i",&totaleleitores);
            printf("Qual a quantidade de votos em branco?");
            scanf("%f",&vbranco);
            printf("Qual a quantidade de votos nulos?");
            scanf("%f",&nulos);
            printf("Qual a quantidade de votos validos?");
            scanf("%f",&validos);
            pb=vbranco/totaleleitores*100;
            pv=validos/totaleleitores*100;
            pn=nulos/totaleleitores*100;
            printf("O percentual de votos \nbrancos %.2f\nnulos %.2f\nvalidos %.2f",pb,pv,pn);
            return 0;
    }