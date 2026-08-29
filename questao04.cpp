#include <iostream>

using namespace std;

int main() {
    int lista[] = {64, 25, 12, 22, 11};
    int n = 5;
    int total_trocas = 0;

    cout << "Iniciando ordenacao...\n" << endl;

    // Selection Sort
    for (int i = 0; i < n - 1; i++) {
        int menor = i;
        for (int j = i + 1; j < n; j++) {
            if (lista[j] < lista[menor]) {
                menor = j;
            }
        }

        if (menor != i) {
            int temp = lista[i];
            lista[i] = lista[menor];
            lista[menor] = temp;
            
            total_trocas++; // Contabiliza a troca

            // Mostrando o estado da lista após a troca
            cout << "Apos a troca " << total_trocas << ": ";
            for (int k = 0; k < n; k++) {
                cout << lista[k] << " ";
            }
            cout << endl;
        }
    }

    cout << "\nQuantidade total de trocas executadas: " << total_trocas << endl;

    return 0;
}