// P.117 Ex.1
// Um funcionário de uma empresa recebe, anualmente, aumento salarial. Sabe-se que:
// a) Esse funcionário foi contratado em 2005, com salário inicial de R$ 1.000,00.
// b) Em 2006, ele recebeu aumento de 1,5% sobre seu salário inicial.
// c) A partir de 2007 (inclusive), os aumentos salariais sempre corresponderam ao dobro do percentual do ano anterior.
// Faça um programa que determine o salário atual desse funcionário.

#include <stdio.h>
int main(){
    int ano = 2005;
    float salario = 1000.0;
    float aumento = 0.015;

    while(ano < 2025){
        salario += salario * aumento;
        aumento *= 2;
        ano++;
    }

    printf("Salario atual: R$ %.2f\n", salario);

    return 0;
}