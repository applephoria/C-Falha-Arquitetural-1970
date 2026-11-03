#include <stdio.h>

/**
 * Autópsia 1: O Lixo de Memória na Stack
 * Autor: Marcel Florentino "Maçã" (applephoria)
 *
 * Demonstração empírica de que a memória RAM em C nunca nasce vazia.
 * Sem a inicialização explícita com (= 0), a variável herda os transistores
 * do processo anterior alocado pelo Sistema Operacional.
 */

int main(void) {
    int contador;
    int total;

    printf("=== AUTOPSIA 1: FISICA DA MEMORIA RAM ===\n\n");
    printf("Valor cru de contador na Stack: %d\n", contador);
    printf("Valor cru de total na Stack:    %d\n", total);

    printf("\n[Conclusao]: A memoria RAM preserva os residuos eletricos do SO!\n");

    return 0;
}
