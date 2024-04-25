#include "funcoes.hpp"

void AlgoritmosSort::limparArq() {
    ofstream outfile("output.txt", ios::trunc); // Abre o arquivo em modo de truncamento para limpar seu conteúdo
    outfile.close();
}


void AlgoritmosSort::swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void AlgoritmosSort::selectionSort(vector<int>& arr) {

     auto start = chrono::high_resolution_clock::now();

    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> duration = end - start;

    ofstream outfile("output.txt", ios_base::app); // Abre o arquivo em modo de adição
    outfile << "[ Tempo de execução do Selection Sort ] : [ " << duration.count() << " segundos ]\n";
    outfile.close();
}

void AlgoritmosSort::insertionSort(vector<int>& arr) {

     auto start = chrono::high_resolution_clock::now();


    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> duration = end - start;

    ofstream outfile("output.txt", ios_base::app); // Abre o arquivo em modo de adição
    outfile << "[ Tempo de execução do Insertion Sort ] : [ " << duration.count() << " segundos ]\n";
    outfile.close();
}

void AlgoritmosSort::gnomeSort(vector<int>& arr) {

     auto start = chrono::high_resolution_clock::now();

    int n = arr.size();
    int index = 0;
    while (index < n) {
        if (index == 0) {
            index++;
        }
        if (arr[index] >= arr[index - 1]) {
            index++;
        } else {
            swap(arr[index], arr[index - 1]);
            index--;
        }
    }

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> duration = end - start;

    ofstream outfile("output.txt", ios_base::app); // Abre o arquivo em modo de adição
    outfile << "[ Tempo de execução do Gnome Sort ] : [ " << duration.count() << " segundos ] \n";
    outfile.close();
}

vector<int> AlgoritmosSort::gerarVetor() {
    int tam, max;
    cout << "Digite o tamanho do vetor: ";
    cin >> tam;
    cout << "Digite o valor máximo para os números aleatórios: ";
    cin >> max;
    vector<int> vec;
    // Inicializa o gerador de números aleatórios
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(0, max);

    // Preenche o vetor com números inteiros aleatórios
    for (int i = 0; i < tam; ++i) {
        vec.push_back(dis(gen));
    }

    return vec;
}