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

    // Selection Sort (Decrescente)
    for (int i = 0; i < n - 1; i++) {
        int maior = i; // Mudamos o nome da variável para fazer sentido
        
        for (int j = i + 1; j < n; j++) {
            // A mágica acontece aqui: mudamos de < para >
            if (lista[j] > lista[maior]) { 
                maior = j;
            }
        }
        
        int temp = lista[i];
        lista[i] = lista[maior];
        lista[maior] = temp;
    }

    cout << "Lista ordenada decrescente: ";
    for (int i = 0; i < n; i++) {
        cout << lista[i] << " ";
    }
    cout << endl;

    return 0;
}