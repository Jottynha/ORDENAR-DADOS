#include <stdio.h>
#include "funcoes.h"

int main() {
    int arr1[] = {64, 25, 12, 22, 11};
    int arr2[] = {12, 11, 13, 5, 6};
    int arr3[] = {34, 2, 10, -9, 20};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int n3 = sizeof(arr3) / sizeof(arr3[0]);

    // Teste do Selection Sort
    printf("Teste do Selection Sort:\n");
    selectionSort(arr1, n1);
    printf("Array ordenado: ");
    for (int i = 0; i < n1; i++)
        printf("%d ", arr1[i]);
    printf("\n");

    // Teste do Insertion Sort
    printf("\nTeste do Insertion Sort:\n");
    insertionSort(arr2, n2);
    printf("Array ordenado: ");
    for (int i = 0; i < n2; i++)
        printf("%d ", arr2[i]);
    printf("\n");

    // Teste do Gnome Sort
    printf("\nTeste do Gnome Sort:\n");
    gnomeSort(arr3, n3);
    printf("Array ordenado: ");
    for (int i = 0; i < n3; i++)
        printf("%d ", arr3[i]);
    printf("\n");

    return 0;
}
