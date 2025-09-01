// P.63 Ex.3
// Faça um programa que receba dois números e mostre o maior.

#include <stdio.h>
int main (){
    float n1, n2;
    printf("Digite dois numeros: ");
    scanf("%f %f", &n1, &n2);
    if (n1 > n2){
        printf("O maior numero e: %.2f\n", n1);
    } else if (n2 > n1){
        printf("O maior numero e: %.2f\n", n2);
    } else {
        printf("Os numeros sao iguais: %.2f\n", n1);
    }
    return 0;
}