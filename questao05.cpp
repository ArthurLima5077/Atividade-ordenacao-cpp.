#include <iostream>
#include <string> // Necessário para usar textos (string)

using namespace std;

// Criando a struct Produto
struct Produto {
    string nome;
    float preco;
};

int main() {
    // Cadastrando 6 produtos diretamente no código
    Produto lista[6] = {
        {"Teclado", 150.50},
        {"Mouse", 80.00},
        {"Monitor", 950.99},
        {"Mousepad", 30.00},
        {"Headset", 220.00},
        {"Webcam", 180.00}
    };
    int n = 6;

    // Selection Sort baseado no preço do produto
    for (int i = 0; i < n - 1; i++) {
        int menor = i;
        for (int j = i + 1; j < n; j++) {
            // Comparamos o preço de um produto com o preço do menor encontrado
            if (lista[j].preco < lista[menor].preco) {
                menor = j;
            }
        }
        
        // Troca os produtos inteiros de posição, não apenas os preços
        Produto temp = lista[i];
        lista[i] = lista[menor];
        lista[menor] = temp;
    }

    // Exibindo a lista de produtos ordenada
    cout << "--- PRODUTOS ORDENADOS POR PRECO ---" << endl;
    for (int i = 0; i < n; i++) {
        cout << lista[i].nome << " - R$ " << lista[i].preco << endl;
    }

    return 0;
}