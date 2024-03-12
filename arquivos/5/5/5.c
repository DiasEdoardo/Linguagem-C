#include<stdio.h>
#include<stdlib.h>

int main(){

    FILE *pont_arq;

    pont_arq = fopen("vogais.txt","r");

    if (pont_arq == NULL){
        printf("erro na abertura do arquivo!\n");
    }else{
        printf("o arquivo foi criado com sucesso!");
    }
    
    
}