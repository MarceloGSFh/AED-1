#include <stdio.h>
 
int main() {
    char nomeVendedor[100];
    double salario, vendas, total;
    scanf("%s", nomeVendedor);
    scanf("%lf%lf", &salario, &vendas);
    total = salario+0.15*vendas;
    printf("TOTAL = R$ %.2lf\n", total);
    
    return 0;
}
