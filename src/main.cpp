#include "funcoes.hpp"

using namespace std;

int main() {
    ofstream outfile("output.txt", ios_base::app);
    char resp;
    cout << "Deseja LIMPAR o Arquivo [S/N]: ";
    cin >> resp;
    resp = toupper(resp);
    if(resp == 'S')
        AlgoritmosSort::limparArq();
    vector<int> arr = AlgoritmosSort::gerarVetor();
    outfile << endl << "[MÉTODOS EM C++]" << endl;
    // Teste Selection Sort
    cout << "Array antes do Selection Sort:" << endl;
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    //AlgoritmosSort::selectionSort(arr);
    cout << "Array depois do Selection Sort:" << endl;
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl << endl;

    // Teste Insertion Sort
    cout << "Array antes do Insertion Sort:" << endl;
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    //AlgoritmosSort::insertionSort(arr);
    cout << "Array depois do Insertion Sort:" << endl;
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl << endl;

    // Teste Gnome Sort
    cout << "Array antes do Gnome Sort:" << endl;
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    AlgoritmosSort::gnomeSort(arr);
    cout << "Array depois do Gnome Sort:" << endl;
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    outfile.close();
    return 0;
}
