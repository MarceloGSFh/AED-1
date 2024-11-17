#include <stdio.h>
 
int main() {
 
    int t, v, d;
    double l;
    scanf("%d%d", &t, &v);
    d=v*t;
    l= (float)d/12;
    printf("%.3lf\n", l);
    
 
    return 0;
}
