#include <stdio.h>

int partitie(int A[], int left, int right, int pivot) {
    int pivot_index = left;
    int aux;
    for (int i = left; i <= right; i++) {
        if(A[i] <= pivot) {
            aux = A[pivot_index];
            A[pivot_index] = A[i];
            A[i] = aux;
            pivot_index++;
        }   
    }
    pivot_index--;

    return pivot_index;
}
void quicksort(int A[], int left, int right) {
    if(left < right) {
        int pivot = A[right];
        int pivot_index = partitie(A, left, right, pivot);
        quicksort(A, left, pivot_index - 1);
        quicksort(A, pivot_index + 1, right);
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
    quicksort(v, 0, 6);
    afisare(v, 7);
}