#include <stdio.h>

/* Questao 18 - Inversao de digitos de um numero inteiro positivo */

int main(void) {
    int numero, original, digito;
    long long int invertido = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Erro: o numero deve ser positivo.\n");
        return 0;
    }

    original = numero;

    while (numero > 0) {
        digito = numero % 10;                 /* pega o ultimo digito */
        invertido = invertido * 10 + digito;  /* coloca no fim do novo numero */
        numero = numero / 10;                 /* remove o ultimo digito */
    }

    printf("Numero original: %d\n", original);
    printf("Numero invertido: %lld\n", invertido);

    return 0;
}
