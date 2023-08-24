#include<stdlib.h>

        int main(){
            int idade, kg;
            printf("Qual a sua idade ?\n");
            scanf("%i",&idade);
            printf("Qual o seu peso em Kg?\n");
            scanf("%i",&kg);
            if (idade >= 18 && idade<=67 && kg >= 50)
            {
                printf("Voce pode doar sangue !");
            }
            else{
                printf("Voce nao pode doar sangue !");
            }
            return 0;

        }