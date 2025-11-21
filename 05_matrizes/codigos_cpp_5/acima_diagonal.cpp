#include <iostream>

using namespace std;

int main(){

    int n;

    cout << "Ordem da matriz: ";
    cin >> n;

    int matriz[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    int somaDiagonal = 0;
    cout << "SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j > i)
            {
                somaDiagonal += matriz[i][j];
            }
        }
    }
    cout << somaDiagonal << endl;
}