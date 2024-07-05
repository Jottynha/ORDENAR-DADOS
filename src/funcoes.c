#include "funcoes.h"

int* lerArq(const char* nome_arquivo, int tamanho_vetor) {
    FILE* arquivo = fopen(nome_arquivo, "r");
    if (arquivo == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo.\n");
        return NULL;
    }
    int* vetor = (int*)malloc(tamanho_vetor * sizeof(int));
    if (vetor == NULL) {
        fprintf(stderr, "Erro ao alocar memória.\n");
        fclose(arquivo);
        return NULL;
    }

    int numero, i = 0;
    while (fscanf(arquivo, "%d", &numero) == 1 && i < tamanho_vetor) {
        vetor[i] = numero;
        i++;
    }
    fclose(arquivo);
    // Se menos números foram lidos do que o tamanho desejado do vetor
    if (i < tamanho_vetor) {
        vetor = (int*)realloc(vetor, i * sizeof(int));
    }
    return vetor;
}

void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;
    clock_t start, end;
    double cpu_time_used;
    start = clock();

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

    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    FILE *outfile = fopen("output.txt", "a");
    fprintf(outfile, "[ Tempo de execução do Selection Sort ] : [ %f segundos ]\n", cpu_time_used);
    fclose(outfile);
}

void insertionSort(int arr[], int n) {
    int i, temp, j;
    clock_t start, end;
    double cpu_time_used;
    start = clock();

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
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    FILE *outfile = fopen("output.txt", "a");
    fprintf(outfile, "[ Tempo de execução do Insertion Sort ] : [ %f segundos ]\n", cpu_time_used);
    fclose(outfile);
}

void gnomeSort(int arr[], int n) {
    int index = 0;
    clock_t start, end;
    double cpu_time_used;
    start = clock();

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

    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    FILE *outfile = fopen("output.txt", "a");
    fprintf(outfile, "[ Tempo de execução do Gnome Sort ] : [ %f segundos ]\n", cpu_time_used);
    fclose(outfile);
}

void limparArquivo(const char *filename) {
    FILE *file = fopen(filename, "w"); // Abre o arquivo em modo de escrita, o que limpa seu conteúdo
    fclose(file);
}