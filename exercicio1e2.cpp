#include <iostream>

using namespace std;

void maxmin(int vetor[], int n, int &maximo, int &minimo) {
    if (n <= 0) {
        cerr << "O vetor está vazio." << endl;
        return;
    }

    maximo = minimo = vetor[0];

    for (int i = 1; i < n; i++) {
        if (vetor[i] > maximo) {
            maximo = vetor[i];
        } else if (vetor[i] < minimo) {
            minimo = vetor[i];
        }
    }
}

int main() {
    int n;
    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    if (n <= 0) {
        cerr << "O tamanho do vetor deve ser maior que zero." << endl;
        return 1;
    }

    int vetor[n];

    cout << "Digite os elementos do vetor:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> vetor[i];
    }

    int maximo, minimo;

    maxmin(vetor, n, maximo, minimo);

    cout << "Máximo: " << maximo << endl;
    cout << "Mínimo: " << minimo << endl;

    return 0;
}

//Resposta da questão 2:

/*A função maxmin executa uma única tarefa bem definida, que é encontrar o máximo e o mínimo em um vetor,
por isso a coesão é alta. O acoplamento é baixo, pois a função não depende de outras funções para realizar
sua tarefa. Recebe os valores necessários como argumentos e retorna os resultados através de referências.*/