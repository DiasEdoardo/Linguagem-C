#include<stdio.h>
#include<stdlib.h>

        int main(){
            int x,y,z;

            printf("Qual numero voce deseja saber o antecessor e o sucessor?\n");
            scanf("%i" , &x);
    	    y=x+1;
            z=x-1;
            printf("\no antecessor de %i eh %i e o sucessor eh %i",x,z,y);

            return 0;   



        }