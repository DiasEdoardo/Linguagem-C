#include<stdio.h>

    int main(){
        int opcao;
        float x,y;

        printf("Qual o valor em Reais que voce deseja converter?\n");
        scanf("%f",&x);
        printf("Para qual moeda voce desjea converter?Digite :\n1-Franco Suiço\n2-Libra esterlina\n3-Dolar\n4-Marco alemao\n");
        scanf("%i",&opcao);
        if (opcao == 1)
        {
            float f;
            f=5.53;
            y=f*x;
            printf("\nO valor convertido de %f em real para Franco Suiço eh %f",x,y);
        }
        else if(opcao == 2)
        {
            float l;
            l=6.15;
            y=l*x;
            printf("\nO valor convertido de %f em real para Libra Esterlina eh %f",x,y);
        }
        else if(opcao == 3)
        {
            float d;
            d=4.89;
            y=d*x;
            printf("\nO valor convertido de %f em real para dolar eh %f",x,y);
        }
        else if(opcao == 4)
        {
            float m;
            m=2.70;
            y=m*x;
            printf("\nO valor convertido de %f em real para marco alemao eh %f",x,y);
        }
        else{
            printf("opcao incorreta, tente novamente");
        }
        
        




    }