#include<stdio.h>

    int main(){
        int x,y,z,opcao;
        printf("Escolha dois numeros para fazer uma operação:\n");
        scanf("%i""%i",&x,&y);
        printf("selecione uma opção de operação:\n1-Soma\n2-Divisão\n3-Subtração\n4-Multiplicação\n");
        scanf("%i",&opcao);
        switch (opcao)
        {
        case 1:
            z=x+y;
            printf("a soma dos numeros é: %i",z);
            break;
        case 2:
            z=x/y;
            printf("a divisão dos numeros é: %i",z);
            break;
        case 3:
            z=x-y;
            printf("a subtração dos numeros é: %i",z);
            break;
        case 4:
            z=x*y;
            printf("a multiplicação dos numeros é: %i",z);
            break;
        
        default:
            printf("a opção é invalida, por favor tente novamente");
            break;
        }

        return 0;
    }