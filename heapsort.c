#include <stdio.h>

void heapify(int v[], int n, int i) {
    int aux;
    int maxim = i;
    int st = 2 * i + 1;
    int dr = 2 * i + 2;

    if(st < n && v[st] > v[maxim])
        maxim = st;
    if(dr < n && v[dr] > v[maxim])
        maxim = dr;
    if(maxim != i) {
        aux = v[i];
        v[i] = v[maxim];
        v[maxim] = aux;

        heapify(v, n, maxim);
    }
    
}
void heapsort(int v[], int n) {
    // max heap
    for(int i = n / 2 - 1; i >= 0; i--)
        heapify(v, n, i);

    for(int i = n - 1; i>= 0; i--) {
        int aux = v[0];
        v[0] = v[i];
        v[i] = aux;
        heapify(v, i, 0);
    }
}

void afisare(int v[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
}
int main() {
    int v[10] = {3, 7, 2, 99, 12, 13, 13};
    afisare(v, 7);
    heapsort(v, 7);
    afisare(v, 7);
}