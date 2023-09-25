#include <stdio.h>

        int main(){
            char a,b;
            float h,t,m;
            int cont=0;
            printf("deseja cadastrar as alturas de homens ou de mulheres?\nDigite M para masculino e F para feminino");
            scanf("%s",&a);
            if (a == 'M' || a == 'm')
            {
                do
                {
                    printf("Digite a altura:\n");
                    scanf("%f",&h);
                    t=h+t;
                    cont++;
                    
                } while (cont < 10);
                m=t/10;
                printf("a média das alturas dos homens é:%f",m);
            }
            else if (a == 'F' || a == 'f')
            {
                do
                {
                    printf("Digite a altura:\n");
                    scanf("%f",&h);
                    t=h+t;
                    cont++;
                    
                } while (cont < 10);
                m=t/10;
                printf("\na média das alturas das mulheres é:%f",m);
            }
            


        return 0;
        }