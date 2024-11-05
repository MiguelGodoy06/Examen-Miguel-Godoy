#include <iostream>
#include "main2.h"
using namespace std;

int main() {
int dia;
    cout<<"Ingresa un día de la semana de 1 a 7: ";
    cin>>dia;


    while (true) {
        cout << "Ingresa un número del 1 al 7: ";
        cin >> dia;

        if (dia >= 1 && dia <= 7) {
            switch (dia) {
                case 1:
                    cout << "Lunes" << endl;
                break;
                case 2:
                    cout << "Martes" << endl;
                break;
                case 3:
                    cout << "Miércoles" << endl;
                break;
                case 4:
                    cout << "Jueves" << endl;
                break;
                case 5:
                    cout << "Viernes" << endl;
                break;
                case 6:
                    cout << "Sábado" << endl;
                break;
                case 7:
                    cout << "Domingo" << endl;
                break;
            }
            break; // Salir del bucle si el número es válido
        } else {
            cout << "Número inválido. Por favor, ingresa un número del 1 al 7." << endl;
        }
    }



    return 0;
}
