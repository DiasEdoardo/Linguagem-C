#include<stdio.h>

    int main(){
        int meses,anos,dias,idias,imeses,diastotal;


        printf("Qual a sua idade em anos?");
        scanf("%i",&anos);
        printf("E quantos meses?");
        scanf("%i",&meses);  
        printf("E quantos dias?");
        scanf("%i",&dias);

        imeses=anos*365; // calcular anos em dias
        idias=meses*30; // calcular meses em dias
        diastotal= idias+imeses+dias;

        printf("O total de dias eh %i",diastotal);
        return 0;

    }