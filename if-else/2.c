#include<stdlib.h>


    int main(){
        int idade;
        printf("Qual a sua idade?\n");
        scanf("%i",&idade);
            if (idade >=70 || 16 || 17)
            {
                printf("O seu voto eh facultativo !");
            }
                if (idade >=18 && idade <=70)
            {
                printf("O seu voto eh obrigatorio!");
            }
            return 0;
    }