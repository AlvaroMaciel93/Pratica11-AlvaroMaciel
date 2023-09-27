#include <iostream>

using namespace std;

int* intercala(int *vet1, int tam1, int *vet2, int tam2) {
    int *resultado = new int[tam1 + tam2]; // Aloca um novo vetor para armazenar o resultado
    int index1 = 0, index2 = 0, indexResultado = 0;

    // Intercala os elementos dos dois vetores
    while (index1 < tam1 && index2 < tam2) {
        resultado[indexResultado++] = vet1[index1++];
        resultado[indexResultado++] = vet2[index2++];
    }

    // Se um dos vetores tiver mais elementos que o outro, copia os elementos restantes
    while (index1 < tam1) {
        resultado[indexResultado++] = vet1[index1++];
    }

    while (index2 < tam2) {
        resultado[indexResultado++] = vet2[index2++];
    }

    return resultado;
}

int main() {
    int vetor1[] = {1, 5, 10, 15};
    int tam1 = 4;
    int vetor2[] = {2, 6, 11, 16, 21};
    int tam2 = 5;

    int *resultado = intercala(vetor1, tam1, vetor2, tam2);

    cout << "Vetor intercalado: ";
    for (int i = 0; i < (tam1 + tam2); i++) {
        cout << resultado[i] << " ";
    }
    cout << std::endl;

    delete[] resultado;
    return 0;
}
