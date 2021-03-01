#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float dolar, real;
    printf("Digite um valor em U$: ");
    scanf("%f", &dolar);
    real = dolar * 5.60;
    printf("\nValor convertido em R$: %.2f", real);

    return 0;
}
