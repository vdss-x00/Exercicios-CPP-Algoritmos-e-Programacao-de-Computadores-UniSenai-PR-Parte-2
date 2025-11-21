#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N, qtd_pares = 0;
    double valores = 0, media;

    cout << "Quantos elementos vai ter o vetor? ";
    cin >> N;

    int vetor[N];

    for (int i = 0; i < N; i++)
    {
        cout << "Digite um numero: ";
        cin >> vetor[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            valores += vetor[i];
            qtd_pares++;
        }
    }
    if (qtd_pares == 0)
    {
        cout << "NENHUM NUMERO PAR";
        return 0;
    }

    media = valores/qtd_pares;
    cout << fixed << setprecision(1);
    cout << "MEDIA DOS PARES = ";
    cout << media << endl;

}