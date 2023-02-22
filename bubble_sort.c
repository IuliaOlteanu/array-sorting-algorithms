#include <stdio.h>

void bubble_sort(int v[], int n) {
    int ok;
    int aux;
    do {
        ok = 1;
        for(int i = 0; i < n - 1; i++) {
            if(v[i] > v[i + 1]) {
                ok = 0;
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
            }
        }
    } while(!ok);
}

void afisare(int v[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
}
int main() {
    int v[10] = {3, 7, 2, 99, 12, 13, 0};
    afisare(v, 7);
    bubble_sort(v, 7);
    afisare(v, 7);
}