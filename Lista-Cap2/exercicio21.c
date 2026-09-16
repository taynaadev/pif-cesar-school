#include <stdio.h>

int main(void) {
    char caractere;

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    // %d exibe o codigo ASCII correspondente, pois todo char
    // e armazenado internamente como um valor inteiro de 1 byte
    printf("Codigo ASCII: %d\n", caractere);

    return 0;
}
