#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    printf("%d\n", x - (x % 2) + 2);
    return 0;
}
