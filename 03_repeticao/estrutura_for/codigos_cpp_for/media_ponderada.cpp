#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int cont;
    float n1, n2, n3, N1, N2, N3, media;
    
    cout << "Quantas vezes deseja repetir o loop? ";
    cin >> cont;
    
    for (int i = 0; i < cont; i++)
    {
        cout << "Digite tres numeros: " << endl;
        cin >> n1;
        cin >> n2;
        cin >> n3;
        
        N1 = n1 * 2;
        N2 = n2 * 3;
        N3 = n3 * 5;
        
        media = (N1 + N2 + N3) / 10;
        
        cout << fixed << setprecision(1);
        cout << "MEDIA = " << media << endl;
    }
 
    
    return 0;
}