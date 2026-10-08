#include <stdio.h>

/* Questao 27 - Caixa eletronico: menor quantidade de cedulas
 * Cedulas disponiveis: R$ 100, 50, 20, 10, 5 e 2.
 *
 * Observacao: como nao existe cedula de R$ 1, os valores R$ 1 e R$ 3 sao
 * impossiveis. Para os demais, o programa subtrai as cedulas das maiores
 * para as menores; se sobrar R$ 1 ou R$ 3 (que nao da para pagar), ele
 * "devolve" uma cedula da nota atual para que a sobra possa ser paga com
 * as cedulas menores (ex.: R$ 13 = 5 + 2 + 2 + 2 + 2).
 */

int main(void) {
    int valor, nota, qtd, i;

    printf("Digite o valor do saque (R$): ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("Valor invalido!\n");
    } else if (valor == 1 || valor == 3) {
        printf("Impossivel sacar R$ %d com cedulas de 100, 50, 20, 10, 5 e 2.\n", valor);
    } else {
        printf("Cedulas necessarias:\n");

        for (i = 0; i < 6; i++) {
            /* escolhe a cedula da vez, da maior para a menor */
            switch (i) {
                case 0: nota = 100; break;
                case 1: nota = 50;  break;
                case 2: nota = 20;  break;
                case 3: nota = 10;  break;
                case 4: nota = 5;   break;
                default: nota = 2;  break;
            }

            /* subtracoes sucessivas */
            qtd = 0;
            while (valor >= nota) {
                valor -= nota;
                qtd++;
            }

            /* se sobrou 1 ou 3, devolve uma cedula para sobrar um valor pagavel */
            if ((valor == 1 || valor == 3) && qtd > 0) {
                qtd--;
                valor += nota;
            }

            if (qtd > 0) {
                printf("%d cedula(s) de R$ %d\n", qtd, nota);
            }
        }
    }

    return 0;
}
