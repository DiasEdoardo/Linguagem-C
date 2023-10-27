#include<stdio.h>

    int main(){
    int x,y,z,i,c,j,b=0,total;
    printf("Que horario a partida de resistencia começou?");
    scanf("%i",&x);
    printf("que horário ela terminou?");
    scanf("%i",&y);
    printf("ela terminou no dia seguinte?\n1-Nao\n2-Sim\n");
    scanf("%i",&z);
    switch(z){
       case 1:         //calculo de um dia só
           for(i=x;i<y;i++){
                c++;
        }
        printf("o total de horas foi: %i",c);
        break;

        case 2:         //calculo do dia seguinte
            for(i=x;i<24;i++){
                c++;
                printf("%i",c);
            }
            for(j=0;j<y;j++){
                b++;
                      printf("%i",b);
            }
            total=c+b;
    printf("o total de horas foi %i",total);
    break;
        default:
            printf("tente novamente!");
    }

        return 0;
    }
