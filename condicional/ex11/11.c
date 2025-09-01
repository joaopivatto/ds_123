// P.71 Ex.11
// Faça um programa que receba a hora do início de um jogo e a hora do término (cada hora é composta por duas variáveis inteiras: hora e minuto). Calcule e mostre a duração do jogo (horas e minutos), sabendo que o tempo máximo de duração do jogo é de 24 horas e que ele pode começar em um dia e terminar no dia seguinte.

#include <stdio.h>
int main() {
    int hi, mi, hf, mf, hd, md;
    printf("Digite a hora e minuto do início do jogo: ");
    scanf("%d %d", &hi, &mi);
    printf("Digite a hora e minuto do término do jogo: ");
    scanf("%d %d", &hf, &mf);
    if (mf < mi) {
        mf += 60;
        hf--;
    }
    if (hf <= hi) {
        hf += 24;
    }
    hd = hf - hi;
    md = mf - mi;
    printf("Duração do jogo: %d horas e %d minutos\n", hd, md);
    return 0;
}