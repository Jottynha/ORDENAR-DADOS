import java.io.BufferedReader;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
public class funcoes {
    public void limparArq(String filename) throws IOException {
        FileWriter writer = new FileWriter(filename, false);
        writer.write("");
        writer.close();
    }

    public int[] lerArq(String nomeArquivo, int tamanhoVetor) {
        int[] numeros = new int[tamanhoVetor];
        int count = 0;

        try (BufferedReader reader = new BufferedReader(new FileReader(nomeArquivo))) {
            String linha;
            while ((linha = reader.readLine()) != null && count < tamanhoVetor) {
                try {
                    int numero = Integer.parseInt(linha.trim());
                    numeros[count] = numero;
                    count++;
                } catch (NumberFormatException e) {
                    System.err.println("Número inválido encontrado no arquivo: " + linha);
                }
            }
        } catch (IOException e) {
            System.err.println("Erro ao abrir o arquivo: " + e.getMessage());
        }

        // Caso não tenha preenchido todo o array, redimensiona para o tamanho real
        if (count < tamanhoVetor) {
            int[] numerosReduzidos = new int[count];
            System.arraycopy(numeros, 0, numerosReduzidos, 0, count);
            return numerosReduzidos;
        }

        return numeros;
    }

    public double selectionSort(int[] vetor, FileWriter writer) throws IOException {
        long tempIni = System.nanoTime();
        int n = vetor.length;
        for (int i = 0; i < n - 1; i++) {
            int minimo = i;
            for (int j = i + 1; j < n; j++) {
                if (vetor[j] < vetor[minimo]) {
                    minimo = j;
                }
            }
            int temp = vetor[minimo];
            vetor[minimo] = vetor[i];
            vetor[i] = temp;
        }
        long tempFim = System.nanoTime();
        double tempoTotal = (tempFim - tempIni) / 1e9;
        writer.write("Tempo de execução do Selection Sort: " + tempoTotal + " segundos\n");
        return tempoTotal;
    }
    public double insertionSort(int[] vetor, FileWriter writer) throws IOException  {
        long tempIni = System.nanoTime();
        int n = vetor.length;
        for (int i = 1; i < n; ++i) {
            int chave = vetor[i];
            int j = i - 1;

            while (j >= 0 && vetor[j] > chave) {
                vetor[j + 1] = vetor[j];
                j = j - 1;
            }
            vetor[j + 1] = chave;
        }
        long tempFim = System.nanoTime();
        double tempoTotal = (tempFim - tempIni) / 1e9;
        writer.write("Tempo de execução do Insertion Sort: " + tempoTotal + " segundos\n");
        return tempoTotal;
    }
    public double gnomeSort(int[] vetor, FileWriter writer) throws IOException   {
        long tempIni = System.nanoTime();
        int n = vetor.length;
        int index = 0;
        while (index < n) {
            if (index == 0) {
                index++;
            }
            if (vetor[index] >= vetor[index - 1]) {
                index++;
            } else {
                int temp = vetor[index];
                vetor[index] = vetor[index - 1];
                vetor[index - 1] = temp;
                index--;
            }
        }
        long tempFim = System.nanoTime();
        double tempoTotal = (tempFim - tempIni) / 1e9;
        writer.write("Tempo de execução do Gnome Sort: " + tempoTotal + " segundos\n");
        return tempoTotal;
    }
}
