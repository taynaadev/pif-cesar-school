#include <stdio.h>
#include <math.h> // necessario para pow() e sqrt() -- compilar com -lm

int main(void) {
    float lado_a, lado_b, hipotenusa;

    printf("Digite o valor dos dois catetos: ");
    scanf("%f %f", &lado_a, &lado_b);

    hipotenusa = sqrt(pow(lado_a, 2) + pow(lado_b, 2));

    printf("Hipotenusa: %.2f\n", hipotenusa);

    return 0;
}
