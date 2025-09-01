// P.38 Ex.3
// Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada dessas notas.

#include <stdio.h>
int main() {
    float n1, n2, n3, p1, p2, p3, media_ponderada;

    printf("Digite a primeira nota e seu peso: ");
    scanf("%f %f", &n1, &p1);
    printf("Digite a segunda nota e seu peso: ");
    scanf("%f %f", &n2, &p2);
    printf("Digite a terceira nota e seu peso: ");
    scanf("%f %f", &n3, &p3);

    media_ponderada = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);

    printf("A média ponderada é: %.2f\n", media_ponderada);

    return 0;
}