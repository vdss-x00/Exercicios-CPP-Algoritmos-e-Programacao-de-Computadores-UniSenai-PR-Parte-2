#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main(){

    ofstream output("./08_manip_arq/arquivos_txt/folha.txt");

    if (!output)
    {
        cout << "Erro ao criar 'folha.txt'. Por favor, tente novamente.";
        return 1;
    }

    string nome;
    double valorHora, pagamento, total = 0;
    int hora, N;

    cout << "Quantos funcionario serao digitados? ";
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cout << "Insira as informacoes do " << i + 1 << "o funcionario:" << endl;
        cout << "Nome: ";
        cin >> nome;

        cout << "Valor da hora: ";
        cin >> valorHora;

        cout << "Horas trabalhadas: ";
        cin >> hora;

        output << nome << " " << valorHora << " " << hora << endl;
    }

    output.close();

    ifstream input("./08_manip_arq/arquivos_txt/folha.txt");

    if (!input)
    {
        cout << "Erro ao abrir 'input'. Por favor, tente novamente.";
        return 1;
    }

    cout << "Total:" << endl;
    cout << fixed << setprecision(2);
    while (input >> nome >> valorHora >> hora)
    {
        pagamento = valorHora * hora;
        cout << nome << ": " << pagamento << endl;
        total += pagamento;
    }
    cout << "Total da folha: " << total << endl;


    input.close();

}