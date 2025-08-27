// P.40 Ex.6
// Faça um programa que receba o salário-base de um funcionário, calcule e mostre o salário a receber, sabendo-se que esse funcionário tem gratificação de 5% sobre o saláriobase e paga imposto de 7% sobre o salário-base.

#include <stdio.h>
int main() {
    float salario_base, gratificacao, imposto, salario_final;

    printf("Digite o salário-base do funcionário: ");
    scanf("%f", &salario_base);

    gratificacao = salario_base * 0.05;
    imposto = salario_base * 0.07;
    salario_final = salario_base + gratificacao - imposto;

    printf("O salário a receber é: R$ %.2f\n", salario_final);

    return 0;
}