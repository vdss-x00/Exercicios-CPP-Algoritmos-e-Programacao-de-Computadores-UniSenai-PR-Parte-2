#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double area(double base, double altura){
    return base * altura;
}

double perimetro(double base, double altura){
    return 2.00 * (base + altura);
}

double diagonal(double base, double altura){
    return sqrt (pow(base,2) + pow (altura,2));
}

int main() {
    
    double b, h;
    
    cout << "Base do retângulo: ";
    cin >> b;
    
    cout << "Altura do retângulo: ";
    cin >> h;
    
    cout << fixed << setprecision(4);
    cout << "AREA = " << area(b,h) << endl;
    cout << "PERIMETRO = " << perimetro(b,h) << endl;
    cout << "DIAGONAL = " << diagonal(b,h) << endl;
    

    return 0;
}