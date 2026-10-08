#include <stdio.h>

/* Questao 26 - Primos no intervalo [A, B] e soma deles */

int main(void) {
    int a, b, i, j;
    int divisores;
    int soma = 0;
    int encontrou = 0;

    do {
        printf("Digite o numero A: ");
        scanf("%d", &a);
        printf("Digite o numero B (maior que A): ");
        scanf("%d", &b);

        if (a <= 0 || b <= 0 || a >= b) {
            printf("Valores invalidos! Use inteiros positivos com A < B.\n");
        }
    } while (a <= 0 || b <= 0 || a >= b);

    printf("Primos entre %d e %d: ", a, b);

    for (i = a; i <= b; i++) {
        /* conta os divisores de i */
        divisores = 0;
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                divisores++;
            }
        }

        if (divisores == 2) {
            printf("%d ", i);
            soma += i;
            encontrou = 1;
        }
    }

    if (encontrou) {
        printf("\nSoma dos primos encontrados: %d\n", soma);
    } else {
        printf("nenhum primo encontrado.\n");
    }

    return 0;
}
