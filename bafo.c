#include <stdio.h>

/*
Inteiro r que indica quantas rodadas ocorreram
r linhas seguintes:
    ler dois inteiros a, b
    a - figurinhas que aldo conseguiu virar na rodada
    b - figurinhas que beto conseguiu virar na rodada
    Em todos os casos há um único vencedor.
    O final da entrada é indicado por r = 0.

Para cada caso de entrada, deve-se produzir três linhas de saída.
A primeira linha deve conter um identificador do caso de teste
no formato "Teste n", onde n é numerado a partir de 1.
A segunda linha deve conter o nome do vencedor (Aldo ou Beto).
A terceira linha deve ser deixada em branco
*/

int main()
{
    /* Quantidade de rodadas*/
    int r;
    /* Iterador do loop */
    int i;

    /* Quantidades de cartas viradas por Aldo (a) e Beto (b) na rodada*/
    int a, b;
    /* Quantidade de cartas viradas ao todo pelo Aldo (resultA) e Beto (resultB) */
    int resultA = 0, resultB = 0;

    /* Quantidades de testes */
    int n = 1;

    while (scanf("%d", &r) && r != 0)
    {
        resultA = 0;
        resultB = 0;
        for (i = 0; i < r; i++)
        {
            scanf("%d %d",&a, &b);
            resultA += a;
            resultB += b;
        }
        printf("Teste %d\n", n++);
        if (resultA > resultB)
            printf("Aldo\n\n");
        else
            printf("Beto\n\n");
    }
    return 0;
}
