#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string caracteresComuns(const string& A, const string& B) {
    string C;
    
    for (char c : A) {
        if (B.find(c) != string::npos && C.find(c) == string::npos) {
            C += c;
        }
    }
    
    return C;
}

int main() {
    string A = "Residencia em Software";
    string B = "Tecnologia da Informação e Comunicação";
    
    string C = caracteresComuns(A, B);
    
    cout << "Caracteres comuns em A e B: " << C << endl;
    
    return 0;
}
