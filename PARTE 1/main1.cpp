#include <iostream>
#include "main1.h"
using namespace std;

int main() {
int numero;
    cout<<"Ingrese un número: ";
    cin>>numero;  //Le pedimos un numero y lo que nos de lo guardamos en nuestra variable tipo int numero.

    if (numero!=0) { //Primero digo que si el número es distinto de 0, hay que ver si es positivo o negativo
        if(numero>0) {
            cout<<"El número ingresado "<<numero<<" es positivo."<<endl; //Este if es para ver si es positivo
        }
        if(numero<0) {
            cout<<"El número ingresado "<<numero<<" es negativo."<<endl;  //Este if es para ver si es negativo
        }
    }
else {  //Esto quiere decir que si no es cualquier número que no sea 0, quiere decir que el número introducido es 0.
    cout<<"El número ingresado "<<numero<<endl;
}



    return 0;
}