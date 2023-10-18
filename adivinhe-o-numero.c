#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int adivinhe, i = 0, numeroAleatorio = rand() % 10 + 1;
    do{
        printf("adivinhe o numero de 1 a 10: ");
         scanf("%i", &adivinhe);
    if (adivinhe > numeroAleatorio)
    {
        printf("o numero e menor que o digitado\n");
    }else if(adivinhe < numeroAleatorio)
    {
        printf("o numero e maior que o digitado\n");
    }
         i++;
      
    }while (adivinhe != numeroAleatorio);

     printf("parabens, voce acertou!!\n", numeroAleatorio);
     printf("numero de tentativas: %i", i);

}
