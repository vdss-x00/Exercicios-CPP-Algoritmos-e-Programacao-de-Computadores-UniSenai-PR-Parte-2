#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main(){

    ofstream output ("./08_manip_arq/arquivos_txt/consumo.txt");

    if (!output)
    {
        cerr << "Erro ao criar o arquivo 'consumo.txt'. Por favor, tente novamente.";
        return 1;
    }

    int N, viagem = 1, cont = 0;
    double dist, combust, consumo, soma = 0;

    cout << "Quantas viagens foram feitas? ";
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cout << "Distancia da viagem " << i + 1 << ": ";
        cin >> dist;

        cout << "Combustivel consumido: ";
        cin >> combust;

        output << dist << " " << combust << endl;
    }

    output.close();

    ifstream input("./08_manip_arq/arquivos_txt/consumo.txt");

    if (!input)
    {
        cout << "Erro ao abrir 'input'. Por favor, tente novamente.";
        return 1;
    }

    while (input >> dist >> combust)
    {
        consumo = dist / combust;
        cout << "Viagem " << viagem++ << ": " << consumo << endl;
        soma += consumo;
        cont++;
    }
    cout << fixed << setprecision(3);
    cout << "Media geral = " << soma / cont << endl;

    input.close();
}