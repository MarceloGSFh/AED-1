#include <stdio.h>

int main(){

    int x=1, y=3;
    int *px=&y, *py=&y;
    *px=*px+*py;

    printf(">>>Valor de x: %d\tValor de y: %d\n", x, y);
    printf(">>>Memoria Alocada por x: %p\t Memoria Alocada por y: %p\n", &x, &y);
    printf(">>>Valor Apontado px: %d\tValor Apontado py: %d\n", *px, *py);
    printf(">>>Valor de px: %p\tValor de py: %p\n", px, py);

    return 0;
}
