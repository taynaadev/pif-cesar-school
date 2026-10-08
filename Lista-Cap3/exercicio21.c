#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Questao 21 - Jogo de adivinhacao de letra com dicas */

int main(void) {
    char secreta, palpite;
    int tentativas = 0;

    srand(time(NULL));              /* muda a semente a cada execucao */
    secreta = rand() % 26 + 'a';    /* sorteia uma letra de 'a' a 'z' */

    printf("Sorteei uma letra minuscula de 'a' a 'z'. Tente adivinhar!\n");

    do {
        printf("Seu palpite: ");
        scanf(" %c", &palpite);     /* o espaco antes do %c ignora o Enter anterior */

        if (palpite < 'a' || palpite > 'z') {
            printf("Digite apenas uma letra minuscula (a-z)!\n");
            continue;               /* nao conta como tentativa */
        }

        tentativas++;

        if (palpite < secreta) {
            printf("A letra secreta vem DEPOIS de '%c' no alfabeto.\n", palpite);
        } else if (palpite > secreta) {
            printf("A letra secreta vem ANTES de '%c' no alfabeto.\n", palpite);
        }
    } while (palpite != secreta);

    printf("Parabens! Voce acertou a letra '%c' em %d tentativa(s).\n", secreta, tentativas);

    return 0;
}
