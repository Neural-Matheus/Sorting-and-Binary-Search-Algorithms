def binary_search(arr, target):
    left, right = 0, len(arr) - 1
    
    while left <= right:
        mid = (left + right) // 2
        mid_value = arr[mid]

        if mid_value == target:
            return mid  # Elemento encontrado, retorna o índice.
        elif mid_value < target:
            left = mid + 1
        else:
            right = mid - 1

    return -1  # Elemento não encontrado.

# Exemplo de uso:
lista_ordenada = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
elemento_procurado = 5

resultado = binary_search(lista_ordenada, elemento_procurado)
if resultado != -1:
    print(f"Elemento {elemento_procurado} encontrado no índice {resultado}.")
else:
    print(f"Elemento {elemento_procurado} não encontrado na lista.")
