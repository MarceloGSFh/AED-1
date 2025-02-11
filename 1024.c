#include <stdio.h>
#include <string.h>
void transformar_caracteres(char *texto) {
    for (int i = 0; texto[i] != '\0'; i++) {
        if ((texto[i] >= 'A' && texto[i] <= 'Z') || (texto[i] >= 'a' && texto[i] <= 'z')) {
            texto[i] += 3;
        }
    }
}
void inverter_texto(char *texto) {
    int tamanho = strlen(texto);
    for (int i = 0; i < tamanho / 2; i++) {
        char temp = texto[i];
        texto[i] = texto[tamanho - i - 1];
        texto[tamanho - i - 1] = temp;
    }
}
void ajustar_metade_final(char *texto) {
    int tamanho = strlen(texto);
    for (int i = tamanho / 2; i < tamanho; i++) {
        texto[i] -= 1;
    }
}
int main() {
    int quantidade;
    char texto[1001];
    scanf("%d", &quantidade);
    getchar(); 
    while (quantidade--) {
        fgets(texto, sizeof(texto), stdin);
        texto[strcspn(texto, "\n")] = 0; 
        transformar_caracteres(texto);
        inverter_texto(texto);
        ajustar_metade_final(texto);
        printf("%s\n", texto);
    }
    return 0;
}
