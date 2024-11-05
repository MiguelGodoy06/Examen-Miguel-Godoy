#include "main3.h"
#include <iostream>
using namespace std;

int main() {
    const int NumEjs = 8; //Creo una constante para que no varíe el número de ejercicios
    float notas[NumEjs];  //Creo un array para poder almacenar las notas
    float suma = 0.0;   //Creo una variable para tener en cuenta la suma de todas las notas y poder sacar luego el promedio

    for (int i = 0; i < NumEjs; i++) {  //Empleo un ciclo for que pregunte las notas de cada ejercicio y las vaya almacenando a su vez que va haciendo la suma para luego sacar el promedio.
        cout << "\nIngrese la nota " << (i + 1) << ": ";
        cin >> notas[i];
        suma += notas[i];
    }

    float promedio = suma / NumEjs;  //Una vez tengo la suma de todos los ejercicios, lo divido por el propio número de ejercicios para poder sacar el promedio.
    cout << "\nLa nota media de los " << NumEjs << " ejercicios es de: " << promedio << endl;

    return 0;
}