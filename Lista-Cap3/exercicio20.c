#include <stdio.h>

/* Questao 20 - Tabela ASCII (caracteres imprimiveis, codigos 32 a 126) */

int main(void) {
    int codigo;

    printf("Decimal\tHexa\tCaractere\n");
    printf("-----------------------------\n");

    for (codigo = 32; codigo <= 126; codigo++) {
        printf("%d\t%X\t%c\n", codigo, codigo, codigo);
    }

    return 0;
}
