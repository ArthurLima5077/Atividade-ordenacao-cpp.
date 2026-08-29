#include <iostream>
#include <string>

using namespace std;

struct Aluno {
    string nome;
    float nota;
};

int main() {
    Aluno lista[8] = {
        {"Ana", 8.5}, {"Bruno", 6.0}, {"Carlos", 9.2}, {"Diana", 7.5},
        {"Eduardo", 5.5}, {"Fernanda", 9.8}, {"Gabriel", 7.0}, {"Helena", 8.0}
    };
    int n = 8;

    // Insertion Sort comparando a nota (decrescente)
    for (int i = 1; i < n; i++) {
        Aluno chave = lista[i]; // Guarda o Aluno inteiro
        int j = i - 1;

        while (j >= 0 && lista[j].nota < chave.nota) {
            lista[j + 1] = lista[j];
            j = j - 1;
        }
        lista[j + 1] = chave;
    }

    cout << "--- RANKING DE ALUNOS ---" << endl;
    for (int i = 0; i < n; i++) {
        // i + 1 serve para mostrar 1º, 2º, 3º... 
        cout << i + 1 << "o - " << lista[i].nome << " (Nota: " << lista[i].nota << ")" << endl;
    }

    return 0;
}