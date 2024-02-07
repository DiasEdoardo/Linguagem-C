#include<stdio.h>

    int main(){
        int x,z;
        printf("Escreva um numero\n");
        scanf("%i",&x);
        printf("Escreva um numero\n");
        scanf("%i",&z);
        int *ptrx=&x;
        int *ptrz=&z;
        printf("%i\n",&x);
        printf("%i",&z);
        
        if (&x<&z)
        {
            printf("o endereço de x e maior,%i",x);
        }else{
            printf("o endereço de z e maior,%i",z);
        }
        return 0;   
    }