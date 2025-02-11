#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int maior_segmento_comum(char* str1, char* str2) {
    int **tabela;
    int tam1, tam2, maior_valor = 0;
    tam1 = strlen(str1);
    tam2 = strlen(str2);
    tabela = (int**) malloc((tam1 + 1) * sizeof(int*));
    for (int i = 0; i <= tam1; ++i) {
        tabela[i] = (int*) calloc(tam2 + 1, sizeof(int)); 
    }
    for (int i = 1; i <= tam1; ++i) {
        for (int j = 1; j <= tam2; ++j) {
            if (str1[i - 1] == str2[j - 1]) {
                tabela[i][j] = tabela[i - 1][j - 1] + 1;
                if (tabela[i][j] > maior_valor) {
                    maior_valor = tabela[i][j];
                }
            }
        }
    }
    for (int i = 0; i <= tam1; ++i) {
        free(tabela[i]);
    }
    free(tabela);
    return maior_valor;
}

int main() {
    char str1[51], str2[51];
    while (scanf("%[^\n]\n%[^\n]\n", str1, str2) != EOF) {
        printf("%d\n", maior_segmento_comum(str1, str2));
    }
    return 0;
}
