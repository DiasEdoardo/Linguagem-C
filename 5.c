#include<stdio.h>

    int main(){
        int meses,anos,dias,idias,imeses,im2,diastotal;


        printf("Qual a sua idade em anos?");
        scanf("%i",&anos);
        printf("E quantos meses?");
        scanf("%i",&meses);  
        printf("E quantos dias?");
        scanf("%i",&dias);

        imeses=anos*365; // calcular anos transformando em meses
        idias=imeses/30; //calcular meses em dias
       

        im2=meses/30; // calcular meses em dias
        diastotal=im2+idias+dias;

        printf("O total de dias eh %i",diastotal);
        
        



        return 0;

    }