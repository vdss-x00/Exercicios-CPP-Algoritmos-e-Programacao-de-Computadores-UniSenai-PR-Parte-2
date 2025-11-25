#include <iostream>

using namespace std;

int main(){

    int num, fatorial, result = 1;

    cout << "Insira o numero a ser fatorado:";
    cin >> num;

    for (fatorial = 1; fatorial <= num; fatorial++)
    {
        result = result * fatorial;
    }

    cout << "O fatorial de " << num << " e igual a " << result;


    return 0;
}