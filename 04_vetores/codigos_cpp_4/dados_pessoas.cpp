#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

struct Pessoa{
    double altura;
    char genero;
};

int main(){

    int N, cont_F = 0, cont_M = 0;
    double vlr_F = 0, media;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> N;

    Pessoa vetor[N];
    for (int i = 0; i < N; i++)
    {
        cout << "Altura da " << i + 1 << "a  pessoa: ";
        cin >> vetor[i].altura;

        cout << "Genero da " << i + 1 << "a pessoa: ";
        cin >> vetor[i].genero;
        vetor[i].genero = toupper(vetor[i].genero);

        if (vetor[i].genero == 'F')
        {
            cont_F++;
        }
        else if (vetor[i].genero == 'M')
        {
            cont_M++;
        }
    }
    
    cout << endl;
    
    double menor = vetor[0].altura;
    cout << "Menor altura: ";
    for (int i = 0; i < N; i++)
    {
        if (vetor[i].altura <= menor)
        {
            menor = vetor[i].altura;
        }
    }
    cout << menor << endl;

    double maior = vetor[0].altura;
    cout << "Maior altura: ";
    for (int i = 1; i < N; i++)
    {
        if (vetor[i].altura > maior)
        {
            maior = vetor[i].altura;
        }
    }
    cout << maior << endl;

    cout << "Media da altura das mulheres: ";
    for (int i = 0; i < N; i++)
    {
        if (vetor[i].genero == 'F')
        {
            vlr_F += vetor[i].altura;
        }
    }
    if (cont_F > 0)
    {
        media = vlr_F / cont_F;
    }
    
    cout << fixed << setprecision(2);
    cout << media << endl;

    cout << "Numero de homens: " << cont_M;
}