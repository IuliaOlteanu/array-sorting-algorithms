#include <stdio.h>

void sortare(int A[], int n) {
    int i;
    int maxim = A[0];

    // gasire element maxim
    for(i = 1; i < n; i++) {
        if(A[i] > maxim)
            maxim = A[i];
    }

    // creare vector de lungime maxim + 1
    int B[maxim + 1];
    for(i = 0; i <= maxim; i++)
        B[i] = 0;

    // numarare elemente din A si plasare in B
    for(i = 0; i < n; i++)
        B[A[i]]++;

    // acumularea val din B
    for (i = 1; i <= maxim; i++) {
        B[i] += B[i-1];
    }
    
    // plasarea elem din A in ordine in sirul sortat
    int sortat[n];
    for (i = 0; i < n; i++) {
        sortat[B[A[i]]-1] = A[i];
        B[A[i]]--;
    }

    // copiere sir sortat in A
    for (i = 0; i < n; i++) {
        A[i] = sortat[i];
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
    sortare(v, 7);
    afisare(v, 7);
}