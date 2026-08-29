#include <iostream>

using namespace std;

int main() {
    int n;
    
    cout << "Digite a quantidade de elementos: ";
    cin >> n;

    int lista[100];

    cout << "Digite os " << n << " valores da lista:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> lista[i];
    }

    cout << "\nLista original: ";
    for (int i = 0; i < n; i++) {
        cout << lista[i] << " ";
    }
    cout << endl;

    // Insertion Sort (Decrescente)
    for (int i = 1; i < n; i++) {
        int chave = lista[i];
        int j = i - 1;

        // A mágica acontece aqui: mudamos de > para <
        while (j >= 0 && lista[j] < chave) {
            lista[j + 1] = lista[j];
            j = j - 1;
        }
        lista[j + 1] = chave;
    }

    cout << "Lista ordenada decrescente: ";
    for (int i = 0; i < n; i++) {
        cout << lista[i] << " ";
    }
    cout << endl;

    return 0;
}