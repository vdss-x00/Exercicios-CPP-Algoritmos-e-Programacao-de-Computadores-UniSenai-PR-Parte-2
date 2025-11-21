#include<iostream>

using namespace std;

int main(){

    int N;

    cout << "Quantos elementos cada vetor vai ter? ";
    cin >> N;

    int vetor_A[N];
    for (int i = 0; i < N; i++)
    {
        cout << "Digite os elementos do vetor A: ";
        cin >> vetor_A[i];
    }

    int vetor_B[N];
    for (int j = 0; j < N; j++)
    {
        cout << "Digite os elementos do vetor B: ";
        cin >> vetor_B[j];
    }

    int vetor_SOMA[N];
    for (int k = 0; k < N; k++)
    {
        vetor_SOMA[k] = vetor_A[k] + vetor_B[k];
    }

    cout << "VETOR RESULTANTE:" << endl;
    for(int i = 0; i < N; i++)
    {
        cout << vetor_SOMA[i] << endl;
    }
}