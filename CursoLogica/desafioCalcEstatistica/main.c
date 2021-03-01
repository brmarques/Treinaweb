#include <stdio.h>
#include <stdlib.h>

int main()
{
    float rendaFamilias[0];
    int qtdFamilias;
    float soma, media, maior, menor;
    soma = 0;

    printf("Digite o número de rendas familiares a serem adicionadas: ");
    scanf("%d", &qtdFamilias);

    for(int i = 0; i < qtdFamilias; i++) {
            printf("Digite o valor da renda: ");
            scanf("%f", &rendaFamilias[i]);
            //soma recebe o valor inicial mais os valores do vetor
            soma = soma + rendaFamilias[i];
            //encontra menor valor no vetor
            menor = rendaFamilias[0];
            if (rendaFamilias[0] < menor) {
                menor = rendaFamilias[i];
            }
    }
    //encontra maior valor no vetor, só funcionou criando novo for, dentro do anterior não funcionou
    for(int i = 0; i < qtdFamilias; i++) {
            maior = rendaFamilias[0];
            if (rendaFamilias[i] > maior) {
                maior = rendaFamilias[i];
            }
    }
    //media dos valores no vetor
    media = soma / qtdFamilias;

    printf("Média - %4.2f\n", media);
    printf("Menor - %4.2f\n", menor);
    printf("Maior - %4.2f\n", maior);

    return 0;
}
