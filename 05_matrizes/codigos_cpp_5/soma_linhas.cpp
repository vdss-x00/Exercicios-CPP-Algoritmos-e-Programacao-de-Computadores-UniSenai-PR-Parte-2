#include <iostream>
#include <iomanip> 

using namespace std;

int main(){
    
    int row, col;
    
    cout << "Quantidade de linhas: ";
    cin >> row;
    
    cout << "Quantidade de colunas: ";
    cin >> col;
    
    double matriz[row][col];
    
    for (int i = 0; i < row; i++)
    {
        cout << "Digite os elementos da " << i+1 << "a linha: " << endl;
        for (int j = 0; j < col; j++)
        {
            cin >> matriz[i][j]; 
        }
    }
    
    cout << endl;
    
    cout << "VETOR GERADO:" << endl;
    cout << fixed << setprecision(1);
    
    for (int i = 0; i < row; i++)
    {
        double soma = 0; 
        for (int j = 0; j < col; j++)
        {
            soma += matriz[i][j]; 
        }
        cout << soma << endl;
    }
    
    return 0;
}
