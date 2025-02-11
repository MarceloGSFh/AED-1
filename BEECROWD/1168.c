#include <stdio.h>
#include <string.h>

int main() {
    int x, t=0, d;
    char num[101]
    scanf("%d", &x);
    int LEDS[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    for (int i = 0; i < x; i++) {
        scanf("%s", num);
        int t = 0;
        for (int j = 0; j < strlen(num); j++) {
            d = numero[j] - '0';
            t += LEDS[d];
        }
        printf("%d leds\n", t);
    }
    return 0;
}
