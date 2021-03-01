#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mtconstruido = 5.00, mtnaoconstruido = 3.80;
    float areatotal, areaconstruida, imposto;

    printf("Digite o tamanho da área total em m²: ");
    scanf("%f", &areatotal);
    printf("\nDigite o tamanho da área contruída em m²: ");
    scanf("%f", &areaconstruida);

    imposto = ((areatotal-areaconstruida)*mtnaoconstruido)+(areaconstruida*mtconstruido);
    printf("\nÁrea total: %.2f \nÁrea construída: %.2f \nImposto: %.2f \n", areatotal, areaconstruida, imposto);

    return 0;
}
