#ifndef FUNCOES_HPP
#define FUNCOES_HPP

#include <vector>
using namespace std;

class SortAlgorithms {
public:
    static void selectionSort(vector<int>& arr);
    static void insertionSort(vector<int>& arr);
    static void gnomeSort(vector<int>& arr);
private:
    static void swap(int& a, int& b);
};

#endif
