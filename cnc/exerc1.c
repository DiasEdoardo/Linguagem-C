#include <stdio.h>
#include <math.h>

#define ROWS 2 //definindo o tamanho da matriz
#define COLS 3

void printMatriz(float matriz[ROWS][COLS]) { //funcao que imprime a matriz
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
}

void elimDeGauss(float matriz[ROWS][COLS]) { //funcao que realiza a eliminacao de gauss
    for (int i = 0; i < ROWS - 1; i++) {
        // Encontrar o maior elemento na coluna atual
        int maiorNum = i;
        for (int j = i + 1; j < ROWS; j++) {
            if (fabs(matriz[j][i]) > fabs(matriz[maiorNum][i])) {
                maiorNum = j;
            }
        }

        // Trocar a linha atual com a linha do maior elemento
        if (i != maiorNum) { // Verificando se a matriz com o maior numero da primeira coluna é igual a matriz da linha 1 (inicial) 
            for (int j = 0; j < COLS; j++) {
                float temp = matriz[i][j];
                matriz[i][j] = matriz[maiorNum][j];
                matriz[maiorNum][j] = temp;
            }
        }
        
        for (int j = i + 1; j < ROWS; j++) {
            float fator = matriz[j][i] / matriz[i][i]; //calculando o fator de multiplicacao
            for (int k = i; k < COLS; k++) {
                matriz[j][k] -= fator * matriz[i][k]; //subtraindo a linha j da linha i * fator
                if (matriz[j][k]*1 != matriz[j][k]){
                    printf("\nErro: sistema indefinido\n");
                    return;
                }
            }
        }
    }
}

void solucLinear(float matriz[ROWS][COLS], float clc[ROWS]) {
    for (int i = ROWS - 1; i >= 0; i--) { //percorrendo a matriz de baixo para cima
        clc[i] = matriz[i][COLS - 1]; //atribuindo o valor da ultima coluna da matriz a um vetor

        for (int j = i + 1; j < COLS - 1; j++) { //calculando a solucao do sistema linear
            clc[i] -= matriz[i][j] * clc[j]; //subtraindo o valor da linha i da linha j * o valor do vetor na posicao j
        }
        
        clc[i] /= matriz[i][i]; //dividindo o valor do vetor na posicao i pelo valor da linha i da matriz
    }
}

int main() {
    float x[8] = {-1, -0.7, -0.4, -0.1, 0.2, 0.5, 0.8, 1}; //vetor de entrada
    float fx[8] = {3.599, 2.849, 2.099, 1.349, 0.599, -0.151, -0.901, -1.402}; //vetor de saida
    float matriz[2][3]; //matriz de entrada
    float sum_x;
    float sum_fx;
    float sum_xfx;

    for (int i = 0; i < 2; i++) { //preenchendo a matriz de entrada
        for (int j = 0; j < 2; j++) {
            sum_xfx = 0;
            for (int l = 0; l < 8; l++){
                if (i == 0){
                    sum_x = x[l];
                } else if (i == 1){
                    sum_x = 1;
                }

                if (j == 0){
                    sum_fx = x[l];
                } else if (j == 1){
                    sum_fx = 1;
                }
                sum_xfx += sum_x * sum_fx;
            }
            matriz[i][j] = sum_xfx;
            printf("%f ", matriz[i][j]);
        }
        printf("\n");
    }

    float b[2];

    for (int i = 0; i < 2; i++) { //preenchendo o vetor b
        sum_fx = 0;
        for (int j = 0; j < 8; j++) {
            if (i == 0){
                sum_fx += fx[j] * x[j];
            } else if (i == 1){
                sum_fx += fx[j];
            }
        }
        b[i] = sum_fx;
        printf("%f\n", b[i]);
    }

    matriz[0][2] = b[0];
    matriz[1][2] = b[1];

    //float matriz[ROWS][COLS] = {{3, 2, 4, 1}, {1, 1, 2, 2}, {4, 3, 2, 3}}; // matriz de entrada {0, 1, 4, 7}, {0, 2, 5, 8}, {0, 3, 6, 9}
    float clc[ROWS];
    printf("Matriz original:\n"); //imprimindo a matriz original
    printMatriz(matriz);

    elimDeGauss(matriz);

    printf("\nMatriz apos a eliminacao de gauss com pivoteamento:\n"); //imprimindo a matriz apos a eliminacao de gauss
    printMatriz(matriz);

    solucLinear(matriz, clc); //calculando a solucao do sistema linear 

    printf("\nSolucao do sistema linear:\n"); //imprimindo a solucao do sistema linear
    for (int i = 0; i < ROWS; i++) {
        printf("x%d = %f\n", i + 1, clc[i]);
    }

    return 0;
}

