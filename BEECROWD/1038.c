#include <stdio.h>

int main() {

    int i, q;
    double total,r;
    scanf("%d%d", &i, &q);
    if(i==1)
        r=4.00;
    else if(i==2)
        r=4.50;
    else if(i==3)
        r=5.00;
    else if(i==4)
        r=2.00;
    else if(i==5)
        r= 1.50;

    total=r*q;
    printf("Total: R$ %.2lf\n", total);

    return 0;
}
