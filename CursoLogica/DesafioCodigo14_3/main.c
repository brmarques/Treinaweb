#include <stdio.h>
#include <stdlib.h>

int main() {
    float salario, alimentacao, moradia, saude, outros;

    /*Dados de entrada:
    1000.00
    350.00
    500.00
    100.00
    150.00 */

    scanf("%f", &salario);
    scanf("%f", &alimentacao);
    scanf("%f", &moradia);
    scanf("%f", &saude);
    scanf("%f", &outros);


    //Informe seu código aqui
    printf("Alimentação %.0f% \n",(alimentacao/salario)*100);
    printf("Moradia %.0f% \n",(moradia/salario)*100);
    printf("Saúde %.0f% \n",(saude/salario)*100);
    printf("Outros %.0f% \n",(outros/salario)*100);

    return 0;
}
