#include <iostream>
#include <iomanip>

using namespace std;

double areaQuad (double A){
    return A * A;
}

double areaTri (double A, double B){
    return (A * B)/2;
}

double areaTrap (double A, double B, double C){
    return ((A + B) * C) / 2;
}

int main(){

    double A, B, C;

    cout << "Digite o valor de A: ";
    cin >> A;

    cout << "Digite o valor de B: ";
    cin >> B;

    cout << "Digite o valor de C: ";
    cin >> C;
    
    cout << fixed << setprecision(4);
    cout << "AREA DO QUADRADO = " << areaQuad(A) << endl;
    cout << "AREA DO TRIANGULO = " << areaTri(A,B) << endl;
    cout << "AREA DO TRAPEZIO = " << areaTrap (A, B, C) << endl;
}