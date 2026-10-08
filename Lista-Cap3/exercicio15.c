#include <stdio.h>

/* Questao 15 - Multiplos de 3 e de 5 ao mesmo tempo de 1 ate NUM */

int main(void) {
    int num, i;
    int encontrou = 0;

    printf("Digite um numero limite inteiro positivo: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Erro: o numero deve ser positivo.\n");
        return 0;
    }

    printf("Multiplos de 3 e de 5 entre 1 e %d: ", num);
    for (i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("nenhum numero satisfaz a condicao.");
    }
    printf("\n");

    return 0;
}
