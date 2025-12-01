#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    int N;
    cin >> N;

    int total = 0;
    int coelhos = 0, ratos = 0, sapos = 0;

    for (int i = 0; i < N; ++i) 
    {
        int quantia;
        char tipo;
        cin >> quantia >> tipo;

        total += quantia;

        switch (tipo) 
        {
            case 'C': coelhos += quantia; break;
            case 'R': ratos += quantia; break;
            case 'S': sapos += quantia; break;
        }
    }

    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << coelhos << endl;
    cout << "Total de ratos: " << ratos << endl;
    cout << "Total de sapos: " << sapos << endl;


    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << (coelhos * 100.0 / total) << " %" << endl;
    cout << "Percentual de ratos: " << (ratos * 100.0 / total) << " %" << endl;
    cout << "Percentual de sapos: " << (sapos * 100.0 / total) << " %" << endl;

    return 0;
}