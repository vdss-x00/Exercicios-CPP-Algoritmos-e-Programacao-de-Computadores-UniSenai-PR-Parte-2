#include <iostream>

using namespace std;

int main() {
    
    int X, Y;
    
    
    cout << "Digite dois numeros: ";
    cin >> X >> Y;

    int menor = (X < Y) ? X : Y;
    int maior = (X > Y) ? X : Y;

    int soma = 0;
    for (int i = menor + 1; i < maior; i++) {
        if (i % 2 != 0) { 
            soma += i;
        }
    }

    cout << "SOMA DOS IMPARES = " << soma << endl;

    return 0;
}
