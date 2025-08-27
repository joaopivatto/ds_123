// P.65 Ex.6
// Faça um programa que receba um número inteiro e verifique se é par ou ímpar.

#include <stdio.h>
int main (){
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    if (n % 2 == 0){
        printf("O numero %d e par.\n", n);
    } else {
        printf("O numero %d e impar.\n", n);
    }
    return 0;
}