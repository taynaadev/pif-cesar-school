#include <stdio.h>

/* Questao 23 - Quadrado vazado com o caractere 'X' */

int main(void) {
    int l, i, j;

    do {
        printf("Digite o lado do quadrado (3 a 20): ");
        scanf("%d", &l);

        if (l < 3 || l > 20) {
            printf("Valor invalido!\n");
        }
    } while (l < 3 || l > 20);

    for (i = 1; i <= l; i++) {
        for (j = 1; j <= l; j++) {
            /* desenha apenas a borda: primeira/ultima linha e coluna */
            if (i == 1 || i == l || j == 1 || j == l) {
                printf("X");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
