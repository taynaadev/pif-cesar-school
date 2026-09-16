#include <stdio.h>

int main(void) {
    char maiuscula, minuscula;

    printf("Digite uma letra maiuscula: ");
    scanf("%c", &maiuscula);

    // Deslocamento na tabela ASCII: subtrai 'A' e soma 'a'
    minuscula = maiuscula - 'A' + 'a';

    printf("Letra minuscula: %c\n", minuscula);

    return 0;
}
