#include <stdio.h>
#include <stdbool.h>

bool verifica_equivalencia_c(bool p, bool q, bool r)
{
    bool lado_esquerdo = !p && (q || r); // ∼p ∧ (q ∨ r)
    bool lado_direito = !(p && !q) || r; // (p ∧ ∼q) → r
    return lado_esquerdo == lado_direito;
}

int main()
{
    printf("=== Questão (c) Corrigida ===\n");
    printf("Verificando se ∼p ∧ (q ∨ r) ⇔ (p ∧ ∼q) → r\n\n");

    printf("p | q | r | ∼p∧(q∨r) | (p∧∼q)→r | São iguais?\n");
    printf("-------------------------------------------\n");

    for (int p = 0; p <= 1; p++)
    {
        for (int q = 0; q <= 1; q++)
        {
            for (int r = 0; r <= 1; r++)
            {
                bool resultado = verifica_equivalencia_c(p, q, r);
                printf("%d | %d | %d |     %d    |     %d     |      %d\n",
                       p, q, r,
                       !p && (q || r),
                       !(p && !q) || r,
                       resultado);
            }
        }
    }

    printf("\nConclusão: A equivalência NÃO é válida (veja as linhas com 0 na última coluna)!\n");
    return 0;
}