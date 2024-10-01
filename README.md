# Implementação de Métodos de Ordenação

Este projeto implementa três algoritmos de ordenação clássicos: **Selection Sort**, **Insertion Sort** e **Gnome Sort**. O objetivo é ordenar vetores de números inteiros de até 100.000 entradas.

## Algoritmos de Ordenação Implementados

### 1. Selection Sort
O **Selection Sort** percorre o vetor repetidamente e seleciona o menor elemento a cada iteração, movendo-o para a sua posição correta. Ele tem complexidade **O(n²)** e é eficiente para vetores pequenos.

### 2. Insertion Sort
O **Insertion Sort** constrói o vetor ordenado uma entrada de cada vez, inserindo os elementos na posição correta dentro do sub-vetor já ordenado. Ele também tem complexidade **O(n²)** no pior caso, mas pode ser eficiente para pequenas quantidades de dados ou vetores que já estão parcialmente ordenados.

### 3. Gnome Sort
O **Gnome Sort** é uma versão simplificada do **Insertion Sort**, comparando pares adjacentes de elementos e trocando-os se estiverem fora de ordem. Ele continua retrocedendo até encontrar o par correto e, em seguida, avança novamente. Sua complexidade também é **O(n²)** no pior caso.

## Funcionalidades

- Ordenação de vetores de números inteiros com até **100.000 entradas**.
- Comparação de desempenho entre os três algoritmos para diferentes tamanhos de dados.
- Saída com os tempos de execução de cada método.
