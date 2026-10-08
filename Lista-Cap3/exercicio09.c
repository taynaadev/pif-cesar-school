#include <stdio.h>

/* Questao 09 - Acumulador de valores reais com sentinela negativa */

int main(void) {
    float valor;
    float soma = 0.0;
    float media;
    int quantidade = 0;

    printf("Digite valores reais positivos (um valor negativo encerra).\n");

    printf("Valor: ");
    scanf("%f", &valor);

    while (valor >= 0) {
        soma += valor;
        quantidade++;

        printf("Valor: ");
        scanf("%f", &valor);
    }

    /* O valor negativo de parada nao entra nos calculos */
    if (quantidade > 0) {
        media = soma / quantidade;
        printf("\nQuantidade de valores validos: %d\n", quantidade);
        printf("Soma total: %.2f\n", soma);
        printf("Media aritmetica: %.2f\n", media);
    } else {
        printf("\nNenhum valor valido foi digitado.\n");
    }

    return 0;
}
