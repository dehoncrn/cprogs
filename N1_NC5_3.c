#include <stdio.h>

int main() {

    int idade;
    float altura;
    char opcao;

    printf("Digite sua idade:\n");
    scanf("%d", &idade);
    printf("Digite sua altura:\n");
    scanf("%f", &altura);
    printf("Entre com a opcao:\n");
    scanf(" %c", &opcao);
    printf("A opção é: %c", opcao);

}