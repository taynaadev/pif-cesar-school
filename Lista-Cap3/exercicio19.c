#include <stdio.h>

/* Questao 19 - N-esimo termo da sequencia de Fibonacci (1, 1, 2, 3, 5, 8...) */

int main(void) {
    int n, i;
    long long int a = 1, b = 1, c = 1;

    printf("Digite o numero do termo desejado (1 a 90): ");
    scanf("%d", &n);

    if (n < 1 || n > 90) {
        /* acima de 90 o valor nao cabe em long long int */
        printf("Erro: digite um valor entre 1 e 90.\n");
        return 0;
    }

    printf("Termos: ");
    for (i = 1; i <= n; i++) {
        if (i <= 2) {
            c = 1;               /* os dois primeiros termos valem 1 */
        } else {
            c = a + b;           /* soma dos dois anteriores */
            a = b;
            b = c;
        }
        printf("%lld ", c);
    }

    printf("\nO termo %d da sequencia vale %lld\n", n, c);

    return 0;
}
