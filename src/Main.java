import java.util.Scanner;
import java.io.FileWriter;
import java.io.IOException;

public class Main {
    public static void main(String[] args) {
        funcoes sorter = new funcoes();
        Scanner scanner = new Scanner(System.in);

        try {
            
            System.out.print("Deseja limpar o arquivo de saída antes de escrever? [S/N]: ");
            String resposta = scanner.next().trim().toUpperCase();
            if (resposta.equals("s")) {
                sorter.limparArq("output.txt");
            }

        System.out.print("Digite o tamanho do vetor: ");
        int tamanho = scanner.nextInt();

        System.out.print("Digite o valor máximo dos elementos: ");
        int valorMaximo = scanner.nextInt();

        int[] vetor = sorter.gerarVetorAleatorio(tamanho, valorMaximo);

        try (FileWriter writer = new FileWriter("output.txt")) {
            int[] vetorCopia = vetor.clone();
            sorter.selectionSort(vetorCopia, writer);
            vetorCopia = vetor.clone();
            sorter.insertionSort(vetorCopia, writer);
            vetorCopia = vetor.clone();
            sorter.gnomeSort(vetorCopia, writer);
         } 
        }catch (IOException e) {
            e.printStackTrace();
        } finally {
            scanner.close();
        }
    }
}
