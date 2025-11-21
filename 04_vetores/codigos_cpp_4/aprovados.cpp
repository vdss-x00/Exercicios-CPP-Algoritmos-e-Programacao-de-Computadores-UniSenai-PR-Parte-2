#include <iostream>
#include <string>

using namespace std;

struct Aluno{
    string nome;
    double nota1, nota2;
};

int main(){

    int N;
    double media;

    cout << "Quantos alunos serao digitados? ";
    cin >> N;
    cin.ignore();

    Aluno vetor[N];

    for (int i = 0; i < N; i++)
    {
        cout << "Digite nome, primeira e segunda nota do " << i + 1 << "o aluno:" << endl;
        getline (cin, vetor[i].nome);
        cin >> vetor[i].nota1;
        cin >> vetor[i].nota2;
        cin.ignore();
    }

    cout << "ALUNOS APROVADOS:" << endl;
    for (int i = 0; i < N; i++)
    {
        media = (vetor[i].nota1 + vetor[i].nota2) / 2;

        if (media >= 6.00)
        {
            cout << vetor[i].nome << endl;
        }
    }

}