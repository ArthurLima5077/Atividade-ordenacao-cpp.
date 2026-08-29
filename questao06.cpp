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

    // Insertion Sort
    for (int i = 1; i < n; i++) {
        int chave = lista[i]; // A "carta" que queremos posicionar
        int j = i - 1;

        // Move os elementos maiores que a chave uma posição para frente
        while (j >= 0 && lista[j] > chave) {
            lista[j + 1] = lista[j];
            j = j - 1;
        }
        
        // Coloca a chave no espaço que foi aberto
        lista[j + 1] = chave;
    }

    cout << "Lista depois da ordenacao: ";
    for (int i = 0; i < n; i++) {
        cout << lista[i] << " ";
    }
    cout << endl;

    return 0;
}