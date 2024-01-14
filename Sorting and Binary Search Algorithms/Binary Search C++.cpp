#include <iostream>
#include <vector>

int binary_search(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        int mid_value = arr[mid];

        if (mid_value == target) {
            return mid;  // Elemento encontrado, retorna o índice.
        } else if (mid_value < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;  // Elemento não encontrado.
}

int main() {
    std::vector<int> lista_ordenada = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int elemento_procurado = 5;

    int resultado = binary_search(lista_ordenada, elemento_procurado);
    if (resultado != -1) {
        std::cout << "Elemento " << elemento_procurado << " encontrado no índice " << resultado << "." << std::endl;
    } else {
        std::cout << "Elemento " << elemento_procurado << " não encontrado na lista." << std::endl;
    }

    return 0;
}
