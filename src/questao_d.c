#include <stdio.h>
#include <stdbool.h>  // Para usar tipo 'bool'

/**
 * Função que verifica a implicação lógica (a → b)
 * @param a: Premissa
 * @param b: Conclusão
 * @return: Resultado da implicação (¬a ∨ b)
 */
bool implica(bool a, bool b) {
    return !a || b;  // Equivalente a "se a, então b"
}

/**
 * Função que verifica a equivalência (d): ∼p → (p ∧ q) ⇔ p
 * @param p: Valor lógico de p
 * @param q: Valor lógico de q
 * @return: true se a equivalência for válida para os valores de p e q
 */
bool verifica_equivalencia_d(bool p, bool q) {
    bool lado_esquerdo = implica(!p, p && q);  // ∼p → (p ∧ q)
    return lado_esquerdo == p;                 // Compara com o lado direito (p)
}

int main() {
    printf("=== Questão (d) ===\n");
    printf("Verificando se ∼p → (p ∧ q) ⇔ p\n\n");

    printf("Passo a passo da verificação:\n");
    printf("1. Calcula ∼p → (p ∧ q) como ¬(∼p) ∨ (p ∧ q) → p ∨ (p ∧ q) → p (absorção)\n");
    printf("2. Compara com o lado direito (p)\n\n");

    printf("Tabela-Verdade:\n");
    printf(" p | q | ∼p→(p∧q) | p | Equivalente?\n");
    printf("-----------------------------------\n");

    // Testa todas as combinações de p e q (0 e 1)
    for (int p = 0; p <= 1; p++) {
        for (int q = 0; q <= 1; q++) {
            bool resultado = verifica_equivalencia_d(p, q);
            printf(" %d | %d |     %d     | %d |      %d\n", 
                   p, q, 
                   implica(!p, p && q), 
                   p, 
                   resultado);
        }
    }

    printf("\nConclusão: A equivalência é válida em todos os casos!\n");
    return 0;
}