#include <iostream>
#include <iomanip>

using namespace std;

struct Funcionario{
    string nome;
    double valorHora;
    int hora;
};

int main(){

    int N;
    double pagamento;

    cout << "Quantos funcionarios serao digitados? ";
    cin >> N;

    Funcionario vetor[N];
    for (int i = 0; i < N; i++)
    {
        cout << "Insira as informacoes do " << i + 1 << "o funcionario:" << endl;
        cout << "Nome: ";
        cin >> vetor[i].nome;

        cout << "Valor da hora: ";
        cin >> vetor[i].valorHora;

        cout << "Horas trabalhadas: ";
        cin >> vetor[i].hora;
    }

    cout << "PAGAMENTOS:" << endl;
    for (int i = 0; i < N; i++)
    {
        pagamento = vetor[i].valorHora * vetor[i].hora;
        cout << fixed << setprecision(2);
        cout << vetor[i].nome << ": " << pagamento << endl;
    }
}