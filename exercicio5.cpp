#include <iostream>

using namespace std;

int insere_meio(int vetor[], int &qtd, int elemento) {
    if (qtd >= 100) {
        cout << "Erro: O vetor está cheio." << endl;
        return qtd;
    }

    // Calcula a posição do meio
    int meio = qtd / 2;

    // Desloca os elementos à direita do meio e insere o elemento no meio
    for (int i = qtd; i > meio; i--) {
        vetor[i] = vetor[i - 1];
    }
    vetor[meio] = elemento;
    qtd++;
    return qtd;
}

int main() {
    int vetor[100];
    int qtd = 6;

    // Preenchendo o vetor
    for (int i = 0; i < qtd; i++) {
        vetor[i] = i + 1;
    }

    int elemento = 100;

    int novaQtde = insere_meio(vetor, qtd, elemento);

    cout << "Novo vetor: ";
    for (int i = 0; i < novaQtde; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
