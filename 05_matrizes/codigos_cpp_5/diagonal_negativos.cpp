#include <iostream>

using namespace std;

int main() {
    
    int n, qtd_negativos = 0;
    
    cout << "Qual a ordem da matriz? ";
    cin >> n;
    
    int matriz[n][n];
    
    for(int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cout << "Elemento [" << row << "," << col << "]; ";
            cin >> matriz[row][col];
            
            if (matriz[row][col] < 0)
            {
                qtd_negativos++;
            }
        }
    }
    
    cout << "DIAGONAL PRINCIPAL:" << endl;
    
    for(int row = 0; row < n; row++)
    {
        for(int col = 0; col < n; col++)
        {
            if (row == col)
            {
                cout << matriz[row][col] << " ";
            }
        }
    }
    
    cout << endl;
    cout << "QUANTIDADE DE NEGATIVOS: " << qtd_negativos;

    return 0;
}