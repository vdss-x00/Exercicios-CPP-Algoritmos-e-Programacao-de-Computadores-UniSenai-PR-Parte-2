#include <iostream>
#include <iomanip>

using namespace std;

void leitura(string &nome, double &valorHora, int &hora){

    cout << "Nome do funcionario: ";
    getline(cin, nome);

    cout << "Valor por hora: ";
    cin >> valorHora;

    cout << "Horas trabalhadas: ";
    cin >> hora;

    cin.ignore();
}

double calcPagamento(double valorHora, int hora){
    return valorHora * hora;
}

void exibirPagamento(string nome, double total){
    cout << fixed << setprecision(2);
    cout << "O valor a ser pago a " << nome << " e de " << total;
}

int main(){

    string nome;
    double valorHora;
    int hora;

    leitura(nome, valorHora, hora);

    double pagamento = calcPagamento(valorHora,hora);

    exibirPagamento(nome, pagamento);
}