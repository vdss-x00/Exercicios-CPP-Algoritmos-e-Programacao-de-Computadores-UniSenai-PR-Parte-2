#include <iostream>
#include <iomanip>

using namespace std;

struct Produto{
    string nome;
    double preco_compra, preco_venda;
};

int main(){

    int N, lucro_10 = 0, lucro_entre = 0, lucro_acima = 0;
    double lucro_calc, total_compra = 0.00, total_venda = 0.00, total_lucro = 0.00;

    cout << "Quantos produtos serao digitados? ";
    cin >> N;

    Produto vetor[N];

    for (int i = 0; i < N; i++)
    {
        cout << "Produto " << i + 1 << endl;
        cout << "Nome: ";
        cin >> vetor[i].nome;

        cout << "Preco de Compra: ";
        cin >> vetor[i].preco_compra;

        cout << "Preco de venda: ";
        cin >> vetor[i].preco_venda;
    }

    cout << endl; 
    for (int i = 0; i < N; i++) 
     {
        lucro_calc = ((vetor[i].preco_venda - vetor[i].preco_compra) / vetor[i].preco_compra) * 100;

        if (lucro_calc < 10) 
        {
            lucro_10++;
        }
        else if (lucro_calc <= 20) 
        {
            lucro_entre++;
        }
        else 
        {
            lucro_acima++;
        }

        total_compra += vetor[i].preco_compra;
        total_venda += vetor[i].preco_venda;
        total_lucro += (vetor[i].preco_venda - vetor[i].preco_compra);
    }

    cout << "RELATORIO:" << endl;
    cout << "Lucro abaixo de 10%: " << lucro_10 << endl;
    cout << "Lucro entre 10 e 20%: " << lucro_entre << endl;
    cout << "Lucro acima de 20%: " << lucro_acima << endl;
    cout << fixed << setprecision(2);
    cout << "Valor total de compra: " << total_compra << endl;
    cout << "Valor total de venda: " << total_venda << endl;
    cout << "Lucro total: " << total_lucro << endl;

}