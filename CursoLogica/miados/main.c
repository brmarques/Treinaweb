#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    int intensidade,i;
    char is='I', parar[5];

    while(strcmp(parar, "PARAR")!= 0) {
        printf("Solicite a intensidade do miado: ");
        scanf("%d", &intensidade);
        printf("M");
        for(i=0; i<intensidade; i++){
            if(intensidade>i){
                printf("%c",is);
            }
        }

        printf("AU\n");

        printf("Para parar a execução, digite PARAR, caso queira continuar, digite CONTINUAR: ");
        scanf("%s", parar);

    }

    return 0;
}
