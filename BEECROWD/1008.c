#include <stdio.h>
 
int main() {
 
    int n, h;
    double rs, renda;
    scanf("%d%d%lf",&n, &h, &rs);
    renda= rs*(float)h;
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", n, renda);
    
 
    return 0;
}
