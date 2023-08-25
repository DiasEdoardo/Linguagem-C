#include<stdio.h>
#include<math.h>

    int main(){
        int x1,x2,y1,y2,p1;
        float d;
        printf("Insira 2 pontos quaisquer no plano 1\n");
        scanf("%i %i",&x1,&y1);
        printf("Insira 2 pontos quaisquer no plano 2\n");
        scanf("%i %i",&x2,&y2);
        p1=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
        d=sqrt(p1);
        printf("a distancia eh: %f",d);
            return 0;
    }