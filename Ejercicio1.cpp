#include "iostream"

using namespace std;

char murcielago(char);
/*Funcion que devolvera, como caracter, el numero que corresponde en el codigo murcielago al caracter recibido como parametro.
  En caso de que el caracter parametro no este en el codigo murcielago, devolvera el mismo parametro*/

int main()
{
    int i, n = 40;
    char c_original[n];/*Cadena original*/
    char c_murcielago[n];/*Cadena codificad*/

    cout << endl << "Este programa es capaz de transcribir una frase a codigo murcielago" << endl;

    cout << endl  << "Ingresa la frase que deseas transcribir" << endl;

    cin.getline(c_original, n);

    for ( i = 0; i < n-1; i++)
    {
        c_murcielago[i] = murcielago(c_original[i]);
    }

    cout << endl  << "La frase que has ingresado equivale a: " << endl;
    cout << c_murcielago << endl << endl;
}

char murcielago( char caracter)
{
    switch ( tolower(caracter))
    {
    case 'm':
        return '0';

    case 'u':
        return '1';

    case 'r':
        return '2';

    case 'c':
        return '3';

    case 'i':
        return '4';
    
    case 'e':
        return '5';

    case 'l':
        return '6';

    case 'a':
        return '7';

    case 'g':
        return '8';

    case 'o':
        return '9';

    default:
        return caracter;
    }
}
