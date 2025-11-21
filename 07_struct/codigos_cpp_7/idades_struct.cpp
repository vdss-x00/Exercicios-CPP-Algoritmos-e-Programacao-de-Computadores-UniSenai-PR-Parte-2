#include <iostream>

using namespace std;

struct Pessoa{
    string nome;
    int idade;
};

int main(){

    float media;

    Pessoa vetor[2];
    for (int i = 0; i < 2; i++)
    {
        cout << "Insira as informacoes do " << i + 1 << "o aluno:" << endl;
        cout << "Nome: ";
        getline (cin, vetor[i].nome);

        cout << "Idade: ";
        cin >> vetor[i].idade;
        
        cin.ignore();
    }

    media = (vetor[0].idade + vetor[1].idade)/2.0;
    
    cout << "A idade media de " << vetor[0].nome << " e " <<vetor[1].nome << " e de: " <<  media << " anos.";
}