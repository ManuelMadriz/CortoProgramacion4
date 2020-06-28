#include "iostream"

using namespace std;

float media( float[], int);/*Funcion que devuelve la media de los datos contenidos en un arreglo*/

int eriores( float, float[], int, bool);
/*Funcion que devuelve la cantidad de elementos de un arreglo que son supERIORES(si el parametro bool es verdadero)
o infERIORES(si el parametro bool es falso) a un numero determinado*/

int main()
{
    int i; /*Contador para regorrer el arreglo*/
    int n = 25;
    /*Cantidad de estudiantes. En el programa final siempre sera 25, pero me servira para algunas pruebas preliminares*/
    float estatura[n]; /*Arreglo donde estaran las estaturas de todos los estudiantes*/
    float promedio, superiores, inferiores;

    cout << endl << "Este programa calcula el promedio de estaturas de una clase de " << n << " alumnos, y la cantidad de estudiantes que estan por arriba y por debajo de la media" << endl << endl;

    for ( i = 0; i < n; i++)
    {
        cout << "Ingrese la altura del estudiante numero " << i + 1 << ": ";
        cin >> estatura[i];
    }
        
    promedio = media( estatura, n);
    superiores = eriores(promedio, estatura, n, true);
    inferiores = eriores(promedio, estatura, n, false);

    cout << endl << "El promedio de estaturas es: " << promedio;
    cout << endl << "La cantidad de estudiantes superiores a la media son " << superiores << endl;
    cout << endl << "La cantidad de estudiantes en la media son " << n - (superiores + inferiores) << endl;
    cout << endl << "La cantidad de estudiantes inferiores a la media son " << inferiores << endl;
}

float media( float arreglo[], int cantidad)
{
    int i;
    float sumatoria = 0;

    for ( i = 0; i < cantidad; i++)
    {
        sumatoria += arreglo[i];
    }
    return sumatoria / float(cantidad);
}

int eriores( float valor, float arreglo[], int tamanio, bool mayores)
{
    int i; /*contador para recorrer el arreglo*/
    int eriores = 0; /*Variable que llevara la cuenta de los supERIORES o infERIORES*/

    for ( i = 0; i < tamanio; i++)
    {
        if(mayores)
        {
            if (arreglo[i] > valor)
            {
                eriores++;
            }
        }
        else
        {
            if ( arreglo[i] < valor)
            {
                eriores++;
            }
        }
    }

    return eriores;
}