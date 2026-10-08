#include <stdio.h>

/* Questao 17 - Estatisticas da turma (total, maior, menor e media) */

int main(void) {
    float nota;
    float soma = 0.0;
    float maior = 0.0;
    float menor = 0.0;
    int total = 0;

    printf("Digite as notas (0.0 a 10.0). Digite -1.0 para encerrar.\n");

    printf("Nota: ");
    scanf("%f", &nota);

    while (nota != -1.0) {
        if (nota < 0.0 || nota > 10.0) {
            printf("Nota invalida! Digite um valor entre 0.0 e 10.0.\n");
        } else {
            if (total == 0) {
                /* primeira nota valida: e ao mesmo tempo a maior e a menor */
                maior = nota;
                menor = nota;
            } else {
                if (nota > maior) {
                    maior = nota;
                }
                if (nota < menor) {
                    menor = nota;
                }
            }
            soma += nota;
            total++;
        }

        printf("Nota: ");
        scanf("%f", &nota);
    }

    if (total > 0) {
        printf("\nTotal de alunos avaliados: %d\n", total);
        printf("Maior nota da turma: %.2f\n", maior);
        printf("Menor nota da turma: %.2f\n", menor);
        printf("Media geral da turma: %.2f\n", soma / total);
    } else {
        printf("\nNenhuma nota valida foi digitada.\n");
    }

    return 0;
}
