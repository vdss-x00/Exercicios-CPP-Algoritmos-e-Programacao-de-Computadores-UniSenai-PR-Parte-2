#include <iostream>

using namespace std;

int main(){

    int row, col;

    cout << "Quantidade de linhas: ";
    cin >> row;

    cout << "Quantidade de colunas: ";
    cin >> col;

    int matriz[row][col];

    for(int i = 0 ; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Elemento [" << i << "," << j << "]; ";
            cin >> matriz[i][j];
        }
    }

    cout << "VALORES NEGATIVOS:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matriz[i][j] < 0)
            {
                cout << matriz[i][j] << endl;
            }
        }
    }
}