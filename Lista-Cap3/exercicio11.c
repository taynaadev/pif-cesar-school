#include <stdio.h>

/* Questao 11 - Intervalo entre A e B (crescente ou decrescente) */

int main(void) {
    int a, b, i;

    printf("Digite o numero A: ");
    scanf("%d", &a);
    printf("Digite o numero B: ");
    scanf("%d", &b);

    if (a <= b) {
        /* ordem crescente */
        for (i = a; i <= b; i++) {
            printf("%d ", i);
        }
    } else {
        /* ordem decrescente */
        for (i = a; i >= b; i--) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
