#include <stdio.h>
#include <math.h>

int main(){
  int numero, i = 0;
  printf("o programa so ira parar se o numero for igual a zero\n");
    do{
        printf("digite um numero: ");
    scanf("%i", &numero);

    i+= numero;

    }while (numero != 0);

  printf("a soma destes numeros = %i\n", i);
}
