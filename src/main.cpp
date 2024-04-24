#include <iostream>
#include <vector>
#include "funcoes.hpp"

using namespace std;

int main() {
    vector<int> arr = {5, 2, 9, 1, 6, 4, 3, 7, 8};

    // Teste Selection Sort
    cout << "Array antes do Selection Sort:" << endl;
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    SortAlgorithms::selectionSort(arr);
    cout << "Array depois do Selection Sort:" << endl;
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl << endl;

    // Teste Insertion Sort
    arr = {5, 2, 9, 1, 6, 4, 3, 7, 8};
    cout << "Array antes do Insertion Sort:" << endl;
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    SortAlgorithms::insertionSort(arr);
    cout << "Array depois do Insertion Sort:" << endl;
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl << endl;

    // Teste Gnome Sort
    arr = {5, 2, 9, 1, 6, 4, 3, 7, 8};
    cout << "Array antes do Gnome Sort:" << endl;
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    SortAlgorithms::gnomeSort(arr);
    cout << "Array depois do Gnome Sort:" << endl;
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
