#include <stdio.h>
int main() {
    int h1, m1, h2, m2;
    scanf("%d %d %d %d", &h1, &m1 &h2, &m2);
    int min1 = h1 * 60 + m1;
    int in2 = h2 * 60 + m2;
    int total = min2 - min1;
    if (total <= 0) {
        total += 1440; // Adiciona 24 horas em minutos
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", total/60, total % 60);
    return 0;
}
