#include <stdio.h>

/**
 * Autópsia 2: O Crime do '\n' Abandonado na Fila de Entrada
 * Autor: Marcel Florentino "Maçã" (applephoria)
 *
 * Demonstração da herança das Teletypes de 1970:
 * O scanf("%d") consome os números, mas abandona o '\n' (Enter) no stdin.
 * O getchar() drena esse resíduo para evitar que o próximo scanf("%c") seja pulado.
 */

int main(void) {
    int idade;
    char opcao;

    printf("=== AUTOPSIA 2: A FILA DO TECLADO (STDIN) ===\n\n");

    printf("Passo 1: Digite sua idade: ");
    scanf("%d", &idade);

    // Drenando o Enter ('\n') abandonado na fila do teclado:
    getchar();

    printf("Passo 2: Deseja cadastrar outro usuario? (S/N): ");
    scanf("%c", &opcao);

    printf("\n[Sucesso]: Idade = %d | Opcao = '%c'\n", idade, opcao);

    return 0;
}
