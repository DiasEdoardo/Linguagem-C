#include <stdio.h>

void converter(int metros) {
    int decimetros = metros * 10;
    int centimetros = metros * 100;
    int milimetros = metros * 1000;

    printf("%d metros equivalem a:\n", metros);
    printf("%d decímetros\n", decimetros);
    printf("%d centímetros\n", centimetros);
    printf("%d milímetros\n", milimetros);
}

int main() {
    int metros;

    printf("Digite um valor em metros: ");
    scanf("%d", &metros);

    converter(metros);

    return 0;
}
