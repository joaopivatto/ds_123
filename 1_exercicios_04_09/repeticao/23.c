// P.141 Ex.23
// Faça um programa que receba o valor do salário mínimo, uma lista contendo a quantidade de quilowatts gasta por consumidor e o tipo de consumidor (1 — residencial; 2 — comercial; ou 3 — industrial) e que calcule e mostre:
// o valor de cada quilowatt, sabendo que o quilowatt custa um oitavo do salário mínimo;
// o valor a ser pago por consumidor (conta final mais acréscimo). O acréscimo encontra-se na tabela
// a seguir:
// Tipo | % de Acréscimo sobre o valor gasto
// 1    | 5%
// 2    | 10%
// 3    | 15% 
// o faturamento geral da empresa;
// a quantidade de consumidores que pagam entre R$ 500,00 e R$ 1.000,00.
// Termine a entrada de dados com quantidade de quilowats igual a zero.

#include <stdio.h>
int main()
{
    float salarioMinimo, valorQuilowatt, quilowattsGastos, valorConta, faturamentoGeral = 0;
    int tipoConsumidor, numConsumidoresFaixa;
    numConsumidoresFaixa = 0;
    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salarioMinimo);
    valorQuilowatt = salarioMinimo / 8;
    printf("Valor do quilowatt: R$ %.2f\n", valorQuilowatt);
    do
    {
        printf("Digite a quantidade de quilowatts gastos (0 para sair): ");
        scanf("%f", &quilowattsGastos);
        if (quilowattsGastos != 0)
        {
            printf("Digite o tipo de consumidor (1-Residencial, 2-Comercial, 3-Industrial): ");
            scanf("%d", &tipoConsumidor);
            valorConta = quilowattsGastos * valorQuilowatt;
            switch (tipoConsumidor)
            {
            case 1:
                valorConta *= 1.05;
                break;
            case 2:
                valorConta *= 1.10;
                break;
            case 3:
                valorConta *= 1.15;
                break;
            default:    
                printf("Tipo de consumidor invalido!\n");
                continue;
            }
            printf("Valor da conta: R$ %.2f\n", valorConta);
            faturamentoGeral += valorConta;
            if (valorConta >= 500 && valorConta <= 1000)
            {
                numConsumidoresFaixa++;
            }
        }
    } while (quilowattsGastos != 0);
    printf("Faturamento geral da empresa: R$ %.2f\n", faturamentoGeral);
    printf("Numero de consumidores que pagam entre R$ 500,00 e R$ 1.000,00: %d\n", numConsumidoresFaixa);
    return 0;
}