#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int N;
    double valores = 0, media;

    cout << "Quantos elementos vai ter o vetor? ";
    cin >> N;

    double vetor[N];

    for (int i = 0; i < N; i++)
    {
        cout << "Digite um numero: ";
        cin >> vetor[i];
    }

    cout << "MEDIA DO VETOR = ";
    for (int i = 0; i < N; i++)
    {
        valores += vetor[i];
    }
    media = valores/N;
    cout << media << endl;

    
    cout << "ELEMENTOS ABAIXO DA MEDIA:" << endl;
    for (int i = 0; i < N; i++)
    {
        if (vetor[i] < media)
        {
            cout << fixed << setprecision(1);
            cout << vetor[i] << endl;
        }
    }
}