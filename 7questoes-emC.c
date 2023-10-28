#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int q = 0, certo = 0, errado = 0, fim;
    char alternativa;

    printf("QUESTOES:\n");
        do{
        //questao 1//
        printf("\n--------------------\n");
        printf("questao 1: \n");
        printf("Qual a sintaxe correta para daclarar uma variavel inteira em C?\n");
        printf("a) int x;\n");
        printf("b) var x;\n");
        printf("c) interger x;\n");
        printf("d) numero x;\n");
        scanf(" %c", &alternativa);

        if(alternativa == 'a'){
            printf("parabens voce acertou!\n");
            certo++;
        }
        else{
            printf("alternativa errada\n");
            errado++;
        }
          printf("\n--------------------\n");
        q++;
        //questao 2//
        printf("questao 2: \n");
        printf("Qual é a função usada para imprimir no console em C?\n");
        printf("a) print();\n");
        printf("b) console.log();\n");
        printf("c) printtext();\n");
        printf("d) printf();\n");
        scanf(" %c", &alternativa);

        if(alternativa == 'a'){
            printf("parabens voce acertou!\n");
            certo++;
        }
        else{
            printf("alternativa errada\n");
            errado++;
        }
           printf("\n--------------------\n");
        q++;
        //questao 3//
        printf("questao 3: \n");
        printf("O que o operador '==' faz em C? \n");
        printf("a) Atribui um valor a uma variável.\n");
        printf("b) Compara dois valores.\n");
        printf("c) Divide dois valores.\n");
        printf("d) Multiplica dois valores.\n");
        scanf(" %c", &alternativa);

        if(alternativa == 'a'){
            printf("parabens voce acertou!\n");
            certo++;
        }
        else{
            printf("alternativa errada\n");
            errado++;
        }
           printf("\n--------------------\n");
        q++;
        //questao 4//
        printf("questao 4: \n");
        printf("Qual é o operador lógico para 'OU' em C?\n");
        printf("a) &&\n");
        printf("b) ||\n");
        printf("c) !\n");
        printf("d) <>\n");
        scanf(" %c", &alternativa);

        if(alternativa == 'a'){
            printf("parabens voce acertou!\n");
            certo++;
        }
        else{
            printf("alternativa errada\n");
            errado++;
        }
           printf("\n--------------------\n");
        q++;
        //questao 5//
        printf("questao 5: \n");
        printf("Qual é a estrutura de controle usada para repetição em C?\n");
        printf("a) if\n");
        printf("b) switch\n");
        printf("c) for\n");
        printf("d) else\n");
        scanf(" %c", &alternativa);

        if(alternativa == 'c'){
            printf("parabens voce acertou!\n");
            certo++;
        }
        else{
            printf("alternativa errada\n");
            errado++;
        }
           printf("\n--------------------\n");
        q++;
        //questao 6//
        printf("questao 6: \n");
        printf("Qual é a função usada para ler um número inteiro do teclado em C?\n");
        printf("a) read_integer();\n");
        printf("b) input_int();\n");
        printf("c) scanf();\n");
        printf("d) get_int();\n");
        scanf(" %c", &alternativa);

        if(alternativa == 'c'){
            printf("parabens voce acertou!\n");
            certo++;
        }
        else{
            printf("alternativa errada\n");
            errado++;
        }
           printf("\n--------------------\n");
        q++;
        //questao 7//
        printf("questao 7: \n");
        printf("Qual é o valor da expressão 5 + 3 * 2 em C?\n");
        printf("a) 16\n");
        printf("b) 11\n");
        printf("c) 13\n");
        printf("d) 10\n");
        scanf(" %c", &alternativa);

        if(alternativa == 'b'){
            printf("parabens voce acertou!\n");
            certo++;
        }
        else{
            printf("alternativa errada\n");
            errado++;
        }
           printf("\n--------------------\n");
          q++;
      //printar na tela quantos erros e acertos//
        printf("Voce acertou %i questoes", certo);  
        printf("\nVoce errou %i questoes", errado);
        //tentar novamente ou sair!//
        printf("\nSe deseja melhorar a nota digite 1, ou sair do progama digite 2: ");
        scanf("%i", &fim);
            switch (fim){
                case 1:
                printf("Melhorando a nota!\n");
                break;
            }
        }while (fim == 1);
  //fim do progama//
  printf("\n--------------------\n");
  printf("numero de tentativas: %i e acertos: %i", q, certo);
  printf("\nObrigado!");
  
}
