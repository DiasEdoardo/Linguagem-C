#include<stdlib.h>
#include<math.h>

    int main(){
        int num,quad,trip;

            printf("Qual numero voce deseja saber se é negativo ou positivo?\n");
            scanf("%i",&num);
            if (num<0)
            {
                printf("O numero %i é negativo!\n",num);
                quad=num*num;
                printf("o numero %i elevado ao quadrado é %i\n",num,quad);
            }
            if (num>0)
            {
                printf("O numero %i eh positivo!\n",num);
                trip=num*3;
                printf("o triplo do numero %i eh %i\n",num,trip);
            }else{
                printf("Voce descobriu o 0!");

            }

            return 0;
            
            


    }