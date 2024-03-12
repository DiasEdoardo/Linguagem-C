#include<stdio.h>
#include<stdlib.h>  

        int main(){
                char nome;
                int newton=0,c;

                scanf("%s",&c);
                for (int i = 0; i < c; i++)
                {
                        scanf("%s %i",&nome,&newton);
                        if (newton >=300)
                        {
                                printf("Y");
                        }else{
                                printf("N");
                }
                }
                return 0;
        }