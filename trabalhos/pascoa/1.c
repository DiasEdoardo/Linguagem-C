#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;
Data* calcularPascoa(int Y) {
    int G, C, X, Z, E, N, D;
    Data* pascoa = (Data*)malloc(sizeof(Data));
    G = Y % 19 + 1;
    C = Y / 100 + 1;
    X = (3 * C) / 4 - 12;
    Z = (8 * C + 5) / 25 - 5;
    E = (11 * G + 20 + Z - X) % 30;
    if (E == 25 && G > 11 || E == 24)
        E++;
    N = 44 - E;
    if (N < 21)
        N += 30;
    D = (5 * Y) / 4 - X - 10;
    N = N + 7 - (D + N) % 7;
    if (N > 31) {
        pascoa->dia = N - 31;
        pascoa->mes = 4;
    } else {
        pascoa->dia = N;
        pascoa->mes = 3;
    }
    pascoa->ano = Y;

    return pascoa;
}

int main() {
    int ano, i;

    printf("Digite o ano para calcular a data da Pascoa: ");
    scanf("%d", &ano);
    for (i = 0; i < 5; i++) {
        Data* dataPascoa = calcularPascoa(ano + i);
        printf("Pascoa: %d de %s de %d\n", dataPascoa->dia, (dataPascoa->mes == 4) ? "abril" : "marco", dataPascoa->ano);
        free(dataPascoa);
    }

    return 0;
}