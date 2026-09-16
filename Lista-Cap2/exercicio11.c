#include <stdio.h>

#define PI 3.141593

int main(void) {
    float graus, radianos;

    printf("Digite o angulo em graus: ");
    scanf("%f", &graus);

    radianos = graus * (PI / 180.0);

    printf("Radianos: %.4f\n", radianos);

    return 0;
}
