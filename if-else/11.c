#include<stdio.h>

    int main(){
            int eleitores,votos,x;
            char nome[50];
            printf("Insira o nome do seu municipio:\n");
            scanf("%s",nome);
            printf("insira a quantidade de eleitores aptos:\n");
            scanf("%i",&eleitores);
            printf("Insira o numero de votos do candidato mais votado:\n");
            scanf("%i",&votos);

            if(eleitores >20000 && votos > 0.5*eleitores){
                printf("Haverá segundo turno no municipio de %s",nome);
            }
            else{
                printf("nao havera segundo turno no municipio de %s",nome);
            }
        return 0;
    }