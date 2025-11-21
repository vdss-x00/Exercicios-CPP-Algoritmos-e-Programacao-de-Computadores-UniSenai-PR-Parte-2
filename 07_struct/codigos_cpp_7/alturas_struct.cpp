#include <iostream>
#include <iomanip>

using namespace std;

struct Pessoa{
    string nome;
    int idade;
    double altura;
};

int main(){

    int N, cont_idade = 0;
    double vlr_altura = 0, prc_idade, media;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> N;

    Pessoa vetor[N];

    for (int i = 0; i < N; i++)
    {
        cout << "Dados da " << i + 1 << "a pessoa: " << endl;;
        cout << "Nome: ";
        cin >> vetor[i].nome;

        cout << "Idade: ";
        cin >> vetor[i].idade;
        if(vetor[i].idade < 16)
        {
            cont_idade++;
        }

        cout << "Altura: ";
        cin >> vetor[i].altura;
    }

    cout << "Altura media: ";
    for (int i = 0; i < N; i++)
    {
        vlr_altura += vetor[i].altura;
    }
    media = vlr_altura / N;
    
    cout << fixed << setprecision(2);
    cout << media << endl;

    cout << fixed << setprecision(1);
    prc_idade = (cont_idade * 100) / N;
    cout << "Pessoas com menos de 16 anos: " << prc_idade << "%" << endl;
    for (int i = 0; i < N; i++)
    {
        if (vetor[i].idade < 16)
        {
            cout << vetor[i].nome << endl;
        }
    }
    
    

}