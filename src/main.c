#include "funcoes.h"

int main() {
    char resp;

    printf("Deseja LIMPAR o Arquivo [S/N]: ");
    scanf("%c", &resp);
    resp = toupper(resp);
    if(resp == 'S')
        limparArquivo("output.txt");
    int  tam, max;
    printf("Digite o tamanho do array: ");
    scanf("%d", &tam);
    printf("Digite o valor máximo para os números aleatórios: ");
    scanf("%d", &max);
    // Aloca dinamicamente o array com o tamanho especificado pelo usuário
    int *arr = (int *)malloc(tam * sizeof(int));
    if (arr == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }
    FILE *outfile = fopen("output.txt", "a");
    fprintf(outfile, "[MÉTODOS EM C]\n");
    fclose(outfile);

    gerarArray(arr, tam, max);

    // Teste do Selection Sort
    printf("Teste do Selection Sort:\n");
    selectionSort(arr, tam);
    printf("Array ordenado: ");
    for (int i = 0; i < tam; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // Teste do Insertion Sort
    printf("\nTeste do Insertion Sort:\n");
    insertionSort(arr, tam);
    printf("Array ordenado: ");
    for (int i = 0; i < tam; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // Teste do Gnome Sort
    printf("\nTeste do Gnome Sort:\n");
    gnomeSort(arr, tam);
    printf("Array ordenado: ");
    for (int i = 0; i < tam; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
