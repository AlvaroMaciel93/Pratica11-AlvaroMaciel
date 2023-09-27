#include <iostream>

using namespace std;

void ordenar(float &a, float &b, float &c, float &d) {
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (c > d) swap(c, d);
    if (a > b) swap(a, b);
}

int main() {
    float num1, num2, num3, num4;

    cout << "Digite um número real: ";
    cin >> num1;
    cout << "Digite um número real: ";
    cin >> num2;
    cout << "Digite um número real: ";
    cin >> num3;
    cout << "Digite um número real: ";
    cin >> num4;

    ordenar(num1, num2, num3, num4);

    cout << "Números em ordem crescente: " << num1 << " " << num2 << " " << num3 << " " << num4 << endl;

    return 0;
}
