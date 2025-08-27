// P.123 Ex.7
// Faça um programa que monte os oito primeiros termos da sequência de Fibonacci.

#include <stdio.h>
int main()
{
    int i, n1 = 0, n2 = 1, next;

    printf("Sequência de Fibonacci:\n");
    printf("%d\n", n1);
    printf("%d\n", n2);

    for (i = 2; i < 8; i++)
    {
        next = n1 + n2;
        printf("%d\n", next);
        n1 = n2;
        n2 = next;
    }

    return 0;
}