#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int p1 = 8, p2 = 10, p3 = 10, tf = 10;
    float media;
    media = (p1 + (p2*2) + (p3*3) + tf)/7;
    if (media >= 9){
        printf("A");
    }else
    if (media >= 7.5 && media < 9){
        printf("B");
    }else
    if (media >= 6.0 && media < 7.5){
        printf("C");
    }else
    if( media < 6.0){
        printf("D");
    }
    return 0;
    }


    /*Desafio
    if (essenciais <= 50) {
        printf("Gastos essenciais: dentro da regra\n");
    } else {
        printf("Gastos essenciais: acima da regra\n");
    }

    if (prioridades <= 15) {
        printf("Prioridades financeiras: dentro da regra\n");
    } else {
        printf("Prioridades financeiras: acima da regra\n");
    }

    if (estiloDeVida <= 35) {
        printf("Estilo de vida: dentro da regra");
    } else {
        printf("Estilo de vida: acima da regra");
    }

    Dados de entrada:
        40
        5
        40

        Resultado esperado:
        Gastos essenciais: dentro da regra
        Prioridades financeiras: dentro da regra
        Estilo de vida: acima da regra

        Resultado da execução:
        Gastos essenciais: dentro da regra
        Prioridades financeiras: dentro da regra
        Estilo de vida: acima da regra

    */
