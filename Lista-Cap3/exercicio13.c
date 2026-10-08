#include <stdio.h>

/* Questao 13 - Fatorial com long long int e tratamento de casos especiais */

int main(void) {
    int n, i;
    long long int fatorial = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: nao existe fatorial de numero negativo.\n");
    } else if (n > 20) {
        /* 21! ja estoura o limite do long long int */
        printf("Erro: %d! e grande demais (maximo suportado: 20).\n", n);
    } else {
        /* Para n = 0 ou n = 1 o laco nao executa e o fatorial continua 1 */
        for (i = 2; i <= n; i++) {
            fatorial *= i;
        }
        printf("%d! = %lld\n", n, fatorial);
    }

    return 0;
}
