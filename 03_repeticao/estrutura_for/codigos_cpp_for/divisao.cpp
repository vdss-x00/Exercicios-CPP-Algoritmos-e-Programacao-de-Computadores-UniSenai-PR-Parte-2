#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int cont;
    float n1, n2, divisao;
    
    cout << "Quantas vezes deseja repetir o loop? ";
    cin >> cont;
    
    for (int i = 0; i < cont; i++)
    {
        cout << "Entre com o numerador: ";
        cin >> n1;
        
        cout << "Entre com o denominador: ";
        cin >> n2;
        
        divisao = n1 / n2;
        
        if (n2 == 0)
        {
            cout << "DIVISAO IMPOSSIVEL" << endl;
        }
        else 
        {
            cout << fixed << setprecision(2);
            cout << "DIVISAO = " << divisao << endl;
        }
    }
    
 
    
    return 0;
}