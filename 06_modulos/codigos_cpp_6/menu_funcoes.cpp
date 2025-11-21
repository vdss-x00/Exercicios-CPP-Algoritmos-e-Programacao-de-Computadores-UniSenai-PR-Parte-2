#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void lerVetor(int &N, vector<int> &vetor) {
    cout << "Digite a quantidade de elementos: ";
    cin >> N;
    vetor.resize(N);

    cout << "Digite os " << N << " valores:" << endl;
    for (int i = 0; i < N; i++) 
    {
        cin >> vetor[i];
    }
}

double media(const vector<int> &vetor) {
    if (vetor.empty()) 
    {
        return 0;
    }
    double soma = 0;

    for (int i = 0; i < vetor.size(); i++) 
    {
        soma += vetor[i];
    }
    return soma / vetor.size();
}

int maior(const vector<int> &vetor) {
    if (vetor.size() == 0)
    {
        return 0;
    } 

    int m = vetor[0];
    for (int i = 0; i < vetor.size(); i++) 
    {
        if (vetor[i] > m) 
        {
            m = vetor[i];
        }
    }
    return m;
}


int menor(const vector<int> &vetor) {
    if (vetor.size() == 0)
    {
        return 0;
    }

    int m = vetor[0];
    for (int i = 0; i < vetor.size(); i++) 
    {
        if (vetor[i] < m) 
        {
            m = vetor[i];
        }
    }
    return m;
}



int contarPares(const vector<int> &vetor) {
    if (vetor.size() == 0) {
        return 0;
    }

    int cont = 0;
    for (int i = 0; i < vetor.size(); i++) {
        if (vetor[i] % 2 == 0) {
            cont++;
        }
    }
    return cont;
}


int main() {

    int N = 0;
    vector<int> vetor;
    int opcao;

    do 
    {
        cout << "MENU DE FUNCOES" << endl;
        cout << "1 - Ler N e o vetor" << endl;
        cout << "2 - Media dos valores" << endl;
        cout << "3 - Maior valor" << endl;
        cout << "4 - Menor valor" << endl;
        cout << "5 - Contar pares" << endl;
        cout << "6 - Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) 
        {
            case 1:
                lerVetor(N, vetor);
                break;
            case 2:
                cout << fixed << setprecision(2);
                cout << "Media = " << media(vetor) << endl;
                break;
            case 3:
                cout << "Maior = " << maior(vetor) << endl;
                break;
            case 4:
                cout << "Menor = " << menor(vetor) << endl;
                break;
            case 5:
                cout << "Quantidade de pares = " << contarPares(vetor) << endl;
                break;
            case 6:
                cout << "Saindo..." << endl;
                break;
            default:
                cout << "Opcao invalida!" << endl;
        }
    } 
    while (opcao != 6);
}
