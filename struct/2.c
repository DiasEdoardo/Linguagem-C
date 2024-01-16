#include<stdio.h>
#include<stdlib.h>

    int main(){
        struct dados{
            char nome[50];
            int idade;
            char sexo;
            int cpf;
            char nasc;
            int setor;
            char cargo[30];
            int salario;
        }funcionario;   
    
            printf("Qual o seu nome?");
            scanf("%s",&funcionario.nome);
            fflush(stdin);
            printf("Qual a sua idade?");
            scanf("%i",&funcionario.idade);
            fflush(stdin);
            printf("Qual o seu sexo?");
            scanf("%s",&funcionario.sexo);
            fflush(stdin);
            printf("Qual o seu cpf?");
            scanf("%i",&funcionario.cpf);
            fflush(stdin);
            printf("Qual a sua data de nascimento?");
            scanf("%s",&funcionario.nasc);
            fflush(stdin);
            printf("Qual o seu setor?");
            scanf("%i",funcionario.setor);
            fflush(stdin);
            printf("Qual o seu cargo?",funcionario.cargo);
            scanf("%s",&funcionario.cargo);
            fflush(stdin);
            printf("Qual o seu salario?");
            scanf("%i",&funcionario.salario);

        return 0;
    }

