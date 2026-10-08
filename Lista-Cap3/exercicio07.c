#include <stdio.h>

/* Questao 07 - Contagem de 0 a 100 com for, while e do-while */

int main(void) {
    int i;

    /* Versao 1: for */
    printf("=== Versao com FOR ===\n");
    for (i = 0; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    /* Versao 2: while */
    printf("=== Versao com WHILE ===\n");
    i = 0;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");

    /* Versao 3: do-while */
    printf("=== Versao com DO-WHILE ===\n");
    i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    printf("\n");

    return 0;
}

/*
 * Resposta: a estrutura mais adequada para este caso e o FOR.
 * Motivo: sabemos exatamente quantas vezes o laco deve repetir (de 0 a 100),
 * e o for junta inicializacao, teste e incremento na mesma linha, deixando o
 * codigo mais curto, legivel e com menos risco de esquecer o i++ (o que
 * causaria um laco infinito no while e no do-while).
 */
