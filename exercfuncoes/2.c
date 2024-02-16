#include<stdio.h>
        

        int main(){
            float n1,n2,n3;
            char proc;

            printf("Escreva as notas do aluno em sequencia:\n");
            scanf("%f %f %f" ,n1,n2,n3);
            printf("Escreva qual procedimento deseja escolher:\nA-Media aritimética\nP-Média ponderada\nH-Media harmonica");
            scanf("%s",&proc);
        }