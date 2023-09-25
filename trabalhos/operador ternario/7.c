#include <stdio.h>

int main() {
    char nome[100], sexo;
    int idade;

    printf("Digite o nome: ");
    scanf("%s", nome);

    printf("Digite o sexo (M para masculino, F para feminino): ");
    scanf(" %c", &sexo);

    printf("Digite a idade: ");
    scanf("%d", &idade);

    (sexo == 'F' && idade < 25) ?
        printf("%s: ACEITA\n", nome) :
        printf("%s: NÃO ACEITA\n", nome);

    return 0;
}
