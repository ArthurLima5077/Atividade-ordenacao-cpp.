#include <iostream>

using namespace std;

// Função do Selection Sort
void selectionSort(int lista[], int n) {
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
}

// Função do Insertion Sort
void insertionSort(int lista[], int n) {
    for (int i = 1; i < n; i++) {
        int chave = lista[i];
        int j = i - 1;

        while (j >= 0 && lista[j] > chave) {
            lista[j + 1] = lista[j];
            j = j - 1;
        }
        lista[j + 1] = chave;
    }
}

int main() {
    int lista[100];
    int n = 0; // Quantidade de elementos na lista começa em zero
    int opcao = -1;

    while (opcao != 0) {
        cout << "\n=== MENU ===" << endl;
        cout << "1 - Inserir elemento" << endl;
        cout << "2 - Listar elementos" << endl;
        cout << "3 - Ordenar (Selection Sort)" << endl;
        cout << "4 - Ordenar (Insertion Sort)" << endl;
        cout << "5 - Limpar lista" << endl;
        cout << "0 - Sair" << endl;
        cout << "Escolha: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                if (n < 100) {
                    cout << "Digite o valor: ";
                    cin >> lista[n];
                    n++; // Aumenta a quantidade de itens na lista
                    cout << "Elemento inserido!" << endl;
                } else {
                    cout << "A lista esta cheia!" << endl;
                }
                break;

            case 2:
                if (n == 0) {
                    cout << "A lista esta vazia!" << endl;
                } else {
                    cout << "Lista atual: ";
                    for (int i = 0; i < n; i++) {
                        cout << lista[i] << " ";
                    }
                    cout << endl;
                }
                break;

            case 3:
                if (n == 0) {
                    cout << "Erro: A lista esta vazia, nao ha o que ordenar." << endl;
                } else {
                    selectionSort(lista, n);
                    cout << "Lista ordenada usando Selection Sort!" << endl;
                    
                    cout << "Resultado: ";
                    for (int i = 0; i < n; i++) {
                        cout << lista[i] << " ";
                    }
                    cout << endl;
                }
                break;

            case 4:
                if (n == 0) {
                    cout << "Erro: A lista esta vazia, nao ha o que ordenar." << endl;
                } else {
                    insertionSort(lista, n);
                    cout << "Lista ordenada usando Insertion Sort!" << endl;
                    
                    cout << "Resultado: ";
                    for (int i = 0; i < n; i++) {
                        cout << lista[i] << " ";
                    }
                    cout << endl;
                }
                break;

            case 5:
                n = 0; // Isso "apaga" os elementos para o programa
                cout << "A lista foi limpa!" << endl;
                break;

            case 0:
                cout << "Saindo do programa..." << endl;
                break;

            default:
                cout << "Opcao invalida. Tente novamente." << endl;
        }
    }

    return 0;
}