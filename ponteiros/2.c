#include<stdio.h>

int main() {
    int x, z;
    printf("Escreva um numero\n");
    scanf("%i", &x);
    printf("Escreva outro numero\n");
    scanf("%i", &z);

    int *ptrx = &x;
    int *ptrz = &z;

    if (*ptrx < *ptrz) {
        printf("O maior numero é %i", z);
    } else {
        printf("O maior numero é %i", x);
    }

    return 0;
}
