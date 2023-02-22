#include <stdio.h>

void sortare_directa(int v[], int n) {
    int aux;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(v[i] > v[j]) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
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
    sortare_directa(v, 7);
    afisare(v, 7);
}