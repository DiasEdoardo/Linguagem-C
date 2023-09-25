#include<stdio.h>

    int main(){
        float produto,venda,lucro;
        printf("Qual o valot do produto?");
        scanf("%f",&produto);

        if (produto <= 20)
        {
            lucro=0.45;
            venda=produto*lucro;
            printf("O valor da venda é de %f",venda);
        }
        else if(produto > 20){
            lucro=0.30;
            venda=produto*lucro;
            printf("O valor da venda é de %f",venda);
        }
        else{
            printf("algo deu errado, tente novamente!");
        }
            return 0;

    }