#include<stdio.h>

    int main(){
        float peso, altura,imc,a2;

        printf("Qual a sua altura?\n");
        scanf("%f",&altura);
        printf("Qual o seu peso?");
        scanf("%f",&peso);

        a2=altura*altura;
        imc=peso/a2;
        printf("O seu IMC eh %f",imc);

        return 0;
    }