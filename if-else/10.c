#include<stdio.h>

    int main(){
        float salario,inss,x;
        printf("Qual o seu salário?");
        scanf("%f",&salario);
        if (salario >600.00 && salario >= 1200.00)
        {
            inss=0.20;
            x=salario*inss;
            printf("o seu desconto fica:%f",x);
        }
        else if (salario >1200.00 && salario >= 2000.00)
        {
            inss=0.25;
            x=salario*inss;
            printf("o seu desconto fica:%f",x);
        }
        else if (salario >2000.00)
        {
            inss=0.30;
            x=salario*inss;
            printf("o seu desconto fica:%f",x);
        }
        else{
                printf("salario inválido!");

        }
        



        return 0;
    }