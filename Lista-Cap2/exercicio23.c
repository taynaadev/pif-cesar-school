#include <stdio.h>

int main(void) {
    int h, m, s, duracao_segundos;
    int total_segundos, h_fim, m_fim, s_fim;

    printf("Digite o horario de inicio (horas minutos segundos): ");
    scanf("%d %d %d", &h, &m, &s);

    printf("Digite a duracao do experimento (em segundos): ");
    scanf("%d", &duracao_segundos);

    total_segundos = h * 3600 + m * 60 + s + duracao_segundos;

    h_fim = (total_segundos / 3600) % 24;
    m_fim = (total_segundos % 3600) / 60;
    s_fim = total_segundos % 60;

    printf("Horario de termino: %02d:%02d:%02d\n", h_fim, m_fim, s_fim);

    return 0;
}
