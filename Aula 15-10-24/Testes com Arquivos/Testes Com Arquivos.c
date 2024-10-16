#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *arquivo;
    char str[100];
    arquivo = fopen("teste_txt", "a");
    //TESTE PARA VERIFICAR A EXISTENCIA DO ARQUIVO!
    if(arquivo==0) return 1;
    printf(">>>Escreva o que sera gravado no arquivo:\n>");
    fgets(str, 100, stdin);
    fprintf(arquivo, "%s", str);
    fclose(arquivo);
    return 0;
}
