#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double x[7] = {-1, -0.7, -0.4, -0.1, 0.2, 0.5, 0.8, 1};
    double y[7] = {3.599, 2.849, 2.099, 1.344, 0.599, -0.151, -0.901, -1.402};

    float gx1[7];
    float gx2 = 1;
    float fx[7];

    // f(x)
    for (int i = 0; i < 7; i++) {
        fx[i] = gx1[i] + gx2;
    }

    // matriz aij
    double a11=0,a12,a21,a22,soma=0;
    for (int i = 0; i < 7; i++)
    {
        int j;
        j==pow(2,gx1[i]);
        soma+=j;
        printf("\n%f",soma);
    }
    
    

    
    

    return 0;
}
