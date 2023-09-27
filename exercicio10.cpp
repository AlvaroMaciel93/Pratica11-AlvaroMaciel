#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> encontrarPosicoes(const string& str, char letra, int& tamanho) {
    vector<int> posicoes;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == letra) {
            posicoes.push_back(i);
        }
    }

    tamanho = posicoes.size();
    return posicoes;
}

int main() {
    string minhaString = "Residencia em Software - TIC18";
    char minhaLetra = 'e';
    int tamanhoDoVetor;

    vector<int> posicoes = encontrarPosicoes(minhaString, minhaLetra, tamanhoDoVetor);

    cout << "Letra '" << minhaLetra << "' encontrada nas posições: ";
    for (int i = 0; i < tamanhoDoVetor; i++) {
        cout << posicoes[i] << " ";
    }
    cout << endl;
    cout << "Tamanho do vetor: " << tamanhoDoVetor << endl;

    return 0;
}
