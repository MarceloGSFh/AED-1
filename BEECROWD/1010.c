#include <stdio.h>
 
int main() {
 
    int p1, np1, p2, np2;
    double vp1, vp2, total;
    scanf("%d%d%lf", &p1, &np1, &vp1);
    scanf("%d%d%lf", &p2, &np2, &vp2);
    total= (np1*vp1)+(np2*vp2);
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
 
    return 0;
}
