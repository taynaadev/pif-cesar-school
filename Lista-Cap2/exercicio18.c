#include <stdio.h>

#define PI 3.141593

int main(void) {
    float raio, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    area = 4 * PI * raio * raio;
    // 4.0/3.0 garante divisao real, evitando o truncamento de 4/3
    volume = (4.0 / 3.0) * PI * raio * raio * raio;

    printf("Area de superficie: %.2f\n", area);
    printf("Volume: %.2f\n", volume);

    return 0;
}
