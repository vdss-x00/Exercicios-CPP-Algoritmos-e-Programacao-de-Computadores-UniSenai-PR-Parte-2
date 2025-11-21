#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    
    int n, row, col;

    cout << "Ordem da matriz: ";
    cin >> n;

    float matriz[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    float soma_pos = 0.0;
    cout << "SOMA DOS POSITIVOS = ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matriz[i][j] > 0)
            {
                soma_pos += matriz[i][j];
            }


        }
    }
    cout << fixed << setprecision(1);
    cout << soma_pos << endl;

    cout << "Escolha uma linha: ";
    cin >> row;
    cout << "LINHA ESCOLHIDA: ";
    for (int j = 0; j < n; j++)
    {
        cout << fixed << setprecision(1);
        cout << matriz[row][j] << " ";
    }
    cout << endl;

    cout << "Escolha uma coluna: ";
    cin >> col;
    cout << "COLUNA ESCOLHIDA: ";
    for (int i = 0; i < n; i++)
    {
        cout << fixed << setprecision(1);
        cout << matriz[i][col] << " ";
    }
    cout << endl;

    cout << "DIAGONAL PRINCIPAL: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << fixed << setprecision(1);
        cout << matriz[i][i] << endl;
    }

    cout << "MATRIZ ALTERADA: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matriz[i][j] < 0)
            {
                matriz[i][j] = pow(matriz[i][j],2);
            }
            cout << fixed << setprecision(1);
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

}