#ifndef FUNCOES_HPP
#define FUNCOES_HPP
#include <fstream>
#include <iostream>
#include <chrono>
#include <vector>
#include <random>
#include <cctype>
using namespace std;

class AlgoritmosSort {
public:
    static void limparArq();
    static void selectionSort(vector<int>& arr);
    static void insertionSort(vector<int>& arr);
    static void gnomeSort(vector<int>& arr);
    static vector<int> gerarVetor();
private:
    static void swap(int& a, int& b);
};

#endif
