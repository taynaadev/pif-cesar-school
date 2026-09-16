#include <stdio.h>
#include <math.h> // necessario para sqrt() -- compilar com -lm

int main(void) {
    float a, b, c, p, area;

    printf("Digite os tres lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);

    p = (a + b + c) / 2.0;
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("Area do triangulo: %.2f\n", area);

    return 0;
}
