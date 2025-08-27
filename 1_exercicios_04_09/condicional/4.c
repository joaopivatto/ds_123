// P.64 Ex.4
// Faça um programa que receba três números e mostre-os em ordem crescente. Suponha que o usuário digitará três números diferentes.

#include <stdio.h>
int main (){
    float n1, n2, n3, aux;
    printf("Digite tres numeros diferentes: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    if (n1 > n2){
        aux = n1;
        n1 = n2;
        n2 = aux;
    }
    if (n1 > n3){
        aux = n1;
        n1 = n3;
        n3 = aux;
    }
    if (n2 > n3){
        aux = n2;
        n2 = n3;
        n3 = aux;
    }
    printf("Ordem crescente: %.2f, %.2f, %.2f\n", n1, n2, n3);
    return 0;
}