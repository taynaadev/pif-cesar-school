#include <stdio.h>

/* Questao 24 - Padrao visual em X (duas diagonais) com '*' */

int main(void) {
    int n, i, j;

    do {
        printf("Digite uma dimensao impar N (3 a 19): ");
        scanf("%d", &n);

        if (n < 3 || n > 19 || n % 2 == 0) {
            printf("Valor invalido!\n");
        }
    } while (n < 3 || n > 19 || n % 2 == 0);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            /* i == j: diagonal principal | i + j == n - 1: diagonal secundaria */
            if (i == j || i + j == n - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
