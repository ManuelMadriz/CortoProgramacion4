#include "iostream"

using namespace std;

struct datos
{
    char name[40];
    float nota[5];
};

float media( float[], int);/*Funcion que calcula la media de un arreglo*/

void registrar( datos[], int);/*Proceso que lee los datos iniciales de los alumnos*/

void i_resultados( datos[], int); /*Proceso que calcula las notas finales, y dice si aprobo o reprobo*/

int main()
{
    int n=3; /*Numero de estudiantes*/
    
    cout << endl << "Con este programa podras calcular las notas finales de tus alumnos" << endl;

    cout << endl << "Cuantos estudiantes deseas ingresar?" << endl;
    cin >> n;

    datos alumnos[n];

    registrar( alumnos, n);

    i_resultados( alumnos, n);
}

void registrar(datos alm[],int n) 
{
    int i, j;

    for ( i = 0; i < n; i++)
    {
        cout << endl << "Ingrese el nombre del estudiante numero " << i + 1 << ": ";

        cin.ignore();/*Sin  esta instruccion, el siguiente paso no funcionaba adecuadamente*/
        cin.getline(alm[i].name, 40);

        for ( j = 0; j < 5; j++)
        {
            cout << "Ingrese la nota numero " << j + 1 << ": ";
            cin >> alm[i].nota[j];
        }
    }
}

void i_resultados( datos alm[], int n)
{
    int i;

    for ( i = 0; i < n; i++)
    {
        cout << endl  << alm[i].name << " ha sacado " << media(alm[i].nota, 5) << "." << endl;
        if(media(alm[i].nota, 5) >= 5)
        {
            cout << "Ha aprobado";
        }
        else
        {
            cout << "Ha reprobado";
        }
    }
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