#ifndef FUNCOES_H
#define FUNCOES_H
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

// Função para ordenar um array usando o Selection Sort
void selectionSort(int arr[], int n);

// Função para ordenar um array usando o Insertion Sort
void insertionSort(int arr[], int n);

// Função para ordenar um array usando o Gnome Sort
void gnomeSort(int arr[], int n);

void limparArquivo(const char *filename);

int* lerArq(const char* nome_arquivo, int tamanho_vetor); 


#endif /* FUNCOES_H */
