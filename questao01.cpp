#include <iostream>

using namespace std;

int main() {
    int lista[] = {64, 25, 12, 22, 11, 90, 45, 34, 7, 88};
    int n = 10;

    cout << "Lista antes da ordenacao: ";
    for (int i = 0; i < n; i++) {
        cout << lista[i] << " ";
    }
    cout << endl; 

    // Selection Sort
    for (int i = 0; i < n - 1; i++) {
        int menor = i;
        
        for (int j = i + 1; j < n; j++) {
            if (lista[j] < lista[menor]) {
                menor = j;
            }
        }
        
        // Troca os valores usando a variável temp
        int temp = lista[i];
        lista[i] = lista[menor];
        lista[menor] = temp;
    }

    cout << "Lista depois da ordenacao: ";
    for (int i = 0; i < n; i++) {
        cout << lista[i] << " ";
    }
    cout << endl;

    return 0;
}