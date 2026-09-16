#include <stdio.h>

int main(void) {
    float comprimento, largura, preco_metro;
    float perimetro, metros_arame, custo_total;

    printf("Digite o comprimento e a largura do terreno (m): ");
    scanf("%f %f", &comprimento, &largura);

    printf("Digite o preco por metro do arame farpado: ");
    scanf("%f", &preco_metro);

    perimetro = 2 * (comprimento + largura);
    metros_arame = perimetro * 3; // 3 fios de arame

    custo_total = metros_arame * preco_metro;

    printf("Metros de arame necessarios: %.2f\n", metros_arame);
    printf("Custo total: R$ %.2f\n", custo_total);

    return 0;
}
