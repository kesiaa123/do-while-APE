#include <stdio.h>
#include <math.h>

int main(){

    int numero, fatorial = 1, i = 1;

    printf("digite um numero inteiro positivo: ");
    scanf("%i", &numero);

    do{
        fatorial *= i;
        i++;

    }while (i <= numero);
    printf("fatoriais= %i", fatorial);

}
