#include <stdio.h>

int main(void) {
    float altura_degrau_cm, altura_total_m, altura_total_cm;
    int num_degraus;

    printf("Digite a altura de cada degrau (cm): ");
    scanf("%f", &altura_degrau_cm);

    printf("Digite a altura total a alcancar (m): ");
    scanf("%f", &altura_total_m);

    // Conversao de unidades: metros para centimetros
    altura_total_cm = altura_total_m * 100.0;

    // Arredonda para cima, pois e necessario um degrau extra
    // caso sobre uma fracao de degrau
    num_degraus = (int)(altura_total_cm / altura_degrau_cm + 0.9999);

    printf("Numero minimo de degraus: %d\n", num_degraus);

    return 0;
}
