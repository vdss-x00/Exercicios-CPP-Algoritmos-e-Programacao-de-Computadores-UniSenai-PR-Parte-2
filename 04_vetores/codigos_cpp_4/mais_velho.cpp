#include <iostream>

using namespace std;

struct Pessoa{
    string nome;
    int idade;
};

int main(){

    int N;

    cout << "Quantas pessoas serão digitadas? ";
    cin >> N;

    Pessoa vetor[N];

    for (int i = 0; i < N; i++)
    {
        cout << "Dados da " << i + 1 << "a pessoa: " << endl;
        cout << "Nome: ";
        cin >> vetor[i].nome;

        cout << "Idade: ";
        cin >> vetor[i].idade;
    }

    string maior_nome = vetor[0].nome;
    int maior_idade = vetor[0].idade;
    cout << "PESSOA MAIS VELHA: ";
    for (int i = 0; i < N; i++)
    {
        if (vetor[i].idade > maior_idade)
        {
            maior_idade = vetor[i].idade;
            maior_nome = vetor[i].nome;
        }
    }
    cout << maior_nome;
}