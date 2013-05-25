#include <stdio.h>

/*
Notas existentes: 50, 10, 5 e 1
TAREFA
Dado um valor de Bits desejado, determine quantas notas de cada valor sao
necessarias para minimizar a quantidade de cedulas a serem entregues
ENTRADA
unica linha com um inteiro positivo V
SAIDA
Tres linhas de saida,
primeira-> "Teste n" n = 1 inicialmente
segunda ->  Devem aparecer quatro inteiros que representam o resultado, respectivamente,
            nas notas de 50, 10, 5 e 1.
terceira->  Deve ser deixada em branco
*/

int main()
{
    int teste = 1;
    int valor;
    int n50, n10, n5, n1;

    while (scanf("%d", &valor) && valor != 0)
    {
        n50 = n10 = n5 = n1 = 0;
        n50 = valor / 50;
        valor %= 50;
        n10 = valor / 10;
        valor %= 10;
        n5  = valor / 5;
        valor %= 5;
        n1  = valor;
        printf("Teste %d\n%d %d %d %d\n\n", teste++, n50, n10, n5, n1);
    }
    return 0;
}
