import java.util.Arrays;
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

        int[] vetor = sorter.lerArq("input.txt",tamanho);

        System.out.println("\nVetor Desordenado:");
        System.out.println(Arrays.toString(vetor));

        try (FileWriter writer = new FileWriter("output.txt",true)) {
            writer.write("\n[ TEMPO DE EXECUÇÃO EM JAVA ]\n");
            int[] vetorCopia = vetor.clone();
            sorter.selectionSort(vetorCopia, writer);
            System.out.println("\nVetor Ordenado com Selection Sort:");
            System.out.println(Arrays.toString(vetorCopia));
            vetorCopia = vetor.clone();
            sorter.insertionSort(vetorCopia, writer);
            System.out.println("\nVetor Ordenado com Insertion Sort:");
            System.out.println(Arrays.toString(vetorCopia));
            vetorCopia = vetor.clone();
            sorter.gnomeSort(vetorCopia, writer);
            System.out.println("\nVetor Ordenado com Gnome Sort:");
            System.out.println(Arrays.toString(vetorCopia));
         } 
        }catch (IOException e) {
            e.printStackTrace();
        } finally {
            scanner.close();
        }
    }
}
