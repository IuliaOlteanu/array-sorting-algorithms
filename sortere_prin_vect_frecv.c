#include <stdio.h>
#include <stdlib.h>

void sortare(int v[], int n) {
    int maxim = v[0];
    for(int i = 1; i < n; i++) {
        if(v[i] > maxim)
            maxim = v[i];
    }
    int *frecv = (int*)calloc(maxim + 1, sizeof(int));
    for(int i = 0; i < n; i++) {
        frecv[v[i]]++;
    }
    int k = 0;
    for(int i = 0; i <= maxim; i++) {
        for(int j = 0; j < frecv[i]; j++) {
           v[k++] = i;
        } 
    }
    free(frecv);
}


void afisare(int v[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
}
int main() {
    int v[10] = {3, 7, 2, 99, 12, 13, 13};
    afisare(v, 7);
    sortare(v, 7);
    afisare(v, 7);
}