#include <stdio.h>
unsigned int soma_sem_carry(unsigned int x, unsigned int y) {
    return x ^ y;  
}
int main() {
    unsigned int num1, num2;
    while (scanf("%u %u", &num1, &num2) != EOF) {
        printf("%u\n", soma_sem_carry(num1, num2));
    }
    return 0;
}
