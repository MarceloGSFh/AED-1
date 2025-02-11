#include <stdio.h>
#define TAM_MAX 61

int main() {
    int total_b, tam, par=0;
    char l;
    int b[TAM_MAX][2];
    while (scanf("%d", &total_b) != EOF) {
        for (int i = 30; i <= 60; i++) {
            b[i][0] = 0;
            b[i][1] = 0;
        }
        for (int i = 0; i < total_b; i++) {
            scanf("%d %c", &tam, &l);
            if (lado == 'E') {
                b[tam][0]++;
            } else if (l == 'D') {
                b[tam][1]++;
            }
        }
        for (int i = 30; i <= 60; i++) {
            if (b[i][0] < b[i][1]) {
                par += b[i][0]; 
            }
            else {
                par += b[i][1];
            }
        }
        printf("%d\n", par);
    }
    return 0;
}
