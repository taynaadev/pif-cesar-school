#include <stdio.h>

int main(void) {
    int dias;
    float bruto, liquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);

    bruto = dias * 30.0;
    liquido = bruto - (bruto * 0.08); // desconto de 8% de IR

    printf("Valor bruto: R$ %.2f\n", bruto);
    printf("Valor liquido: R$ %.2f\n", liquido);

    return 0;
}
