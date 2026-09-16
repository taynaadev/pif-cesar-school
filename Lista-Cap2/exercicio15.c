#include <stdio.h>

int main(void) {
    float n1, n2, n3, n4;
    float media_simples, media_ponderada;

    printf("Digite as quatro notas: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media_simples = (n1 + n2 + n3 + n4) / 4.0;

    // Pesos: provas 1 e 2 -> peso 1 | provas 3 e 4 -> peso 2
    media_ponderada = (n1 * 1 + n2 * 1 + n3 * 2 + n4 * 2) / 6.0;

    printf("Media aritmetica simples: %.2f\n", media_simples);
    printf("Media ponderada: %.2f\n", media_ponderada);

    return 0;
}
