#include<stdio.h>

        int main(){
        int x,y,z;
        char opcao;
        printf("Menu\n C - area de um circulo\nR - area de um triangulo\nQ - area de um quadrado\n");
        scanf("%c",&opcao);
        switch (opcao)
        {
        case 'C':
            printf("qual o raio do circulo?\n");
            scanf("%i",&x);
            z=3.14*(x*x);
            printf("a area do circulo e: %i",z);
            break;
        case 'R':
        printf("qual a base e a altura do retangulo?\n");
        scanf("%i""%i",&x,&y);
        z=x*y;
        printf("a area do retangulo e:%i",z);
        break;
        case 'Q':
        printf("Qual o lado do quadrado?\n");
        scanf("%i",x);
        y=x*x;
        printf("A area do quadrado e %i",y);
        break;
        
        default:
        printf("a opcao e invalida, por favor tente novamnete");
            break;
        }
            return 0;
        }