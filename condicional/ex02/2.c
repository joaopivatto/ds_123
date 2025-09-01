// P.62 Ex.2
// Faça um programa que receba três notas de um aluno, calcule e mostre a média aritmética e a mensagem constante na tabela a seguir. Aos alunos que ficaram para exame, calcule e mostre a nota que deverão tirar para serem aprovados, considerando que a média exigida é 6,0.
// 0,0 a 3,0 - Reprovado
// 3,0 a 7,0 - Exame
// 7,0 a 10 - Aprovado

#include <stdio.h>
int main (){
    float n1, n2, n3, media, nota_exame;
    printf("Digite as tres notas do aluno: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    media = (n1 + n2 + n3) / 3;
    printf("Media: %.2f\n", media);
    if (media < 3.0){
        printf("Reprovado\n");
    } else if (media < 7.0){
        printf("Exame\n");
        nota_exame = 12 - media;
        if (nota_exame > 10){
            printf("Nota necessaria no exame: %.2f (impossivel de atingir)\n", nota_exame);
        } else {
            printf("Nota necessaria no exame: %.2f\n", nota_exame);
        }
    } else {
        printf("Aprovado\n");
    }
    return 0;
}