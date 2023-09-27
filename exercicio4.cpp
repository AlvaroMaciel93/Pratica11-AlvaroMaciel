#include <iostream>

using namespace std;

void calcula(int &X, int &Y) {
    int soma = X + Y;
    int subtracao = X - Y;
    
    X = soma;
    Y = subtracao;
}

int main() {
    int X = 10;
    int Y = 5;
    
    calcula(X, Y);
    
    cout << "X: " << X << endl;
    cout << "Y: " << Y << endl;
    
    return 0;
}
