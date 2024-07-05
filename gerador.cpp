#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

void generate_random_numbers(int size) {
    // Inicializa a semente do gerador de números aleatórios
    std::srand(std::time(nullptr));

    // Abre o arquivo para escrita
    std::ofstream file("input.txt");
    if (!file.is_open()) {
        std::cerr << "Erro ao abrir o arquivo" << std::endl;
        return;
    }

    // Gera números aleatórios e escreve no arquivo
    for (int i = 0; i < size; i++) {
        int random_number = std::rand() % 1001; // Número aleatório entre 0 e 1000
        file << random_number << std::endl;
    }

    // Fecha o arquivo (é feito automaticamente quando o objeto `file` sai do escopo)
}

int main() {
    int size;

    // Define o tamanho do vetor
    std::cout << "Digite o tamanho do vetor: ";
    std::cin >> size;

    // Gera os números aleatórios e escreve no arquivo
    generate_random_numbers(size);

    std::cout << "Números aleatórios gerados e salvos em 'numeros_aleatorios.txt'" << std::endl;

    return 0;
}
