#include <iostream>

using namespace std;

int main(){
    
    int cont, num;
    
    cout << "Quantas vezes voce deseja rodar o loop? ";
    cin >> cont;
    
    for (int i = 0; i < cont; i++)
    {
        cout << "Digite um numero: ";
        cin >> num;
        
        if (num == 0)
        {
            cout << "NULO" << endl;
        }
        else if (num % 2 == 0 && num > 0)
        {
            cout << "PAR POSITIVO" << endl;
        }
        else if (num % 2 == 0 && num < 0)
        {
            cout << "PAR NEGATIVO" << endl;
        }
        else if (num % 2 != 0 && num > 0)
        {
            cout << "IMPAR POSITIVO" << endl;
        }
        else if (num % 2 != 0 && num < 0)
        {
            cout << "IMPAR NEGATIVO" << endl;
        }
    }
    
    
    
    return 0;
}