#include <stdio.h>

int main() {
    int x, num, f[2001] = {0};
    scanf("%d", &x);
    for (int i = 0; i < x; i++) {
        int num;
        scanf("%d", &num);
        f[num]++;
    }
    for (int i = 1; i <= 2000; i++) {
        if (f[i] > 0) {
            printf("%d aparece %d vez(es)\n", i, f[i]);
        }
    }
    return 0;
}
