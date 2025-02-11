#include <stdio.h>
int fibonacci[40], chamadas[40];
void calcular_fibonacci(int n) {
    if (fibonacci[n] == -1) {
        calcular_fibonacci(n - 1);
        calcular_fibonacci(n - 2);
        fibonacci[n] = fibonacci[n - 1] + fibonacci[n - 2];
        chamadas[n] = chamadas[n - 1] + chamadas[n - 2] + 1;
    }
}
int main() {
    int qtd_testes, numero;
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    chamadas[0] = 1;
    chamadas[1] = 1;
    for (int i = 2; i < 40; ++i) {
        fibonacci[i] = -1;
        chamadas[i] = -1;
    }
    scanf("%d", &qtd_testes);
    for (int i = 0; i < qtd_testes; ++i) {
        scanf("%d", &numero);
        calcular_fibonacci(numero);
        printf("fib(%d) = %d chamadas = %d\n", numero, chamadas[numero] - 1, fibonacci[numero]);
    }
    return 0;
}
