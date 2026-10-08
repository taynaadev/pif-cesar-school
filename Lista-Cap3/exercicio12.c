#include <stdio.h>

/* Questao 12 - Tabela de conversao Celsius -> Fahrenheit e Kelvin */

int main(void) {
    float celsius, fahrenheit, kelvin;

    printf("%10s %12s %10s\n", "Celsius", "Fahrenheit", "Kelvin");
    printf("---------------------------------\n");

    for (celsius = 0; celsius <= 100; celsius += 5) {
        fahrenheit = (9 * celsius) / 5 + 32;
        kelvin = celsius + 273.15;

        printf("%10.2f %12.2f %10.2f\n", celsius, fahrenheit, kelvin);
    }

    return 0;
}
