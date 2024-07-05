from funcoes import selection_sort, insertion_sort, gnome_sort, lerArq, limparArq

limparArq()
tam = int(input("Digite o tamanho desejado da lista: "))

arr = lerArq("input.txt",tam)

with open("output.txt", "a") as f:
        f.write("\n[MÉTODO EM PYTHON]\n")

# Teste Selection Sort
print("Array antes do Selection Sort:", arr)
selection_sort(arr)
print("Array depois do Selection Sort:", arr)

arr = lerArq("input.txt",tam)
# Teste Insertion Sort
print("Array antes do Insertion Sort:", arr)
insertion_sort(arr)
print("Array depois do Insertion Sort:", arr)

arr = lerArq("input.txt",tam)
# Teste Gnome Sort
print("Array antes do Gnome Sort:", arr)
gnome_sort(arr)
print("Array depois do Gnome Sort:", arr)
