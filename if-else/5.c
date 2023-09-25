#include <stdio.h>

int main() {
    int x;

    printf("Digite um numero para saber se eh impar ou par:\n");
    scanf("%i", &x);

    if (x == 0) {
        printf("O numero digitado eh zero, que nao eh par nem impar.\n");
    } else if (x % 2 == 0) {
        printf("O numero digitado (%d) eh par.\n", x);
    } else {
        printf("O numero digitado (%d) eh impar.\n", x);
    }

    return 0;   
}
