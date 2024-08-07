import time
def selection_sort(arr):
    start_time = time.time()
    n = len(arr)
    for i in range(n-1):
        min_index = i
        for j in range(i+1, n):
            if arr[j] < arr[min_index]:
                min_index = j
        if min_index != i:
            arr[i], arr[min_index] = arr[min_index], arr[i]
    end_time = time.time()
    elapsed_time = end_time - start_time
    with open("output.txt", "a") as f:
        f.write("[ Tempo de execução do Selection Sort ] : [ {:.6f} segundos ]\n".format(elapsed_time))

def insertion_sort(arr):
    start_time = time.time()
    n = len(arr)
    for i in range(1, n):
        key = arr[i]
        j = i - 1
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key
    end_time = time.time()
    elapsed_time = end_time - start_time

    with open("output.txt", "a") as f:
        f.write("[ Tempo de execução do Insertion Sort ] : [ {:.6f} segundos ]\n".format(elapsed_time))

def gnome_sort(arr):
    start_time = time.time()
    n = len(arr)
    index = 0
    while index < n:
        if index == 0:
            index += 1
        if arr[index] >= arr[index - 1]:
            index += 1
        else:
            arr[index], arr[index - 1] = arr[index - 1], arr[index]
            index -= 1
    end_time = time.time()
    elapsed_time = end_time - start_time

    with open("output.txt", "a") as f:
        f.write("[ Tempo de execução do Gnome Sort ] : [ {:.6f} segundos ]\n".format(elapsed_time))

def lerArq(nome_arquivo, tamanho_vetor):
    try:
        with open(nome_arquivo, 'r') as arquivo:
            numeros = []
            for linha in arquivo:
                if len(numeros) < tamanho_vetor:
                    numero = int(linha.strip())
                    numeros.append(numero)
                else:
                    break
        return numeros
    except FileNotFoundError:
        print("Erro ao abrir o arquivo.")
        return []

def limparArq():
    while True:
        choice = input("Deseja LIMPAR o Arquivo? [S/N]: ").upper()
        if choice == 'S':
            with open("output.txt", "w") as f:
                f.write("")  # Limpa o conteúdo do arquivo
            print("Conteúdo do arquivo limpo.")
            break
        elif choice == 'N':
            print("Nenhuma ação realizada.")
            break
        else:
            print("Opção inválida. Por favor, digite 's' para sim ou 'n' para não.")