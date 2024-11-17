#include <stdio.h>
 
int main() {
 
    int distancia;
    float valor, total;
    scanf("%d%f", &distancia, &valor);
    total= (float)distancia/valor;
    printf("%.3f km/l\n", total);
 
    return 0;
}
