// P.40 Ex.7
// Faça um programa que receba o salário-base de um funcionário, calcule e mostre seu salário a receber, sabendo-se que esse funcionário tem gratificação de R$ 50.00 e paga imposto de 10% sobre o salário-base.

#include <stdio.h>
int main() {
    float salario_base, gratificacao = 50.0, imposto, salario_final;

    printf("Digite o salário-base do funcionário: ");
    scanf("%f", &salario_base);

    imposto = salario_base * 0.10;
    salario_final = salario_base + gratificacao - imposto;

    printf("O salário a receber é: R$ %.2f\n", salario_final);

    return 0;
}