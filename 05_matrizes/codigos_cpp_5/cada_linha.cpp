#include <iostream>

using namespace std;

int main(){

    int n;

    cout << "Ordem da matriz: ";
    cin >> n;

    int matriz [n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << "MAIOR ELEMENTO DE CADA LINHA:" << endl;
    for (int i = 0; i < n; i++)
    {
        int maior = matriz[i][0];
        for (int j = 1; j < n; j++)
        {
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
            }
        }
        cout << maior << endl;
    }
}