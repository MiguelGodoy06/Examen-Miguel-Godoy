#include <iostream>
#include "main2.h"
using namespace std;

int main() {
int dia;

    while (true) {  //En esta caso empleo un bucle while infinito para que hasta que no introduzca un número válido no deje de preguntar.
        cout << "Ingresa un número del 1 al 7: ";
        cin >> dia;

        if (dia >= 1 && dia <= 7) {
            switch (dia) {  //Empleo el uso de un switch siempre que sea un día posible de la semana para cada caso.
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
            cout << "Número inválido. Por favor, ingresa un número del 1 al 7." << endl;    //Si el número no está entre 1 y 7, dice que es incorrecto que vuelva a introducirlo y se repite el bucle.
        }
    }



    return 0;
}
