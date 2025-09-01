// P.39 Ex.4
//  Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se que este sofreu um aumento de 25%.

#include <stdio.h>
int main()
{
    float salario, novo_salario;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    novo_salario = salario + (salario * 0.25);
    printf("O novo salario do funcionario e: %.2f\n", novo_salario);
    return 0;
}