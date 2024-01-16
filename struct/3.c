#include<stdio.h>
#include<stdlib.h>

    int main(){
        struct escola
        {
            int matricula,cod;
            float n1,n2,media;
            char nome[50];
        }aluno[1];
        for (int i = 0; i < 1; i++)
        {
        
            printf("Insira o nome do aluno:");
            gets(aluno[i].nome);
            fflush(stdin);
            printf("Insira a matricula do aluno:");
            scanf("%i",&aluno[i].matricula);
            fflush(stdin);
            printf("Insira o codigo da turma:");
            scanf("%i",&aluno[i].cod);
            fflush(stdin);
            printf("Insira a nota 1 do aluno:");
            scanf("%.f",&aluno[i].n1);
            fflush(stdin);
            printf("Insira a nota 2 do aluno:");
            scanf("%.f",&aluno[i].n2);
            fflush(stdin);
        }
        for (int i = 0; i < 1; i++)
        {
            // esta dando erro no calculo.
        aluno[i].media=aluno[i].n2+aluno[i].n1/3.0;
        printf("A nota do aluno %s foi de %.f",aluno[i].nome,aluno[i].media);
        }
        return 0;
        
        
        




        
    }