#include <iostream>
#include <string>
using namespace std;
string InvertirPalabra(string f);
int main()
{
    string palabra;
    cout << "Ingrese palabra a invertir: ";
    getline(cin, palabra);
    cout << InvertirPalabra(palabra) << endl;
    return 0;
}

string InvertirPalabra(string f)
{
    string invertida;
    for (int i=f.size()-1; i >= 0; i--)
    {
        invertida += f[i];
    }
    return invertida;
}
