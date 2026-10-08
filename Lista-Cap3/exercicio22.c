#include <stdio.h>

/* Questao 22 - Triangulo de Floyd com lacos aninhados */

int main(void) {
    int n, linha, coluna;
    int numero = 1;

    printf("Digite o numero de linhas (N): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: N deve ser positivo.\n");
        return 0;
    }

    for (linha = 1; linha <= n; linha++) {
        /* a linha k tem k numeros */
        for (coluna = 1; coluna <= linha; coluna++) {
            if (coluna > 1) {
                printf(" ");
            }
            printf("%d", numero);
            numero++;
        }
        printf("\n");
    }

    return 0;
}
