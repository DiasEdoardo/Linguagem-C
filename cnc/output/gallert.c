#include <stdio.h>

void eliminacaoGauss(float matriz[][3], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            float fator = matriz[j][i] / matriz[i][i];

            for (int k = i; k < n + 1; k++) {
                matriz[j][k] = matriz[j][k] - fator * matriz[i][k];
            }
        }
    }
}

void minimosQuadrados(float x[], float y[], int n, float *m, float *c) {
    float matriz[2][3] = {{0}};
    
    for (int i = 0; i < n; ++i) {
        matriz[0][0] += x[i] * x[i];
        matriz[0][1] += x[i];
        matriz[0][2] += x[i] * y[i];
        matriz[1][0] += x[i];
        matriz[1][1] += n;
        matriz[1][2] += y[i];
    }

    eliminacaoGauss(matriz, 2);

    *m = matriz[0][2] / matriz[0][0];
    *c = (matriz[1][2] - matriz[1][0] * (*m)) / matriz[1][1];
}

int main() {
    float x[7]={-1,-0.7,-0.4,-0.1,0.2,0.5,0.8,1};
    float y[7]={3.599,2.849,2.099,1.349,0.599,-0.151,-0.901,-1.402};

    int n = sizeof(x) / sizeof(x[0]); // Número de pontos

    float m, c; // Coeficientes da reta

    minimosQuadrados(x, y, n, &m, &c);

    printf("Coeficientes da reta: y = %.2fx + %.2f\n", m, c);

    return 0;
}