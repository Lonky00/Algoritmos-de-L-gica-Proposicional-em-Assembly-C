#include <stdio.h>
#include <stdbool.h>

// Função que calcula p → q
bool implica(bool p, bool q)
{
    return !p || q;
}

int main()
{
    printf("=== Questão (b) ===\n");
    printf("Verificando se p → q é equivalente a (p ∨ q) → q\n\n");

    printf("p | q | p→q | (p∨q)→q | São iguais?\n");
    printf("----------------------------------\n");

    for (int p = 0; p <= 1; p++)
    {
        for (int q = 0; q <= 1; q++)
        {
            bool implicacao = implica(p, q);        // p → q
            bool p_ou_q = p || q;                   // p ∨ q
            bool lado_direito = implica(p_ou_q, q); // (p ∨ q) → q

            printf("%d | %d |  %d  |    %d     |      %d\n",
                   p, q,
                   implicacao,
                   lado_direito,
                   implicacao == lado_direito);
        }
    }

    printf("\nConclusão: A equivalência é válida!\n");
    return 0;
}