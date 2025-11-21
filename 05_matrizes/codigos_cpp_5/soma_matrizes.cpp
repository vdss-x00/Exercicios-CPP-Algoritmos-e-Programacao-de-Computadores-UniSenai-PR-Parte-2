#include <iostream>

using namespace std;

int main(){

    int row, col;

    cout << "Quantidade de linhas das duas matrizes: ";
    cin >> row;

    cout << "Quantidade de colunas das duas matrizes: ";
    cin >> col;

    int matrizA[row][col];
    cout << "Digite os elementos da matriz A:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> matrizA[i][j];
        }
    }

    int matrizB[row][col];
    cout << "Digite os elementos da matriz B:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> matrizB[i][j];
        }
    }

    int matrizSOMA[row][col];
    cout << "MATRIZ SOMA:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            matrizSOMA[i][j] = matrizA[i][j] + matrizB[i][j];
            cout << matrizSOMA[i][j] << " ";
        }
        cout << endl;
    }
}