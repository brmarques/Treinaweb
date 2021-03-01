#include <stdio.h>
#include <stdlib.h>
/* Depois de alguns meses levando a sério sua vida financeira, Érica começa a colher seus primeiros frutos.
Como as parcelas do empréstimo que ela fez está acabando, ela está realizando o planejamento do quanto poderá aportar
em investimentos nos próximos meses, porém ela está com dificuldade em entender quanto terá ao final do período planejado,
contando os aportes e os juros compostos.
Considerando que temos os valores que ela investirá a cada mês e os juros fixo mensal, vamos realizar o cálculo do valor final.
Por exemplo, para os valores mensais de [570.00, 800.00, 679.00] e juros de 5% ao mês, teríamos:

Valor Anterior | Juros | Aporte do mês | Total
-------------- | ----- | ------------- | ------
0              | 0     |    570,00     | 570,00
570,00         | 28,50 |    800,00     | 1.398,50
1.398,50       | 69,92 |    679,00     | 2147,43

Considere uma variável qtdAportes do tipo inteira para definir a quantidade meses que deve calcular.
Um vetor chamado valorAporte com valores do tipo float que serão investidos a cada mês e uma variável chamada
porcentagemJuros do tipo float.
Obs: A saída deve ser apenas o valor final, para o exemplo acima teríamos:

2147.43
*/

int main()
{
    int qtdAportes = 3, i;
    float valorAporte[] = {570.00, 800.00, 679.00}, porcentagemJuros = 5;
    float total = 0.00;

    for (i = 0; i < qtdAportes; i++){
        if (i > 0){
            total += (total * ((porcentagemJuros)/100)) + valorAporte[i];
        } else{
            total += valorAporte[i];
        }
        printf("%.2f\n", total);
    }

    printf("\n%.2f", total);

    return 0;
}

/*
5
2
570.00
800.00
679.00
856.00
972.00
Resultado esperado:
4017.50

Resultado da execução:
codigo.c: In function 'main':
codigo.c:25:10: error: 'i' undeclared (first use in this function)
     for (i = 0; i < qtdAportes; i++){
          ^
codigo.c:25:10: note: each undeclared identifier is reported only once for each function it appears in
/bin/bash: ./codigo: No such file or directory

Código enviado:

A solução desenvolvida por você:
//Informe seu código aqui
float total = 0.00;
int i;
    for (i = 0; i < qtdAportes; i++){
        if (i > 0){
            total += (total * ((porcentagemJuros)/100)) + valorAporte[i];
        } else{
            total += valorAporte[i];
        }
    }
    printf("%.2f\n", total);
*/
