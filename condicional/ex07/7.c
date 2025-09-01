// P.55 Ex.7
// Faça um programa que receba quatro valores: I, A, B e C. Desses valores, I é inteiro e positivo, A, B e C são reais. Escreva os números A, B e C obedecendo à tabela a seguir. Suponha que o valor digitado para I seja sempre um valor válido, ou seja, 1, 2 ou 3, e que os números digitados sejam diferentes um do outro.
// i = 1: A, B e C em ordem crescente.
// i = 2: A, B e C em ordem decrescente.
// i = 3: O maior valor entre A, B e C deve ficar entre os outros dois valores.

#include <stdio.h>
int main()
{
    int i;
    float a, b, c, aux;

    printf("Digite um valor inteiro e positivo para I: ");
    scanf("%d", &i);
    printf("Digite um valor real para A: ");
    scanf("%f", &a);
    printf("Digite um valor real para B: ");
    scanf("%f", &b);
    printf("Digite um valor real para C: ");
    scanf("%f", &c);

    if (i == 1)
    {
        if (a > b)
        {
            aux = a;
            a = b;
            b = aux;
        }
        if (a > c)
        {
            aux = a;
            a = c;
            c = aux;
        }
        if (b > c)
        {
            aux = b;
            b = c;
            c = aux;
        }
        printf("Ordem crescente: %.2f, %.2f, %.2f\n", a, b, c);
    }
    else if (i == 2)
    {
        if (a < b)
        {
            aux = a;
            a = b;
            b = aux;
        }
        if (a < c)
        {
            aux = a;
            a = c;
            c = aux;
        }
        if (b < c)
        {
            aux = b;
            b = c;
            c = aux;
        }
        printf("Ordem decrescente: %.2f, %.2f, %.2f\n", a, b, c);
    }
    else if (i == 3)
    {
        if (a > b && a > c)
        {
            if (b > c)
            {
                printf("Maior no meio: %.2f, %.2f, %.2f\n", c, a, b);
            }
            else
            {
                printf("Maior no meio: %.2f, %.2f, %.2f\n", b, a, c);
            }
        }
        else if (b > a && b > c)
        {
            if (a > c)
            {
                printf("Maior no meio: %.2f, %.2f, %.2f\n", c, b, a);
            }
            else
            {
                printf("Maior no meio: %.2f, %.2f, %.2f\n", a, b, c);
            }
        }
        else
        {
            if (a > b)
            {
                printf("Maior no meio: %.2f, %.2f, %.2f\n", b, c, a);
            }
            else
            {
                printf("Maior no meio: %.2f, %.2f, %.2f\n", a, c, b);
            }
        }
    }
    return 0;
}