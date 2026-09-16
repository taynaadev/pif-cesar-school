#include <stdio.h>

int main(void) {
    float horas_normais, horas_extras;
    float salario_anual, imposto;

    printf("Digite o total de horas normais trabalhadas no ano: ");
    scanf("%f", &horas_normais);

    printf("Digite o total de horas extras trabalhadas no ano: ");
    scanf("%f", &horas_extras);

    salario_anual = (horas_normais * 10.0) + (horas_extras * 15.0);

    // Operador ternario: isento ate R$12.000,00, senao paga 10% sobre o excedente
    imposto = (salario_anual > 12000.0) ? ((salario_anual - 12000.0) * 0.10) : 0.0;

    printf("Salario anual bruto: R$ %.2f\n", salario_anual);
    printf("Imposto a pagar: R$ %.2f\n", imposto);

    return 0;
}
