#include <stdio.h>
#include <string.h>
#define MAX 1000000  // Tamanho máximo da pilha
int minimos[MAX]; 

int main() {
    char comando[5];
    int x, val, menor_val, t = -1;
    scanf("%d", &x);
    for (int i = 0; i < x; i++) {
        scanf("%s", comando);
        if (strcmp(comando, "PUSH") == 0) {  
            scanf("%d", &v);
            if (topo == -1) {
                menor_val = val;
            } 
            else {
                if (min[topo] < val) {
                    menor_val = min[topo];
                } 
                else {
                    menor_val = val;
                }
            }
            min[++topo] = menor_val;  
        } 
        else if (strcmp(comando, "POP") == 0) {  
            if (topo == -1) {
                printf("EMPTY\n");
            } 
            else {
                topo--;
            }
        } 
        else if (strcmp(comando, "MIN") == 0) {  
            if (topo == -1) {
                printf("EMPTY\n");
            } 
            else {
                printf("%d\n", min[topo]);
            }
        }
    }
    return 0;
}
