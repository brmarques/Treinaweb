#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dolar, real;
    printf("Digite um valor em U$: ");
    scanf("%f", &dolar);

    printf("\nValor convertido em R$: %.2f", real = dolar*5.60);

    return 0;
}
