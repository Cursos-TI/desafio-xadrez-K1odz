#include <stdio.h>

/*
 * Programa para simular o movimento de tres pecas de xadrez.
 * Utiliza for, while e do-while para representar movimentos distintos.
 * Torre: movimento horizontal (direita)
 * Bispo: movimento diagonal (cima-direita)
 * Rainha: movimento horizontal (esquerda)
 */

int main(void)
{
    printf("=== SIMULACAO DE MOVIMENTOS DE PECAS DE XADREZ ===\n\n");

    /* ========== TORRE: Movimento Horizontal com FOR ==========
       A Torre move-se em linha reta. Simularemos seu movimento
       5 casas para a direita utilizando estrutura for.
    */
    printf("TORRE - Movimento para a DIREITA (5 casas):\n");
    int casas_torre = 5;
    for (int i = 1; i <= casas_torre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    printf("\n");

    /* ========== BISPO: Movimento Diagonal com WHILE ==========
       O Bispo move-se na diagonal. Simularemos seu movimento
       5 casas na diagonal para cima e a direita utilizando while.
    */
    printf("BISPO - Movimento na DIAGONAL CIMA-DIREITA (5 casas):\n");
    int casas_bispo = 5;
    int contador_bispo = 1;
    while (contador_bispo <= casas_bispo) {
        printf("Casa %d: Cima Direita\n", contador_bispo);
        contador_bispo++;
    }

    printf("\n");

    /* ========== RAINHA: Movimento Horizontal com DO-WHILE ==========
       A Rainha move-se em todas as direcoes. Simularemos seu movimento
       8 casas para a esquerda utilizando estrutura do-while.
    */
    printf("RAINHA - Movimento para a ESQUERDA (8 casas):\n");
    int casas_rainha = 8;
    int contador_rainha = 1;
    do {
        printf("Casa %d: Esquerda\n", contador_rainha);
        contador_rainha++;
    } while (contador_rainha <= casas_rainha);

    printf("\n");

    /* ========== CAVALO: Movimento em L com LOOPS ANINHADOS ==========
       O Cavalo move-se em forma de L: duas casas em uma direcao e uma
       casa perpendicularmente. Simularemos seu movimento (2 casas para
       baixo e 1 casa para esquerda) utilizando loops aninhados:
       - Loop FOR externo: controla o movimento para BAIXO (2 casas)
       - Loop WHILE interno: controla o movimento para ESQUERDA (1 casa)
    */
    printf("CAVALO - Movimento em L (2 casas BAIXO, 1 casa ESQUERDA):\n");
    int casas_baixo_cavalo = 2;
    int casas_esquerda_cavalo = 1;
    int passo_cavalo = 1;

    /* Loop FOR externo: para as 2 casas para baixo */
    for (int i = 1; i <= casas_baixo_cavalo; i++) {
        printf("Passo %d: Baixo\n", passo_cavalo);
        passo_cavalo++;
    }

    /* Loop WHILE interno: para 1 casa para esquerda */
    int contador_esquerda = 1;
    while (contador_esquerda <= casas_esquerda_cavalo) {
        printf("Passo %d: Esquerda\n", passo_cavalo);
        passo_cavalo++;
        contador_esquerda++;
    }

    printf("\n=== FIM DA SIMULACAO ===\n");

    return 0;
}
