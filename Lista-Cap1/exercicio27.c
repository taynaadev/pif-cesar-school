#include <stdio.h>

int main()
{
    int segundos;
    int horas;
    int minutos;
    int segundosRestantes;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    segundosRestantes = segundos % 3600;

    minutos = segundosRestantes / 60;
    segundosRestantes = segundosRestantes % 60;

    printf("%d hora(s), %d minuto(s) e %d segundo(s).\n",
           horas, minutos, segundosRestantes);

    return 0;
}
