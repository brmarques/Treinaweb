#include <stdio.h>
#include <stdlib.h>

int main()
{
    float comprimento, altura, area, perimetro;
    printf("Digite o comprimento do retângulo: ");
    scanf("%f", &comprimento);
    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);

    printf("A área do retângulo é: %.2f.\n", area = comprimento*altura);
    printf("O perímetro do retângulo é: %.2f", perimetro = (2*comprimento)+ (2*altura));

    return 0;
}
