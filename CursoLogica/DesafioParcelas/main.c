#include <stdio.h>
#include <stdlib.h>

int main()
{
    float parcelaInicial;
    float porcentagemDecrecimo;
    float qtdParcelas;
    int n = 1;
    float valorParcela;
    printf("Digite o valor da parcela inicial: ");
    scanf("%f", &parcelaInicial);
    printf("Digite o valor da porcentagem a ser subtraida a cada parcela: ");
    scanf("%f", &porcentagemDecrecimo);
    printf("Digite o valor da quantidade de parcelas: ");
    scanf("%f", &qtdParcelas);
    printf("%d - %.2f \n", n, parcelaInicial);

    for(int i = qtdParcelas; i>1; i--){
        n++;
        valorParcela = parcelaInicial- (parcelaInicial * (porcentagemDecrecimo/100));
        printf("%d - %.2f \n", n, valorParcela);
        parcelaInicial = valorParcela;
    }

    return 0;
}
