#include<stdlib.h>

        int main(){
            int x,y,z;
            printf("Digite o primeiro numero: ");
            scanf("%i",&x);
            printf("Digite o segundo numero: ");
            scanf("%i",&y);
            printf("Digite o terceiro numero: ");
            scanf("%i",&z);
            if (x>y>z)
            {
                printf("\nO numero %i eh o maior seguido do %i e %i",x,y,z);
            }
           else if (y>x>z)
            {
                 printf("\nO numero %i eh o maior seguido do %i e %i",y,x,z);
            }
            else if (z>x>y)
            {
                 printf("\nO numero %i eh o maior seguido do %i e %i",z,x,y);
            }
            else if (x>z>y)
            {
                 printf("\nO numero %i eh o maior seguido do %i e %i",x,z,y);
            }
            else if (z>y>x)
            {
                 printf("\nO numero %i eh o maior seguido do %i e %i",z,y,x);
            }
            else if (y>z>x)
            {
                 printf("\nO numero %i eh o maior seguido do %i e %i",y,z,x);
            }
            return 0;
        }