#include <iostream>

using namespace std;

int main(){

    int vezes, num, dentro = 0, fora = 0;

    cout << "Quantas vezes voce deseja rodar o loop? ";
    cin >> vezes;

    for (int i = 0; i < vezes; i++)
    {
        if (num >= 10 && num <= 20)
        {
            dentro++;
        }
        else
        {
            fora++;
        }
        cout << "Digite um numero: ";
        cin >> num;
    }
    
    cout << dentro << " dentro" << endl;
    cout << fora << " fora" << endl;
    
    return 0;
}