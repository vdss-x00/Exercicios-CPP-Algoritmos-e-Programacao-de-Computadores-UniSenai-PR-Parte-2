#include <iostream>
#include <fstream>

using namespace std;

struct Pessoa{
    string nome;
    int idade;
};

int main(){

    int N;
    ofstream output("./08_manip_arq/arquivos_txt/pessoas.txt");

    if (!output)
    {
        cerr << "Erro ao criar 'pessoas.txt'. Por favor, tente novamente.";
        return 1;
    }

    cout << "Quantas pessoas serao digitadas? ";
    cin >> N;

    Pessoa vetor[N];
    for (int i = 0; i < N; i++)
    {
        cout << "Insira o nome e a idade da " << i + 1 << "a pessoa:" << endl;
        cin >> vetor[i].nome;
        cin >> vetor[i].idade;
    }

    for (int i = 0; i < N; i++)
    {
        output << vetor[i].nome << " " << vetor[i].idade << endl;
    }

    output.close();

    ifstream input("./08_manip_arq/arquivos_txt/pessoas.txt");

    string nome;
    int idade;

    cout << "Dados inseridos:" << endl;
    while (input >> nome >> idade)
    {
        cout << nome << " " << idade << endl;
    }

    input.close();
}