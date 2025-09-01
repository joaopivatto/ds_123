// P.121 Ex.6
// Uma empresa possui dez funcionários com as seguintes características: código, número de horas trabalhadas no mês, turno de trabalho (M — matutino; V — vespertino; ou N — noturno), categoria (O —
// operário; ou G — gerente), valor da hora trabalhada. Sabendo-se que essa empresa deseja informatizar
// sua folha de pagamento, faça um programa que:
// a) Leia as informações dos funcionários, exceto o valor da hora trabalhada, não permitindo que sejam informados turnos e nem categorias inexistentes. Trabalhe sempre com a digitação de letras maiúsculas.
// b) Calcule o valor da hora trabalhada, conforme a tabela a seguir. Adote o valor de R$ 450,00 para o salário
// mínimo.
// Categoria | Turno | Valor da hora trabalhada
// G | N | 18% do salário mínimo
// G | M ou V | 15% do salário mínimo
// O | N | 13% do salário mínimo
// O | M ou V | 10% do salário mínimo
// c) Calcule o salário inicial dos funcionários com base no valor da hora trabalhada e no número de horas trabalhadas.
// d) Calcule o valor do auxílio alimentação recebido pelo funcionário de acordo com seu salário inicial, conforme
// a tabela a seguir.
// Salário inicial | Auxílio alimentação
// Até R$ 300,00 | 20% do salário inicial
// De R$ 300,00 a R$ 600,00 | 15% do salário inicial
// Acima de R$ 600,00 | 5% do salário inicial
// e) Mostre o código, número de horas trabalhadas, valor da hora trabalhada, salário inicial, auxílio alimentação
// e salário final (salário inicial + auxílio alimentação).

#include <stdio.h>
int main()
{
    int codigo, horas, i;
    char turno, categoria;
    float valor_hora, salario_inicial, aux_alimentacao, salario_final;
    const float salario_minimo = 450.0;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o código do funcionário: ");
        scanf("%d", &codigo);

        do
        {
            printf("Digite o turno de trabalho (M - matutino, V - vespertino, N - noturno): ");
            scanf(" %c", &turno);
        } while (turno != 'M' && turno != 'V' && turno != 'N');

        do
        {
            printf("Digite a categoria (O - operário, G - gerente): ");
            scanf(" %c", &categoria);
        } while (categoria != 'O' && categoria != 'G');

        if (categoria == 'G')
        {
            if (turno == 'N')
            {
                valor_hora = 0.18 * salario_minimo;
            }
            else
            {
                valor_hora = 0.15 * salario_minimo;
            }
        }
        else
        {
            if (turno == 'N')
            {
                valor_hora = 0.13 * salario_minimo;
            }
            else
            {
                valor_hora = 0.10 * salario_minimo;
            }
        }

        printf("Digite o número de horas trabalhadas no mês: ");
        scanf("%d", &horas);

        salario_inicial = valor_hora * horas;

        if (salario_inicial <= 300)
        {
            aux_alimentacao = 0.20 * salario_inicial;
        }
        else if (salario_inicial <= 600)
        {
            aux_alimentacao = 0.15 * salario_inicial;
        }
        else
        {
            aux_alimentacao = 0.05 * salario_inicial;
        }

        salario_final = salario_inicial + aux_alimentacao;

        printf("\nCódigo: %d\n", codigo);
        printf("Número de horas trabalhadas: %d\n", horas);
        printf("Valor da hora trabalhada: R$ %.2f\n", valor_hora);
        printf("Salário inicial: R$ %.2f\n", salario_inicial);
        printf("Auxílio alimentação: R$ %.2f\n", aux_alimentacao);
        printf("Salário final: R$ %.2f\n\n", salario_final);
    }

    return 0;
}  