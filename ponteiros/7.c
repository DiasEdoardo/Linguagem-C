#include<stdio.h>

void calc_esfera(float R, float *area, float *volume){
    *area=4*3.14*R;
    *volume=4/3*3.14*R;


}

    int main(){
        float R,area,volume;
        printf("Informe o raio com valores reais");
        scanf("%f",&R);
        calc_esfera(R,&area,&volume);
        printf("O volume é %f, e a area é %f",area,volume);
        return 0;

    }