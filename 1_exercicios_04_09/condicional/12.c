// P.72 Ex.12
// Faça um programa que receba o código correspondente ao cargo de um funcionário e seu salário atual e mostre o cargo, o valor do aumento e seu novo salário. Os cargos estão na tabela a seguir.
// Codigo  Cargo                          Percentual de aumento
// 1      Escriturário                    50%
// 2      Secretário                      35%
// 3      Caixa                           20%
// 4      Gerente                         10%
// 5      Diretor                         Sem aumento

#include <stdio.h>
int main() {
    int codigo;
    float salario, aumento, novo_salario;
    printf("Digite o código do cargo (1-5): ");
    scanf("%d", &codigo);
    printf("Digite o salário atual: ");
    scanf("%f", &salario);
    switch (codigo) {
        case 1:
            aumento = salario * 0.50;
            novo_salario = salario + aumento;
            printf("Cargo: Escriturário\n");
            printf("Valor do aumento: R$ %.2f\n", aumento);
            printf("Novo salário: R$ %.2f\n", novo_salario);
            break;
        case 2:
            aumento = salario * 0.35;
            novo_salario = salario + aumento;
            printf("Cargo: Secretário\n");
            printf("Valor do aumento: R$ %.2f\n", aumento);
            printf("Novo salário: R$ %.2f\n", novo_salario);
            break;
        case 3:
            aumento = salario * 0.20;
            novo_salario = salario + aumento;
            printf("Cargo: Caixa\n");
            printf("Valor do aumento: R$ %.2f\n", aumento);
            printf("Novo salário: R$ %.2f\n", novo_salario);
            break;
        case 4:
            aumento = salario * 0.10;
            novo_salario = salario + aumento;
            printf("Cargo: Gerente\n");
            printf("Valor do aumento: R$ %.2f\n", aumento);
            printf("Novo salário: R$ %.2f\n", novo_salario);
            break;
        case 5:
            aumento = 0;
            novo_salario = salario;
            printf("Cargo: Diretor\n");
            printf("Valor do aumento: R$ %.2f\n", aumento);
            printf("Novo salário: R$ %.2f\n", novo_salario);
            break;
        default:
            printf("Código inválido!\n");
    }
    return 0;
}