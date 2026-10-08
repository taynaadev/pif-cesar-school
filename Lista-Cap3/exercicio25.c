#include <stdio.h>

/* Questao 25 - Teste de primalidade contando os divisores */

int main(void) {
    int n, i;
    int divisores = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: o numero deve ser positivo.\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisores++;
        }
    }

    printf("O numero %d tem %d divisor(es).\n", n, divisores);

    /* primo = exatamente 2 divisores (1 e ele mesmo) */
    if (divisores == 2) {
        printf("%d e um numero PRIMO.\n", n);
    } else {
        printf("%d NAO e um numero primo.\n", n);
    }

    return 0;
}
