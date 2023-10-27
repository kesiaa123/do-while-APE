#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int q = 1, certo = 0;
    char alternativa;

    printf("QUESTOES:\n");

    do{
        printf("questao %i : \n", q);
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
        
        }
        q++;

        printf("questao %i : \n", q);
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
        
        }
        q++;

        printf("questao %i : \n", q);
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
        }
        q++;

        
        printf("questao %i : \n", q);
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
        }
        q++;

        printf("questao %i : \n", q);
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
        }
        q++;

        printf("questao %i : \n", q);
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
        }
        q++;

        
        printf("questao %i : \n", q);
        printf("Questão 10: Qual é o valor da expressão 5 + 3 * 2 em C?\n");
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
        }
        
    }while (q < 7);
    
      printf("voce acertou %i questoes", certo);  
    
}
