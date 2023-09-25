#include<stdio.h>


        int main(){
            char nome[50];
            int idade, sexo;
            printf("Qual o seu nome?");
            scanf("%s",nome);
            printf("Qual a sua idade?");
            scanf("%i",&idade);
            printf("Qual o seu sexo?\n Digite: \n1-Feminino\n 2-Masculino\n");
            scanf("%i",&sexo);
            if (idade <= 25)
            {
                printf("%s , ACEITA",nome);
            }
            else{
                printf("%s , NAO ACEITA",nome);
            }
            
            return 0;





        }