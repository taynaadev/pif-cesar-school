#include <stdio.h>

/* Questao 14 - Numeros de 1 a 100, seus quadrados e a soma total */

int main(void) {
    int i;
    int soma = 0;   /* acumulador inicializado antes do laco */

    for (i = 1; i <= 100; i++) {
        printf("%d -> %d\n", i, i * i);
        soma += i * i;
    }

    printf("\nSoma total dos quadrados: %d\n", soma);

    return 0;
}
