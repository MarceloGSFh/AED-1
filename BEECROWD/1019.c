#include <stdio.h>
 
int main() {
 
    int s, min, h;
    scanf("%d", &s);
    h=s/3600;
    min= s%3600/60;
    s= (s%3600)%60;
    printf("%d:%d:%d\n", h, min, s);
 
    return 0;
}
