#include "main3.h"
#include <iostream>
using namespace std;

int main() {
    const int NumEjs = 8;
    float notas[NumEjs];
    float suma = 0.0;

    for (int i = 0; i < NumEjs; i++) {
        cout << "\nIngrese la nota " << (i + 1) << ": ";
        cin >> notas[i];
        suma += notas[i];
    }

    float promedio = suma / NumEjs;
    cout << "\nLa nota media de los " << NumEjs << " ejercicios es de: " << promedio << endl;












    return 0;
}