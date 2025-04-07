#include <stdio.h>       // Para funções de entrada/saída (printf, scanf)
#include <stdbool.h>     // Para usar tipo 'bool' (true/false)

// Função que calcula a implicação lógica (p → q)
bool implies(bool p, bool q) {
    return !p || q;  // p → q é equivalente a ¬p ∨ q
}

// Função que calcula a negação (¬p)
bool negation(bool p) {
    return !p;       // Retorna o valor negado de p
}

// Equivalência (a): p → q ⇔ (p ∧ ¬q) → F
bool equivalence_a(bool p, bool q) {
    bool left = implies(p, q);           // Calcula p → q
    bool right = implies(p && !q, false); // Calcula (p ∧ ¬q) → F
    return left == right;                // Retorna 1 se forem equivalentes
}

// Equivalência (o): p → q ⇔ ¬q → ¬p (Contrapositiva)
bool equivalence_o(bool p, bool q) {
    bool left = implies(p, q);           // Calcula p → q
    bool right = implies(!q, !p);        // Calcula ¬q → ¬p
    return left == right;                // Retorna 1 se forem equivalentes
}

// Equivalência (r): p → q ⇔ ¬(p ∧ ¬q)
bool equivalence_r(bool p, bool q) {
    bool left = implies(p, q);           // Calcula p → q
    bool right = !(p && !q);             // Calcula ¬(p ∧ ¬q)
    return left == right;                // Retorna 1 se forem equivalentes
}

int main() {
    int choice;
    printf("Digite o número da questão (1 para (a), 2 para (o), 3 para (r)): ");
    scanf("%d", &choice);  // Lê a escolha do usuário

    printf("\nTabela-Verdade:\n");
    printf("p | q | Resultado\n");
    printf("----------------\n");

    // Loop sobre todas as combinações possíveis de p e q (0 e 1)
    for (int p = 0; p <= 1; p++) {
        for (int q = 0; q <= 1; q++) {
            bool result;
            switch (choice) {
                case 1: 
                    result = equivalence_a(p, q);  // Testa equivalência (a)
                    break;
                case 2: 
                    result = equivalence_o(p, q);  // Testa equivalência (o)
                    break;
                case 3: 
                    result = equivalence_r(p, q);  // Testa equivalência (r)
                    break;
                default: 
                    printf("Questão inválida!\n"); 
                    return 1;  // Encerra o programa se a escolha for inválida
            }
            printf("%d | %d |    %d\n", p, q, result);  // Imprime o resultado
        }
    }
    return 0;  // Encerra o programa com sucesso
}