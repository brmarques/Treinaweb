#include <stdio.h>
#include <stdlib.h>

int main()
{
    float parcelaInicial;
    float porcentagemDecrecimo;
    float qtdParcelas;
    float parcela, porcentagem;

    printf("Digite o valor da parcela inicial: ");
    scanf("%f", &parcelaInicial);
    printf("Digite o valor da porcentagem a ser subtraida a cada parcela: ");
    scanf("%f", &porcentagemDecrecimo);
    printf("Digite o valor da quantidade de parcelas: ");
    scanf("%f", &qtdParcelas);

    parcela = parcelaInicial;
    porcentagem = (100 - porcentagemDecrecimo) / 100;


    for(int contador=1; contador <= qtdParcelas; contador++) {
        printf("%d - %4.2f\n", contador, parcela);

        parcela = (parcela * porcentagem);
    }
}
