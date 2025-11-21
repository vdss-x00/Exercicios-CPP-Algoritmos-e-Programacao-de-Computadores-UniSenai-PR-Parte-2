#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main(){

    ifstream input("./08_manip_arq/arquivos_txt/medidas.txt");
    ofstream output("./08_manip_arq/arquivos_txt/relatorio.txt");

    if (!input)
    {
        cerr << "Erro ao abrir o arquivo 'input'.";
        return 1;
    }
    if (!output)
    {
        cerr << "Erro ao abrir o arquivo 'output'.";
        return 1;
    }

    double A, B, C;

    while (input >> A >> B >> C)
    {
        double area_quad = A * A;
        double area_tri = (A * B) / 2.0;
        double area_trap = ((A + B) * C) / 2.0;

        output << fixed << setprecision(4) << area_quad << " " 
        << area_tri << " " << area_trap << endl;
    }

    input.close();
    output.close();

    cout << "Relatorio gerado em 'relatorio.txt'.";
}




