// Escreva um programa que inverta os caracteres de um string.

#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_CTYPE, "Portuguese");
    char string[51]; // coloquei um espaço a mais por causa do caracter nulo colocado no final da string pela função fgets
    printf("Insira uma string de até 50 caracteres: ");
    fgets(string, sizeof(string), stdin);
    setbuf(stdin, NULL);
    int tamanho = 0;
    while (string[tamanho] != '\n' && string[tamanho] != '\0') {
        tamanho++;
    }
    while (tamanho > 50) {
        printf("Sua string é maior do que 50 caracteres. Insira outra: ");
        fgets(string, sizeof(string), stdin);
        setbuf(stdin, NULL);
        tamanho = 0;
        while (string[tamanho] != '\n' && string[tamanho] != '\0') {
            tamanho++;
        }
    }
    char string_invertida[tamanho + 1];
    int j = 0;
    for (int i = tamanho-1; i>=0; i--) {
        string_invertida[j] = string[i];
        j++;
    }
    string_invertida[j] = '\0'; //caracter nulo para controle da string e impressão adequada
    printf("String invertida: %s", string_invertida);
    return 0;
}