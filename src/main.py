from funcoes import selection_sort, insertion_sort, gnome_sort, gerarArray, limparArq

limparArq()
arr = gerarArray()

with open("output.txt", "a") as f:
        f.write("\n[MÉTODO EM PYTHON]\n")

# Teste Selection Sort
print("Array antes do Selection Sort:", arr)
#selection_sort(arr)
print("Array depois do Selection Sort:", arr)

# Teste Insertion Sort
print("Array antes do Insertion Sort:", arr)
#insertion_sort(arr)
print("Array depois do Insertion Sort:", arr)

# Teste Gnome Sort
print("Array antes do Gnome Sort:", arr)
gnome_sort(arr)
print("Array depois do Gnome Sort:", arr)
