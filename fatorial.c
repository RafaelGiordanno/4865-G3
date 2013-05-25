#include <stdio.h>
/*
Determinar o fatorial de um número
*/
int fatorial_r(int fat)
{
    if (fat > 0)
        return (fatorial_r(fat-1) * fat);
    else
        return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fatorial_r(n));
    return 0;
}
