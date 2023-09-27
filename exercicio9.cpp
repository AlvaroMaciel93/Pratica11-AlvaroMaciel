#include <iostream>

using namespace std;

float calc_serie(int N) {
    float S = 0.0;

    for (int i = 1; i <= N; i++) {
        S = S + static_cast<float>(i) / (N - i + 1);
    }

    return S;
}

int main() {
    int N;

    cout << "Digite o valor de N: ";
    cin >> N;

    if (N <= 0) {
        cout << "O número deve ser positivo." << endl;
    } else {
        float resultado = calc_serie(N);
        cout << "O valor da série S é: " << resultado << endl;
    }

    return 0;
}
