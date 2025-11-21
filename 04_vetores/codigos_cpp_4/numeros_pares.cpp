#include <iostream>

using namespace std;

int main(){

    int N, qtd_pares = 0;

    cout << "Quantos numeros serao digitados? ";
    cin >> N;

    int vetor[N];

    for (int i = 0; i < N; i++)
    {
        cout << "Digite um numero: ";
        cin >> vetor[i];
    }

    cout << "NUMEROS PARES: " << endl;
    for (int i = 0; i < N; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            cout << vetor[i] << " ";
            qtd_pares++;
        }
    }
    cout << endl;
    cout <<"QUANTIDADE DE PARES = " <<  qtd_pares;
}