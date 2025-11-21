#include <iostream>

using namespace std;

int main() {
    
    int N;
    
    cout << "Quantas vezes voce deseja repetir o loop? ";
    cin >> N;
    
    if (N <= 0 || N > 10)
    {
        cout << "Erro! Insira um valor valido (de 1 a 10): ";
        return 0;
    }
    
    int vetor[N];
    
    for (int i = 0; i < N; i++)
    {
        cout << "Digite um numero: ";
        cin >> vetor[i];
    }
    
    cout << "NUMEROS NEGATIVOS:" << endl;
    
    for (int i = 0; i < N;i++)
    {
        if (vetor[i] < 0)
        {
          cout << vetor[i] << endl;
        }
    }

    return 0;
}