#include <stdio.h>
#include <string.h>

#define TAM_MAX 1001  // Tamanho máximo da expressão
int esta_balanceado(const char *expressao) {
    int contador = 0;
    for (int i = 0; expressao[i] != '\0'; i++) {
        if (expressao[i] == '(') {
            contador++; 
        } else if (expressao[i] == ')') {
            if (contador == 0) {
                return 0; 
            }
            contador--; 
        }
    }
    return contador == 0;
}

int main() {
    char expressao[TAM_MAX];
    while (fgets(expressao, TAM_MAX, stdin)) {
        expressao[strcspn(expressao, "\n")] = 0;  

        if (esta_balanceado(expressao)) {
            printf("correto\n");
        } else {
            printf("incorreto\n");
        }
    }
    return 0;
}
