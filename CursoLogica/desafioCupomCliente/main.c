#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 0 - 1 - Leite Integral - 3.80
       1 - 2 - Manteiga - 5.98
       2 - 3 - Café 500g - 8.25 */
    int qtdLinhas = 3;
    int produtos[] = {3, 1, 2};
    int quantidades[] = {1, 4, 1};
    float valorLeite = 0.00, valorManteiga = 0.00, valorCafe = 0.00;

    for (int i = 0; i < qtdLinhas; i++){
        switch (produtos[i]){
        case 1:
        valorLeite = quantidades[i]*3.80;
        printf("Leite Integral x %d - %.2f\n", quantidades[i], valorLeite);
        break;

        case 2:
        valorManteiga = quantidades[i]*5.98;
        printf("Manteiga x %d - %.2f\n", quantidades[i], valorManteiga);
        break;

        case 3:
        valorCafe = quantidades[i]*8.25;
        printf("Café 500g x %d - %.2f\n", quantidades[i], valorCafe);
        break;
        }
    }
        float total = valorLeite +  valorCafe + valorManteiga;
        printf("Total - %.2f", total);

    return 0;
}
