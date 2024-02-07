#include<stdio.h>

    void converteHora(int totalsegundos, int *hora, int *min, int *seg){
    *hora=totalsegundos/3600;
    *min=(totalsegundos%3600)/60;
    *seg=totalsegundos%60;

}
    int main(){
        int totalsegundos,hora,min,seg;

        printf("Insira a quantidade total de segundos:");

        scanf("%i",&totalsegundos);  
        
        converteHora(totalsegundos,&hora,&min,&seg);
        
        printf("%i:%i:%i",hora,min,seg);
        return 0;

    }