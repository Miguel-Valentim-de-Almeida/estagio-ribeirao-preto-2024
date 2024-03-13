// Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "Portuguese");
    int numero, n1 = 0, n2 = 1, n3, encontrou = 0;
    printf("Insira um número inteiro: ");
    scanf("%d", &numero);
    setbuf(stdin, NULL);
    if (numero == 0) {
        encontrou = 1;
    } else {
        // usei n2 para iterar o loop pois é o número mais recente na sequência
        while (n2 <= numero) {
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
            if (n3 == numero) {
                encontrou = 1;
                break;
            }
        }
    }    
    if (encontrou == 1) {
        printf("O número inserido faz parte da sequência de Fibonacci!");
    } else {
        printf("O número inserido não faz parte da sequência de Fibonacci!");
    }
    return 0;
}