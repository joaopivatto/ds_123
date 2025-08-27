// P.140 Ex.22
// Uma empresa decidiu fazer um levantamento em relação aos candidatos que se apresentarem para
// preenchimento de vagas em seu quadro de funcionários. Supondo que você seja o programador dessa
// empresa, faça um programa que leia, para cada candidato, a idade, o sexo (M ou F) e a experiência no
// serviço (S ou N). Para encerrar a entrada de dados, digite zero para a idade.
// O programa também deve calcular e mostrar:
// - o número de candidatos do sexo feminino;
// - o número de candidatos do sexo masculino;
// - a idade média dos homens que já têm experiência no serviço;
// - a porcentagem dos homens com mais de 45 anos entre o total dos homens;
// - o número de mulheres com idade inferior a 21 anos e com experiência no serviço;
// - a menor idade entre as mulheres que já têm experiência no serviço.

#include <stdio.h>
int main()
{
    int idade, numF = 0, numM = 0, somaIdadeHomensExp = 0, numHomensExp = 0, numHomens45 = 0, numMulheresJovensExp = 0, menorIdadeMulheresExp = 150;
    char sexo, experiencia;
    float mediaIdadeHomensExp, percHomens45;

    do
    {
        printf("Digite a idade (0 para sair): ");
        scanf("%d", &idade);
        if (idade != 0)
        {
            printf("Digite o sexo (M/F): ");
            scanf(" %c", &sexo);
            printf("Tem experiencia no servico? (S/N): ");
            scanf(" %c", &experiencia);

            if (sexo == 'F' || sexo == 'f')
            {
                numF++;
                if (idade < 21 && (experiencia == 'S' || experiencia == 's'))
                {
                    numMulheresJovensExp++;
                }
                if ((experiencia == 'S' || experiencia == 's') && idade < menorIdadeMulheresExp)
                {
                    menorIdadeMulheresExp = idade;
                }
            }
            else if (sexo == 'M' || sexo == 'm')
            {
                numM++;
                if (idade > 45)
                {
                    numHomens45++;
                }
                if (experiencia == 'S' || experiencia == 's')
                {
                    somaIdadeHomensExp += idade;
                    numHomensExp++;
                }
            }
        }
    } while (idade != 0);

        if (numHomensExp > 0)
    {
        mediaIdadeHomensExp = (float)somaIdadeHomensExp / numHomensExp;
    }
    else
    {
        mediaIdadeHomensExp = 0;
    }

    if (numM > 0)
    {
        percHomens45 = ((float)numHomens45 / numM) * 100;
    }
    else
    {
        percHomens45 = 0;
    }

    printf("\nNumero de candidatos do sexo feminino: %d\n", numF);
    printf("Numero de candidatos do sexo masculino: %d\n", numM);
    printf("Idade media dos homens com experiencia: %.2f\n", mediaIdadeHomensExp);
    printf("Porcentagem dos homens com mais de 45 anos: %.2f%%\n", percHomens45);
    printf("Numero de mulheres com menos de 21 anos e com experiencia: %d\n", numMulheresJovensExp);
    if (menorIdadeMulheresExp == 150)
    {
        printf("Nenhuma mulher com experiencia foi registrada.\n");
    }
    else
    {
        printf("Menor idade entre as mulheres com experiencia: %d\n", menorIdadeMulheresExp);
    }
    return 0;
}