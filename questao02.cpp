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

    // Selection Sort
    for (int i = 0; i < n - 1; i++) {
        int menor = i;
        for (int j = i + 1; j < n; j++) {
            if (lista[j] < lista[menor]) {
                menor = j;
            }
        }
        
        int temp = lista[i];
        lista[i] = lista[menor];
        lista[menor] = temp;
    }

    cout << "Lista ordenada: ";
    for (int i = 0; i < n; i++) {
        cout << lista[i] << " ";
    }
    cout << endl;

    return 0;
}