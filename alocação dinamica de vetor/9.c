#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int size;
    double *vector;

    printf("Quantos valores deseja armazenar no vetor? ");
    scanf("%d", &size);


    vector = (double *)malloc(size * sizeof(double));

 
    if (vector == NULL) {
        printf("Erro ao alocar memória.");
        return 1;
    }


    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        vector[i] = (double)(rand() % 101);
    }


    printf("Valores armazenados no vetor:\n");
    for (int i = 0; i < size; i++) {
        printf("%.2lf ", vector[i]);
    }

    free(vector);

    return 0;
}