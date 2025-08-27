// P.118 Ex.2
// Faça um programa que leia um valor N inteiro e positivo. Calcule e mostre o valor de E, conforme a fórmula a seguir:
// E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!

#include <stdio.h>
int main(){
    int N, i;
    float E = 1.0, fatorial;

    printf("Digite um valor inteiro e positivo: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++){
        fatorial = 1.0;
        for(int j = 1; j <= i; j++){
            fatorial *= j;
        }
        E += 1.0 / fatorial;
    }

    printf("Valor de E: %.6f\n", E);

    return 0;
}