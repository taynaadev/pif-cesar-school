#include <stdio.h>

/* Questao 16 - Autenticacao de senha com no maximo 3 tentativas */

#define SENHA 2026

int main(void) {
    int tentativas = 0;
    int digitada;
    int acertou = 0;

    while (tentativas < 3 && !acertou) {
        printf("Tentativa %d de 3 - Digite a senha: ", tentativas + 1);
        scanf("%d", &digitada);
        tentativas++;

        if (digitada == SENHA) {
            acertou = 1;
        } else if (tentativas < 3) {
            printf("Senha incorreta!\n");
        }
    }

    if (acertou) {
        printf("Acesso Concedido!\n");
        printf("Tentativas utilizadas: %d\n", tentativas);
    } else {
        printf("Conta Bloqueada por Seguranca!\n");
    }

    return 0;
}
