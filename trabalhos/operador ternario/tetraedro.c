#include <stdio.h>

int main() {
    int bolas,x;
    printf("Insira o número de bolas de canhão em cada lado da base:\n");
    scanf("%i", &bolas);

    if (bolas <= 0) {
        printf("O número de bolas deve ser um número positivo.\n");
    } else {
         x = (bolas * (bolas + 1) * (bolas + 2)) / 6;
        printf("O número total de bolas que podem caber no tetraedro é: %i\n", x);
    }
        // sim eu pesquisei a formula.
    return 0;
}
