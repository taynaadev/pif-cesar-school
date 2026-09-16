#include <stdio.h>

int main(void) {
    float lado, base, altura;
    float area_quadrado, area_retangulo, area_triangulo;

    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);
    area_quadrado = lado * lado;

    printf("Digite a base e a altura do retangulo: ");
    scanf("%f %f", &base, &altura);
    area_retangulo = base * altura;

    printf("Digite a base e a altura do triangulo retangulo: ");
    scanf("%f %f", &base, &altura);
    area_triangulo = (base * altura) / 2.0;

    printf("Area do quadrado: %.2f\n", area_quadrado);
    printf("Area do retangulo: %.2f\n", area_retangulo);
    printf("Area do triangulo: %.2f\n", area_triangulo);

    return 0;
}
