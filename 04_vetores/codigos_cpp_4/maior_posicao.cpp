#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int N;

    cout << "Quantos numeros vao ser digitados? ";
    cin >> N;

    float vetor[N];

    for (int i = 0; i < N; i++)
    {
        cout << "Digite um numero: ";
        cin >> vetor[i];
    }

    double maior = vetor[0];
    int pos = 0;
    cout << "MAIOR VALOR: ";
    for (int i = 1; i < N; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
            pos = i;
        }
    }
    cout << fixed << setprecision(1);
    cout << maior << endl;
    
    cout << "POSICAO DO MAIOR VALOR = " << pos;
}