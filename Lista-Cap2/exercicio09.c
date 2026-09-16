#include <stdio.h>

int main(void) {
    int a, b;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    printf("Soma: %d\n", a + b);
    printf("Subtracao: %d\n", a - b);
    printf("Multiplicacao: %d\n", a * b);

    // Para evitar divisao por zero, verifica-se matematicamente
    // se o divisor (b) e diferente de zero antes de realizar a divisao.
    if (b != 0) {
        printf("Divisao real: %.2f\n", (float)a / b);
    } else {
        printf("Divisao real: indefinida (divisao por zero)\n");
    }

    return 0;
}
