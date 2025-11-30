#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

 // SEQUENCIA

    printf("Digite um numero: ");
    int n;
    scanf("%d", &n);


 // CONDICIONAL

    if(n > 0) {

        printf("Numero positivo. \n");
    }

    else if (n < 0) {

        printf("Numero negativo. \n");
    }

    else{

        printf("Numero zero. \n");
    }


  // REPETIÇÃO

    printf("Contando ate %d: \n", n);

        for(int i = 1; i <= n; i++) {

            printf("%d \n", i);
        }


    printf("\nPrograma finalizado! Obrigada!! <3");

}
