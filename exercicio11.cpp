#include <iostream>
#include <string>

using namespace std;

// Função para codificar
string codificarString(const string& input) {
    string resultado = input;
    for (char& letra : resultado) {
        if (isalpha(letra)) { // Verifica se a letra é uma letra do alfabeto
            if (letra == 'z' || letra == 'Z') {
                letra = (letra == 'z') ? 'a' : 'A'; 
            } else {
                letra++;
            }
        }
    }
    return resultado;
}

// Função para decodificar
string decodificarString(const string& input) {
    string resultado = input;
    for (char& letra : resultado) {
        if (isalpha(letra)) {
            if (letra == 'a' || letra == 'A') {
                letra = (letra == 'a') ? 'z' : 'Z';
            } else {
                letra--;
            }
        }
    }
    return resultado;
}

int main() {
    string txtOriginal = "Residencia em Software - TIC18";
    
    // Codificar o texto
    string txtCodificado = codificarString(txtOriginal);
    cout << "Texto Codificado: " << txtCodificado << endl;
    
    // Decodificar o texto
    string txtDecodificado = decodificarString(txtCodificado);
    cout << "Texto Decodificado: " << txtDecodificado << endl;

    return 0;
}
