#include <stdio.h>

/* Questao 28 - Folha de pagamento com menu continuo (do-while e switch) */

int main(void) {
    int opcao;
    float salario, novo_salario, desconto;

    do {
        printf("\n===== FOLHA DE PAGAMENTO =====\n");
        printf("1 - Reajuste Salarial\n");
        printf("2 - Retencao de Imposto de Renda\n");
        printf("3 - Encerrar Programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o salario atual: R$ ");
                scanf("%f", &salario);

                if (salario < 0) {
                    printf("Salario invalido!\n");
                } else {
                    if (salario <= 2000.0) {
                        novo_salario = salario * 1.15;   /* aumento de 15% */
                    } else {
                        novo_salario = salario * 1.10;   /* aumento de 10% */
                    }
                    printf("Novo salario: R$ %.2f\n", novo_salario);
                }
                break;

            case 2:
                printf("Digite o salario: R$ ");
                scanf("%f", &salario);

                if (salario < 0) {
                    printf("Salario invalido!\n");
                } else {
                    if (salario <= 3000.0) {
                        desconto = salario * 0.08;       /* 8% de imposto */
                    } else {
                        desconto = salario * 0.15;       /* 15% de imposto */
                    }
                    printf("Imposto de Renda retido: R$ %.2f\n", desconto);
                    printf("Salario liquido: R$ %.2f\n", salario - desconto);
                }
                break;

            case 3:
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opcao invalida! Escolha 1, 2 ou 3.\n");
        }
    } while (opcao != 3);

    return 0;
}
