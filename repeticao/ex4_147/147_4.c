// P.147 Ex.4
// Faça um programa que receba um número, calcule e mostre a tabuada desse número. 

#include <stdio.h>
int main() {
    int num, i;
    printf("Digite um numero: ");
    scanf("%d", &num);
    for(i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    return 0;
}