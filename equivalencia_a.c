/*
 * Arquivo: questao_a.c
 * Objetivo: Verificar a equivalência lógica (a) p → q ⇔ (p ∧ ¬q) → F
 * Método: Tabela-verdade e comparação passo a passo
 * Autor: Diogo de Souza Santos
 * Data: 03/04/1991
 */
#include <stdio.h>      // Para printf() e scanf()
#include <stdbool.h>    // Para usar tipo bool (true/false)

/**
 * Calcula p → q (implicação lógica)
 * @param p: Proposição p (true/false)
 * @param q: Proposição q (true/false)
 * @return: Resultado de p → q (¬p ∨ q)
 */
bool implica(bool p, bool q) {
    return !p || q;  // Equivalente a "se p, então q"
}
/**
 * Verifica a equivalência (a): p → q ⇔ (p ∧ ¬q) → F
 * @param p: Proposição p
 * @param q: Proposição q
 * @return: true se as expressões são equivalentes
 */
bool verifica_equivalencia_a(bool p, bool q) {
    // Passo 1: Calcula p → q
    bool implicacao = implica(p, q);
    
    // Passo 2: Calcula (p ∧ ¬q) → F
    bool p_e_nao_q = p && !q;       // p ∧ ¬q
    bool lado_direito = implica(p_e_nao_q, false);  // (p ∧ ¬q) → F
    
    // Passo 3: Compara os dois lados
    return implicacao == lado_direito;
}
int main() {
    printf("\n=== QUESTÃO (a) ===\n");
    printf("Verificação da equivalência: p → q ⇔ (p ∧ ¬q) → F\n\n");
    
    printf("Passo a passo da verificação:\n");
    printf("1. Calcula p → q como ¬p ∨ q\n");
    printf("2. Calcula (p ∧ ¬q) → F como ¬(p ∧ ¬q)\n");
    printf("3. Compara os resultados\n\n");
    
    printf("Tabela-Verdade:\n");
    printf(" p | q | p→q | (p∧¬q)→F | Equivalente?\n");
    printf("------------------------------------\n");

    // Loop para testar todas as combinações de p e q (0 e 1)
    for (int p = 0; p <= 1; p++) {
        for (int q = 0; q <= 1; q++) {
            bool resultado = verifica_equivalencia_a(p, q);
            printf(" %d | %d |  %d  |    %d     |      %d\n", 
                   p, q, 
                   implica(p, q), 
                   implica(p && !q, false), 
                   resultado);
        }
    }
    
    printf("\nConclusão: Todos os resultados são 1 (verdadeiro), logo a equivalência é válida!\n");
    return 0;
}