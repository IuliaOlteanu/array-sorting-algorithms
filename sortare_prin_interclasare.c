#include <stdio.h>

void sortare_prin_interclasare(int v[], int st, int dr) {
    int m;
    if(st < dr) {
        m = (st + dr) / 2;
        sortare_prin_interclasare(v, st, m);
        sortare_prin_interclasare(v, m + 1, dr);
        interclasare(v, st, m, dr);
    }
}

void interclasare(int v[], int st, int m, int dr) {
    int i = st;
    int j = m + 1;
    int k = 0;
    int aux[100];
    while(i <= m && j <= dr) {
        if(v[i] < v[j]) {
            aux[k] = v[i];
            k++;
            i++;
        } else {
            aux[k] = v[j];
            k++;
            j++;
        }
    }
    while(i <= m) {
        aux[k] = v[i];
        k++;
        i++;
    }
    while(j <= dr) {
        aux[k] = v[j];
        k++;
        j++;
    }
    k = 0;
    for(i = st; i <= dr; i++) {
        v[i] = aux[k];
        k++;
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
    sortare_prin_interclasare(v, 0, 6);
    afisare(v, 7);
}