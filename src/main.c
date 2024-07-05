#include "funcoes.h"

int main() {
    char resp;

    printf("Deseja LIMPAR o Arquivo [S/N]: ");
    scanf("%c", &resp);
    resp = toupper(resp);
    if(resp == 'S')
        limparArquivo("output.txt");

    int  tam;
    printf("Digite o tamanho do array: ");
    scanf("%d", &tam);

    // Aloca dinamicamente o array com o tamanho especificado pelo usuário
    int *arr = (int *)malloc(tam * sizeof(int));
    if (arr == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }
    FILE *outfile = fopen("output.txt", "a");
    fprintf(outfile, "[MÉTODOS EM C]\n");
    fclose(outfile);

    arr = lerArq("input.txt",tam);
    
    // Teste do Selection Sort
    printf("Teste do Selection Sort:\n");
    selectionSort(arr, tam);
    printf("Array ordenado: ");
    for (int i = 0; i < tam; i++)
        printf("%d ", arr[i]);
    printf("\n");

    arr = lerArq("input.txt",tam);

    // Teste do Insertion Sort
    printf("\nTeste do Insertion Sort:\n");
    insertionSort(arr, tam);
    printf("Array ordenado: ");
    for (int i = 0; i < tam; i++)
        printf("%d ", arr[i]);
    printf("\n");

    arr = lerArq("input.txt",tam);

    // Teste do Gnome Sort
    printf("\nTeste do Gnome Sort:\n");
    gnomeSort(arr, tam);
    printf("Array ordenado: ");
    for (int i = 0; i < tam; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

