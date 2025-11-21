#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N;
    double soma = 0, valores = 0, media;

    cout << "Quantos numeros vao ser digitados? ";
    cin >> N;

    float vetor[N];

    for (int i = 0; i < N; i++)
    {
        cout << "Digite um numero: ";
        cin >> vetor[i];
    }

    cout << "VALORES = ";
    for (int i = 0; i < N; i++)
    {
        cout << fixed << setprecision(1);
        cout << vetor[i] << " ";
    }
    cout << endl;

    cout << "SOMA = ";
    for (int i = 0; i < N;i++)
    {
        soma += vetor[i];
    }
    cout << fixed << setprecision(2);
    cout << soma << endl;

    cout << "MEDIA = ";
    for (int i = 0; i < N; i++)
    {
        valores += vetor[i];
    }
    media = valores / N;
    cout << fixed << setprecision(2);
    cout << media << endl;
}