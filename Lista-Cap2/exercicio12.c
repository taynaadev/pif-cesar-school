#include <stdio.h>

int main(void) {
    int numero, antecessor, sucessor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    antecessor = numero;
    antecessor--; // operador unario de decremento

    sucessor = numero;
    sucessor++; // operador unario de incremento

    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n", sucessor);

    return 0;
}
