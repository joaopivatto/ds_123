// P.143 Ex.24
// Faça um programa que apresente o menu de opções a seguir, permita ao usuário escolher a opção
// desejada, receba os dados necessários para executar a operação e mostre o resultado. Verifique a possibilidade de opção inválida e não se preocupe com restrições do tipo salário inválido.
// Menu de opções:
// 1. Imposto
// 2. Novo salário
// 3. Classificação
// 4. Finalizar o programa
// Digite a opção desejada.
// Na opção 1: receber o salário de um funcionário, calcular e mostrar o valor do imposto usando as regras
// a seguir.
// | Salários | % do Imposto 
// | Menor que 500,00 | 5%
// | Entre 500,00 e 850,00 | 10%
// | Maior que 850,00 | 15%
// Na opção 2: receber o salário de um funcionário, calcular e mostrar o valor do novo salário usando as
// regras a seguir.
// | Salários | Aumento
// Maiores que 1500,00 | R$ 25,00
// Entre 750,00 e 1500,00 | R$ 50,00
// Entre 450,00 e 749,99 | R$ 75,00
// Menores que 450,00 | R$ 100,00
// Na opção 3: receber o salário de um funcionário e mostrar sua classificação usando esta tabela:
// | Salários | Classificação
// Maiores que 700,00 | Bem remunerado
// Menores ou iguais a 700,00 | Mal remunerado

#include <stdio.h>
int main() {
    int opcao;
    float salario, imposto, novo_salario;

    do {
        printf("\nMenu de opcoes:\n");
        printf("1. Imposto\n");
        printf("2. Novo salario\n");
        printf("3. Classificacao\n");
        printf("4. Finalizar o programa\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o salario do funcionario: ");
                scanf("%f", &salario);
                if (salario < 500.00) {
                    imposto = salario * 0.05;
                } else if (salario <= 850.00) {
                    imposto = salario * 0.10;
                } else {
                    imposto = salario * 0.15;
                }
                printf("O valor do imposto eh: R$ %.2f\n", imposto);
                break;

            case 2:
                printf("Digite o salario do funcionario: ");
                scanf("%f", &salario);
                if (salario > 1500.00) {
                    novo_salario = salario + 25.00;
                } else if (salario >= 750.00) {
                    novo_salario = salario + 50.00;
                } else if (salario >= 450.00) {
                    novo_salario = salario + 75.00;
                } else {
                    novo_salario = salario + 100.00;
                }
                printf("O novo salario eh: R$ %.2f\n", novo_salario);
                break;

            case 3:
                printf("Digite o salario do funcionario: ");
                scanf("%f", &salario);
                if (salario > 700.00) {
                    printf("Classificacao: Bem remunerado\n");
                } else {
                    printf("Classificacao: Mal remunerado\n");
                }
                break;

            case 4:
                printf("Finalizando o programa.\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }
    } while (opcao != 4);

    return 0;
}