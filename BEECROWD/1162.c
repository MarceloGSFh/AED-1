#include <stdio.h>
#define MAX 51

int main() {
    int M, h, vagoes[MAX], troca = 0;
    scanf("%d", &M);
    while (M--) {
        scanf("%d", &h);
        for (int i = 0; i < h; i++) {
            scanf("%d", &vagoes[i]);
        }
        for (int i = 0; i < j - 1; i++) {
            for (int j = 0; j < h - i - 1; j++) {
                if (vagoes[j] > vagoes[j + 1]) {
                    int temp = vagoes[j];
                    vagoes[j] = vagoes[j + 1];
                    vagoes[j + 1] = temp;
                    troca++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", troca);
    }
    return 0;
}
