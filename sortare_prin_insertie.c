#include <stdio.h>

void sortare_prin_insertie(int v[], int n) {
    int i, j, cheie;
    for(j = 1; j < n; j++) {
        cheie = v[j];
        i = j - 1;
        while(i >= 0 && v[i] > cheie) {
            v[i + 1] = v[i];
            i--;
        }
        v[i + 1] = cheie;
    }
}

void afisare(int v[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
}
int main() {
    int v[10] = {3, 7, 2, 99, 12, 13, 0};
    afisare(v, 7);
    sortare_prin_insertie(v, 7);
    afisare(v, 7);
}