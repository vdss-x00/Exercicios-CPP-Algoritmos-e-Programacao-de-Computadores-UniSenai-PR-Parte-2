#include <iostream>

using namespace std;

int main(){

    int num, tab;

    cout << "Insira um numero: ";
    cin >> num;

    for(int i = 1; i <= 10; i++)
    {
        tab = num * i;
        cout << i << " X " << num << " = " << tab << endl;
    }

    return 0;
}