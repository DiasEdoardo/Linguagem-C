#include<stdio.h>
        int main(){
            int x,y,z;
            char tipo;
            printf("Quantos quilômetros o carro percorreu?\n");
            scanf("%i",&x);
            printf("Qual o tipo do carro?\nA\nB\nC\n");
            scanf(" %c",&tipo);
            switch (tipo)
            {
            case 'A':
                z=x/12;
                printf("o consumo estimado e: %i",z);
                break;
            case 'B':
                z=x/9;
                printf("o consumo estimado e: %i",z);
                break;
            case 'C':
                z=x/8;
                printf("o consumo estimado e: %i",z);
                break;
            
            default:
            printf("tente novamente, opcao invalida");
                break;
            }

            return 0;

        }