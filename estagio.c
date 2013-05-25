#include <stdio.h>
#define MAX_ALUNOS 1000
/*
ENTRADA
Vários conjuntos de teste.
Primeira linha de um conjunto de testes contém um inteiro n (total de alunos na turma).
N linhas seguintes:
    leia C (código) e M (Média de um aluno)
O final da entrada é indicado por n = 0

SAÍDA
Para cada turma, imprimir três linhas de saída.
A primeira deve conter "Teste n" n = 1 inicialmente
Segunda linha deve conter os códigos dos alunos que obtiveram a maior méida
A Terceira linha deve ser deixada em branco
*/

int main()
{
    int i, indice_melhor = 0, n;
    int turma = 1;
    int melhor_media = 0;
    struct
    {
        int codigo, media;
    } alunos[MAX_ALUNOS];

    /* le numero de alunos da primeira turma */
    // scanf("%d", &n);

    while (scanf("%d", &n) && n > 0)
    {
        melhor_media  = 0; /* melhor_media sempre começa com zero */
        indice_melhor = 0; /* indice_melhor também sempre começa com zero */
        for (i = 0; i < n; i++) {
            scanf("%d %d", &alunos[i].codigo, &alunos[i].media);
            /* indice_melhor é sempre o menor índice com a maior nota */
            if (alunos[i].media > melhor_media)
            {
                indice_melhor = i;
                melhor_media = alunos[i].media;
            }
        }
        /* procura alunos de maior media */
        /* pelas comparações anteriores, já sei que o índice de melhor aluno é o menor */
        printf("Turma %d\n", turma++);
        printf("%d", alunos[indice_melhor].codigo);
        for (i = indice_melhor+1; i < n; i++)
            if (alunos[i].media == alunos[indice_melhor].media)
                printf(" %d", alunos[i].codigo);
        /* escreve resposta */
        printf("\n\n");
        /* continua lendo numero de alunos da proxima turma */
    }
    return 0;
}
