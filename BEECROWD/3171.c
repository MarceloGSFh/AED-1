#include <stdio.h>

int find(int pai[], int i) {
    if (pai[i] != i) {
        pai[i] = find(pai, pai[i]);
    }
    return pai[i];
}

void unionSets(int pai[], int tam[], int x, int y) {
    int rootX = find(pai, x);
    int rootY = find(pai, y);

    if (rootX != rootY) {
        if (tam[rootX] > tam[rootY]) {
            pai[rootY] = rootX;
            tam[rootX] += tam[rootY];
        } 
        else {
            pai[rootX] = rootY;
            tam[rootY] += tam[rootX];
        }
    }
}

int main() {
    int n, l;
    scanf("%d %d", &n, &l);
    int pai[n], tam[n];
    for (int i = 0; i < n; i++) {
        pai[i] = i;
        tam[i] = 1; 
    }
    for (int i = 0; i < l; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        unionSets(pai, size, x - 1, y - 1);
    }
    int root = find(pai, 0);
    int completo = 1;
    for (int i = 1; i < n; i++) {
        if (find(pai, i) != root) {
            completo = 0;
            break;
        }
    }
    if (completo) {
        printf("COMPLETO\n");
    } 
    else {
        printf("INCOMPLETO\n");
    }
    return 0;
}
