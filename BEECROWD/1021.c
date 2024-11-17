#include <stdio.h>
 
int main() {
 
     double reais;
    int n100, n50, n20, n10, n5, n2, n1, m50, m25, m10, m5, m1;
    scanf("%lf", &reais);

    // NOTAS
    n100 = reais / 100;
    reais = fmod(reais, 100);
    n50 = reais / 50;
    reais = fmod(reais, 50);
    n20 = reais / 20;
    reais = fmod(reais, 20);
    n10 = reais / 10;
    reais = fmod(reais, 10);
    n5 = reais / 5;
    reais = fmod(reais, 5);
    n2 = reais / 2;
    reais = fmod(reais, 2);
    n1 = reais;

    // MOEDAS
    reais = (reais - n1) * 100; // Ajustando reais para calcular as moedas corretamente
    m50 = reais / 50;
    reais = fmod(reais, 50);
    m25 = reais / 25;
    reais = fmod(reais, 25);
    m10 = reais / 10;
    reais = fmod(reais, 10);
    m5 = reais / 5;
    reais = fmod(reais, 5);
    m1 = reais;

    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n", n100, n50, n20, n10, n5, n2);
    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", n1, m50, m25, m10, m5, m1);

 
    return 0;
}
