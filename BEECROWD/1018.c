#include <stdio.h>

int main() {

    int n, i, j, k, l, m, p,o;
    scanf("%d", &n);
    i=n/100;
    j=n%100/50;
    k=(n%100)%50/20;
    l=((n%100)%50)%20/10;
    m=(((n%100)%50)%20)%10/5;
    p=((((n%100)%50)%20)%10)%5/2;
    o=(((((n%100)%50)%20)%10)%5)%2;
    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", n, i, j, k, l, m, p, o);


    return 0;
}
