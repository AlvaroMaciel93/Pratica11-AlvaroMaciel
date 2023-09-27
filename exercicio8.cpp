#include <iostream>

using namespace std;

bool ehPrimo(int n) {
    if (n <= 1) {
        cout << "0 e 1 não são primos" << endl;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; // Se for divisível por algum número entre 2 e a raiz quadrada, não é primo
        }
    }
    return true;
}

int conta_primos(int *vet, int qtd) {
    int cont = 0;
    for (int i = 0; i < qtd; i++) {
        if (ehPrimo(vet[i])) {
            cont++;
        }
    }
    return cont;
}

int main() {
    int vetor[] = {2, 3, 5, 7, 8, 11, 12, 13};
    int qtd = sizeof(vetor) / sizeof(vetor[0]);

    int qtdPrimos = conta_primos(vetor, qtd);

    cout << "Quantidade de números primos no vetor: " << qtdPrimos << endl;

    return 0;
}
