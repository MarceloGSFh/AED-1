#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 60000

void insertionSort(int v[], int n){
    for (int i = 1; i < n; i++) {
        int chave = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > chave) {
            v[j + 1] = v[j];
            j = j - 1;
        }
        v[j + 1] = chave;
    }
}

void merge(int array[], int esquerda, int meio, int direita){
    int n1 = meio - esquerda + 1;
    int n2 = direita - meio;
    int *L = (int *)malloc(n1 * sizeof(int));
    int *R = (int *)malloc(n2 * sizeof(int));
    for (int i = 0; i < n1; i++) L[i] = array[esquerda + i];
    for (int j = 0; j < n2; j++) R[j] = array[meio + 1 + j];
    int i = 0, j = 0, k = esquerda;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) array[k++] = L[i++];
        else array[k++] = R[j++];
    }
    while (i < n1) array[k++] = L[i++];
    while (j < n2) array[k++] = R[j++];
    free(L);
    free(R);
}

void mergeSort(int array[], int esquerda, int direita){
    if (esquerda < direita){
        int meio = esquerda + (direita - esquerda) / 2;
        mergeSort(array, esquerda, meio);
        mergeSort(array, meio + 1, direita);
        merge(array, esquerda, meio, direita);
    }
}

int divide(int p, int r, int v[]){
    int c = v[r], j = p;
    for (int k = p; k < r; k++){
        if (v[k] <= c){
            int t = v[j];
            v[j++] = v[k];
            v[k] = t;
        }
    }
    v[r] = v[j];
    v[j] = c;
    return j;
}

void quickSort(int p, int r, int v[]){
    if (p < r){
        int j = divide(p, r, v);
        quickSort(p, j - 1, v);
        quickSort(j + 1, r, v);
    }
}

int main(){
    clock_t t, t2, t3;
    int v[MAX];
    srand((unsigned)time(NULL));
    for (int i = 0; i < MAX; i++) v[i] = rand() % MAX;
    t = clock();
    insertionSort(v, MAX);
    t = clock() - t;
    printf(">>>Tempo de Execucao do Insertion:\t%lf", (double)t / CLOCKS_PER_SEC);
    for (int i = 0; i < MAX; i++) v[i] = rand() % MAX;
    t2 = clock();
    mergeSort(v, 0, MAX - 1);
    t2 = clock() - t2;
    printf("\n\n>>>Tempo de Execucao do Merge:\t%lf", (double)t2 / CLOCKS_PER_SEC);
    for (int i = 0; i < MAX; i++) v[i] = rand() % MAX;
    t3 = clock();
    quickSort(0, MAX - 1, v);
    t3 = clock() - t3;
    printf("\n\n>>>Tempo de Execucao do QuickSort:\t%lf", (double)t3 / CLOCKS_PER_SEC);
    return 0;
}
