#include <stdio.h>

/* Questao 10 - Os 100 primeiros multiplos de 3, 10 por linha */

int main(void) {
    int i;
    int multiplo;

    for (i = 1; i <= 100; i++) {
        multiplo = 3 * i;
        printf("%d\t", multiplo);

        /* a cada 10 numeros, pula para a proxima linha */
        if (i % 10 == 0) {
            printf("\n");
        }
    }

    return 0;
}
