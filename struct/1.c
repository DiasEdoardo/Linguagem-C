#include<stdio.h>
#include<string.h>


    int main(){
    struct matricula{
    char nome[50];
    int nmatricula;
    char curso[50];
}aluno[4];
    int i;
    for(i=0;i<4;i++){
        fflush(stdin);
        printf("Digite seu nome: ");
        gets(aluno[i].nome);
        fflush(stdin);
        printf("Digite o numero de sua matricula: ");
        scanf("%i",&aluno[i].nmatricula);
        fflush(stdin);
        printf("Digite o nome do curso: ");
        gets(aluno[i].curso);
        fflush(stdin);
    }
    for(i=0;i<4;i++){
        printf("Aluno %i Nome:%s ||Numero da matricula:%i ||Nome do curso: %s ||\n",i,aluno[i].nome,aluno[i].nmatricula,aluno[i].curso);

    }
return 0;

}