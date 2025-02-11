#include <stdio.h>

int main(){
    int x, r, fat[] = {40320, 5040, 720, 120, 24, 6, 2, 1};
    scanf("%d", &x);
    r = 0;
    for (int i = 0; i < 8; ++i) {
        r += x / fat[i];
        x %= fat[i];
    }
    printf("%d\n", r);
    return 0;
}
