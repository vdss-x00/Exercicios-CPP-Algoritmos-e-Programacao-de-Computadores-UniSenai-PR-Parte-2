#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Aluno{
    string nome;
    double n1, n2;
};

int main(){

    int N;

    cout << "Numero de alunos a serem digitados: ";
    cin >> N;

    Aluno alunos[N];

    for (int i = 0; i < N; i++)
    {
        cin.ignore();
        cout << "Nome: ";
        getline (cin, alunos[i].nome);
        
        cout << "Nota 1: ";
        cin >> alunos[i].n1;
        
        cout << "Nota 2: ";
        cin >> alunos[i].n2;
    }
    
    cout << "\nAlunos aprovados:\n";
    
    for (int i = 0; i < N; i++)
    {
        double media = (alunos[i].n1 + alunos[i].n2)/2.00;
        
        if (media >= 6.00)
        {
            cout << alunos[i].nome << "(" << media << ")\n";
        }
    }
}