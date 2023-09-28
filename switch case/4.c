#include<stdio.h>

        int main(){
        int x=100,y,z;
        char opcao;
        printf("Qual a idade do conveniado?\na.Menos de 10 anos\nb.entre 10 e 30 anos\nc.entre 40 e 60 anos\nd.mais de 60 anos\n");
        scanf("%c",&opcao);
        switch (opcao)
        {
        case 'a':
            y=x+80;
            printf("O conveniado paga R$ %i",y);
            
            break;
        case 'b':

            y=x+50;
            printf("O conveniado paga R$ %i",y);
            
            break;
        case 'c':
            y=x+95;
            printf("O conveniado paga R$ %i",y);
            
            break;
        case 'd':
            y=x+130;
            printf("O conveniado paga R$ %%i",y);
            
            break;
        default:
        printf("a opcao e invalida!tente novamente");
            break;
        }   
            return 0;
        }