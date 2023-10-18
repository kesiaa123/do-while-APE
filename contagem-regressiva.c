#include <stdio.h>
#include <math.h>

int main(){
    int num;

     printf("digite um numero inteiro positivo: ");
        scanf("%i", &num);
    do{

    num --;
    printf("%i\n", num);

    }while (num != 0);
}
