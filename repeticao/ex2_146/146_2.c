// P.146 Ex.2
// Uma companhia de teatro deseja montar uma série de espetáculos. A direção calcula que, a
// R$ 5,00 o ingresso, serão vendidos 120 ingressos, e que as despesas serão de R$ 200,00. Diminuindo-se em
// R$ 0,50 o preço dos ingressos, espera-se que as vendas aumentem em 26 ingressos. Faça um programa que
// escreva uma tabela de valores de lucros esperados em função do preço do ingresso, fazendo-se variar esse preço de R$ 5,00 a R$ 1,00, de R$ 0,50 em R$ 0,50. Escreva, ainda, para cada novo preço de ingresso, o lucro
// máximo esperado, o preço do ingresso e a quantidade de ingressos vendidos para a obtenção desse lucro. 

#include <stdio.h>
int main() {
    float preco = 5.0, despesa = 200.0, lucro, max_lucro = -1;
    int ingressos_vendidos, max_ingressos = 0;
    
    printf("Preco do Ingresso\tIngressos Vendidos\tLucro\n");
    while (preco >= 1.0) {
        ingressos_vendidos = 120 + (int)((5.0 - preco) / 0.5) * 26;
        lucro = (preco * ingressos_vendidos) - despesa;
        printf("R$ %.2f\t\t\t%d\t\t\tR$ %.2f\n", preco, ingressos_vendidos, lucro);
        
        if (lucro > max_lucro) {
            max_lucro = lucro;
            max_ingressos = ingressos_vendidos;
        }
        
        preco -= 0.5;
    }
    
    printf("\nLucro Maximo: R$ %.2f com %d ingressos vendidos.\n", max_lucro, max_ingressos);
    return 0;
}