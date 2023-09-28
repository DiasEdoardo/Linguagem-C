#include<stdio.h>
    int main(){
        int x;
        printf("Insira a quantidade de lados para descobrir qual poligono eh:\n");
        scanf("%i",&x);
        switch (x)
        {
        case 3:
            printf("o poligono e um trinagulo\n");
            break;
        case 4:
            printf("o poligono e um retangulo ou quadrado\n");
            break;
        case 5:
            printf("o poligono e um pentagono\n");
            break;
        case 6:
            printf("o poligono e um hexagono\n");
            break;
        
        default:
        printf("nao e um poligono registrado no programa");

            break;
        }
        return 0;
    }