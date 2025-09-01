// P.119 Ex.4
// Foi feita uma estatística em cinco cidades brasileiras para coletar dados sobre acidentes de trânsito.
// Foram obtidos os seguintes dados:
// a) código da cidade;
// b) número de veículos de passeio;
// c) número de acidentes de trânsito com vítimas.
// Deseja-se saber:
// a) qual é o maior e qual é o menor índice de acidentes de trânsito e a que cidades pertencem;
// b) qual é a média de veículos nas cinco cidades juntas;
// c) qual é a média de acidentes de trânsito nas cidades com menos de 2.000 veículos de passeio. 

#include <stdio.h>
int main(){
    int codigo, num_veiculos, num_acidentes;
    int maior_codigo = 0, menor_codigo = 0;
    int maior_acidentes = -1, menor_acidentes = 1000000;
    int total_veiculos = 0, total_acidentes_menos_2000 = 0, cidades_menos_2000 = 0;

    for(int i = 0; i < 5; i++){
        printf("Digite o codigo da cidade: ");
        scanf("%d", &codigo);
        printf("Digite o numero de veiculos de passeio: ");
        scanf("%d", &num_veiculos);
        printf("Digite o numero de acidentes de transito com vitimas: ");
        scanf("%d", &num_acidentes);

        total_veiculos += num_veiculos;

        if(num_veiculos < 2000){
            total_acidentes_menos_2000 += num_acidentes;
            cidades_menos_2000++;
        }

        if(num_acidentes > maior_acidentes){
            maior_acidentes = num_acidentes;
            maior_codigo = codigo;
        }
        if(num_acidentes < menor_acidentes){
            menor_acidentes = num_acidentes;
            menor_codigo = codigo;
        }
    }

    float media_veiculos = total_veiculos / 5.0;
    float media_acidentes_menos_2000 = (cidades_menos_2000 > 0) ? (total_acidentes_menos_2000 / cidades_menos_2000) : 0.0;

    printf("Maior indice de acidentes: %d na cidade %d\n", maior_acidentes, maior_codigo);
    printf("Menor indice de acidentes: %d na cidade %d\n", menor_acidentes, menor_codigo);
    printf("Media de veiculos nas cinco cidades: %.2f\n", media_veiculos);
    if(cidades_menos_2000 > 0){
        printf("Media de acidentes nas cidades com menos de 2000 veiculos: %.2f\n", media_acidentes_menos_2000);
    } else {
        printf("Nao ha cidades com menos de 2000 veiculos.\n");
    }

    return 0;
}