#include "funcoes.h"

void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;
    for (i = 0; i < n - 1; i++) {
        // Encontrando o índice do menor elemento não ordenado
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Trocando o elemento atual com o menor elemento encontrado
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void insertionSort(int arr[], int n) {
    int i, temp, j;
    for (i = 1; i < n; i++) {
        // Armazenando o elemento atual para inserção na posição correta
        temp = arr[i];
        j = i - 1;
        // Deslocando os elementos maiores que temp para a direita
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        // Inserindo temp na posição correta no subarray ordenado
        arr[j + 1] = temp;
    }
}

void gnomeSort(int arr[], int n) {
    int index = 0;
    while (index < n) {
        // Verificando se é necessário mover para o próximo elemento
        if (index == 0)
            index++;
        // Verificando se o elemento atual é maior ou igual ao anterior
        if (arr[index] >= arr[index - 1])
            index++;
        else {
            // Trocando os elementos e retrocedendo para a posição anterior
            int temp = arr[index];
            arr[index] = arr[index - 1];
            arr[index - 1] = temp;
            index--;
        }
    }
}
