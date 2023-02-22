#include <stdio.h>

// parcurgem vectorul numai pana la indicele unde s-a 
// facut ultima interschimbare la parcurgerea anterioara
void bubble_sort(int v[], int n) {
    int ok;
    int aux;
    int m = n;
    do {
        ok = 1;
        int p = m;
        for(int i = 0; i < p - 1; i++) {
            if(v[i] > v[i + 1]) {
                ok = 0;
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
                m = i + 1;
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